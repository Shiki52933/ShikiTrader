#include "BackTester.h"
#include <qmap.h>
#include <algorithm>
#include <qdatetime.h>
#include <qlibrary.h>
#include <qcoreapplication.h>
#include <qmetaobject.h>
#include <qdialog.h>
#include <qabstractitemview.h>
#include "ui_ParamsSetting.h"


int OrderManager::addOrder(Order ord)
{
	//修改订单信息
	this->seed += 1;
	ord.orderid = seed;
	ord.status = OrderStatus::Submitting;
	//加入到订单中
	this->orders[ord.orderid] = ord;
	this->activeOrders.append(ord.orderid);
	emit orderAdded(ord);
	//0是正确完成
	return 0;
}
int OrderManager::cancelOrder(int id)
{
	// 返回值：0 == 正确取消 ； -1 == 已经完全或部分交易 
	auto& ord = this->orders[id];
	auto status = ord.status;
	if (status == OrderStatus::AllTraded or status == OrderStatus::PartTraded)
		return -1;
	this->activeOrders.removeOne(ord.orderid);
	this->orders[id].status = OrderStatus::Cancelled;
	return 0;
}
void OrderManager::crossOrders(const QMap<FullSymbol, QList<BarData>>& data)
{
	for(auto id : this->activeOrders)
	{
		auto symbol = this->orders[id].symbol;
		// 撮合
		if (data.contains(symbol)) 
		{
			if(this->orders[id].type == OrderType::Stop)
				crossStopOrders(id, data[symbol]);
			else
				crossLimitOrders(id, data[symbol]);
		}
	}
}
void OrderManager::crossStopOrders(int id, const QList<BarData>&data)
{
	// 撮合停止单
	// 更改状态
	if (this->orders[id].status == OrderStatus::Submitting)
		this->orders[id].status = OrderStatus::NotTraded;
	//交易
	auto& order = this->orders[id];
	// 判断依据
	bool longCross = false, shortCross = false;
	double longCrossPrice = 0, shortCrossPrice = 0;
	for (auto& bar : data)
	{
		longCrossPrice = std::max(bar.mOpen, order.price);
		longCross = (order.mDirection == Direction::Long and bar.mHigh>=order.price and longCrossPrice > 0);
		shortCrossPrice = std::min(bar.mOpen, order.price);
		shortCross = (order.mDirection == Direction::Short and bar.mLow<=order.price and shortCrossPrice > 0);
		if (longCross or shortCross)
			break;
	}

	if (longCross)
	{
		order.status = OrderStatus::AllTraded;
		this->activeOrders.removeOne(id);
		//复制订单，改变为执行价格加入到历史订单中
		auto tradedOrder = order;
		tradedOrder.price = longCrossPrice;
		this->history.append(tradedOrder);
		emit this->orderTraded(tradedOrder);
		return;
	}
	if (shortCross)
	{
		order.status = OrderStatus::AllTraded;
		this->activeOrders.removeOne(id);
		//复制订单，改变为执行价格加入到历史订单中
		auto tradedOrder = order;
		tradedOrder.price = shortCrossPrice;
		this->history.append(tradedOrder);
		emit this->orderTraded(tradedOrder);
		return;
	}
}
void OrderManager::crossLimitOrders(int id, const QList<BarData>& data)
{
	// 更改状态
	if (this->orders[id].status == OrderStatus::Submitting)
		this->orders[id].status = OrderStatus::NotTraded;
	//交易
	auto& order = this->orders[id];
	//判断依据
	bool longCross=false, shortCross=false;
	double longCrossPrice=0, shortCrossPrice=0;
	for (auto& bar : data) 
	{
		longCrossPrice = std::min(bar.mOpen, order.price);
		longCross = (order.mDirection == Direction::Long and order.price >= bar.mLow and longCrossPrice>0);
		shortCrossPrice = std::max(bar.mOpen, order.price);
		shortCross = (order.mDirection == Direction::Short and order.price <= bar.mHigh and shortCrossPrice>0);
		if (longCross or shortCross)
			break;
	}

	if (longCross)
	{
		order.status = OrderStatus::AllTraded;
		this->activeOrders.removeOne(id);
		//复制订单，改变为执行价格加入到历史订单中
		auto tradedOrder = order;
		tradedOrder.price = longCrossPrice;
		this->history.append(tradedOrder);
		emit this->orderTraded(tradedOrder);
		return;
	}
	if (shortCross) 
	{
		order.status = OrderStatus::AllTraded;
		this->activeOrders.removeOne(id);
		//复制订单，改变为执行价格加入到历史订单中
		auto tradedOrder = order;
		tradedOrder.price = shortCrossPrice;
		this->history.append(tradedOrder);
		emit this->orderTraded(tradedOrder);
		return;
	}
}

QMap<FullSymbol, QList<BarData>> BackTester::loadData(const std::set<FullSymbol> &symbols, QDateTime start, QDateTime end, Interval interval)
{
	return std::move(this->mDataManager.loadData(symbols, start, end, interval));
}
BackTester::BackTester(QDateTime start, QDateTime end, double rate, double slip, double multiplier, double changeUnit, double money, QString mode)
	:mStart(start), mEnd(end), mRate(rate), mSlip(slip), mMultiplier(multiplier), mChangeUnit(changeUnit), mMoney(money), mMode(mode)
{
}
void BackTester::trade(const std::set<FullSymbol> &symbols, QDateTime start, QDateTime end, Interval interval) 
{
	// 第一步：拿到数据
	this->cache = this->loadData(symbols, start, end, interval);
	// 第二步：交易
	this->mOrderManager.crossOrders(cache);
	// 第三步：发出信号给策略，策略接收数据
	emit dataPrepared(this->cache);
}

BackTestUnit::BackTestUnit(StrategyFactory factory, QString symbol, QDateTime  start, QDateTime  end,
	double rate, double slip, double multiplier, double changeUnit, double money, QString mode)
	:engine(start, end, rate, slip, multiplier, changeUnit, money, mode)
{
	QMap<QString, QVariant> settings;
	settings[QString("symbol")] = symbol;
	strategy = std::shared_ptr<StrategyTemplate>(factory(&engine, settings, QString("BackTest")));
}

BackTestWindow::BackTestWindow(QWidget* parent): QMainWindow(parent)
{
	ui.setupUi(this);
	setCentralWidget(ui.mainSpliter);
}

void BackTestWindow::on_pushButtonStartBackTest_clicked()
{
	QString strategyName = ui.comboBoxSelectStrategy->currentText();
	if (!strategyName.isEmpty())
	{
		// 选中策略时执行
		// 下面的字段交给BackTestUnit
		QString symbol = ui.lineEditFullSymbol->text();
		QDateTime   start = QDateTime(ui.dateEditStart->date(), QTime(0,0));
		QDateTime   end = QDateTime(ui.dateEditEnd->date(), QTime(23, 59));
		double rate = ui.lineEditRate->text().toDouble();
		double slip = ui.lineEditSlip->text().toDouble();
		double multiplier = ui.lineEditMultiplier->text().toDouble();
		double changeUnit = ui.lineEditChangeUnit->text().toDouble();
		double money = ui.lineEditMoney->text().toDouble();
		QString mode = ui.comboBoxBackTestMode->currentText();
		// 扫描dll文件夹，获得策略构造器
		QString strategyPath = QCoreApplication::applicationDirPath() + "/strategy/dll/";
		QString filePath = strategyPath + strategyName + ".dll";
		QLibrary strategyLib = QLibrary(filePath);
		StrategyFactory factory = (StrategyFactory)(strategyLib.resolve( (strategyName + "Constructor").toLatin1() ));
		// 在这里构造回测对象
		if (factory == nullptr)
			return;
		this->unitPtr = std::make_shared<BackTestUnit>(factory, symbol, start, end, rate, slip, multiplier, changeUnit, money, mode);
		// 在这里构造参数设置窗口
		setStrategyAndRun(this->unitPtr->getStrategyPtr());
		// 然后开始回测
		this->unitPtr->start();
		// 应该阻塞直到线程结束，在这里输出一些信息并改变GUI状态
		this->ui.textEditOutput->append("start backtesting");
		this->ui.pushButtonStartBackTest->setEnabled(false);
		this->unitPtr->wait();
		this->ui.textEditOutput->append("backtesting end");
		this->ui.pushButtonStartBackTest->setEnabled(true);
	}
}

void BackTestWindow::setStrategyAndRun(std::shared_ptr<StrategyTemplate> strategyPtr)
{
	// 第一步，扫描指针指向对象的属性并保存
	QStringList propNames;
	auto meta = strategyPtr->metaObject();
	for (int i = meta->propertyOffset(); i < meta->propertyCount(); ++i)
	{
		auto prop = meta->property(i);
		QString name(prop.name());
		propNames.append(name);
	}
	// 第二步，根据扫描到的属性创建对话框
	std::shared_ptr<SetStrategyParamsWindow> dialogPtr = std::make_shared<SetStrategyParamsWindow>(this, propNames.size());
	for (int i = 0; i < propNames.size(); ++i)
	{
		auto item = new QStandardItem(propNames[i]);
		dialogPtr->model->setItem(i, 0, item);
	}
	int ret = dialogPtr->exec();
	// 第三步，在对话框关闭前设置策略属性
	if (ret == QDialog::Accepted)
	{
		for (int i = 0; i < propNames.size(); ++i)
		{
			auto value = dialogPtr->model->item(i, 1)->data();
			strategyPtr->setProperty(propNames[i].toLatin1(), value);
		}
	}
}

SetStrategyParamsWindow::SetStrategyParamsWindow(QWidget* parent, int rows)
{
	this->ui->setupUi(this);
	this->model = new QStandardItemModel(rows, 2);
	this->select = new QItemSelectionModel(this->model);
	this->ui->tableView->setModel(this->model);
	this->ui->tableView->setSelectionModel(this->select);
	this->ui->tableView->setSelectionBehavior(QAbstractItemView::SelectItems);
}

SetStrategyParamsWindow::~SetStrategyParamsWindow()
{
	delete select;
	delete model;
	delete ui;
}

void  BackTestWindow::on_pushButtonParamsOptimize_clicked()
{

}
void BackTestWindow::on_pushButtonOptimizeResult_clicked()
{

}
void BackTestWindow::on_pushButtonSaveResult_clicked()
{

}
void BackTestWindow::on_sigOneStragetyDone()
{

}