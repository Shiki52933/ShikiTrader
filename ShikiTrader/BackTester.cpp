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
	//�޸Ķ�����Ϣ
	this->seed += 1;
	ord.orderid = seed;
	ord.status = OrderStatus::Submitting;
	//���뵽������
	this->orders[ord.orderid] = ord;
	this->activeOrders.append(ord.orderid);
	emit orderAdded(ord);
	//0����ȷ���
	return 0;
}
int OrderManager::cancelOrder(int id)
{
	// ����ֵ��0 == ��ȷȡ�� �� -1 == �Ѿ���ȫ�򲿷ֽ��� 
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
		// ���
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
	// ���ֹͣ��
	// ����״̬
	if (this->orders[id].status == OrderStatus::Submitting)
		this->orders[id].status = OrderStatus::NotTraded;
	//����
	auto& order = this->orders[id];
	// �ж�����
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
		//���ƶ������ı�Ϊִ�м۸���뵽��ʷ������
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
		//���ƶ������ı�Ϊִ�м۸���뵽��ʷ������
		auto tradedOrder = order;
		tradedOrder.price = shortCrossPrice;
		this->history.append(tradedOrder);
		emit this->orderTraded(tradedOrder);
		return;
	}
}
void OrderManager::crossLimitOrders(int id, const QList<BarData>& data)
{
	// ����״̬
	if (this->orders[id].status == OrderStatus::Submitting)
		this->orders[id].status = OrderStatus::NotTraded;
	//����
	auto& order = this->orders[id];
	//�ж�����
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
		//���ƶ������ı�Ϊִ�м۸���뵽��ʷ������
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
		//���ƶ������ı�Ϊִ�м۸���뵽��ʷ������
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
	// ��һ�����õ�����
	this->cache = this->loadData(symbols, start, end, interval);
	// �ڶ���������
	this->mOrderManager.crossOrders(cache);
	// �������������źŸ����ԣ����Խ�������
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
		// ѡ�в���ʱִ��
		// ������ֶν���BackTestUnit
		QString symbol = ui.lineEditFullSymbol->text();
		QDateTime   start = QDateTime(ui.dateEditStart->date(), QTime(0,0));
		QDateTime   end = QDateTime(ui.dateEditEnd->date(), QTime(23, 59));
		double rate = ui.lineEditRate->text().toDouble();
		double slip = ui.lineEditSlip->text().toDouble();
		double multiplier = ui.lineEditMultiplier->text().toDouble();
		double changeUnit = ui.lineEditChangeUnit->text().toDouble();
		double money = ui.lineEditMoney->text().toDouble();
		QString mode = ui.comboBoxBackTestMode->currentText();
		// ɨ��dll�ļ��У���ò��Թ�����
		QString strategyPath = QCoreApplication::applicationDirPath() + "/strategy/dll/";
		QString filePath = strategyPath + strategyName + ".dll";
		QLibrary strategyLib = QLibrary(filePath);
		StrategyFactory factory = (StrategyFactory)(strategyLib.resolve( (strategyName + "Constructor").toLatin1() ));
		// �����ﹹ��ز����
		if (factory == nullptr)
			return;
		this->unitPtr = std::make_shared<BackTestUnit>(factory, symbol, start, end, rate, slip, multiplier, changeUnit, money, mode);
		// �����ﹹ��������ô���
		setStrategyAndRun(this->unitPtr->getStrategyPtr());
		// Ȼ��ʼ�ز�
		this->unitPtr->start();
		// Ӧ������ֱ���߳̽��������������һЩ��Ϣ���ı�GUI״̬
		this->ui.textEditOutput->append("start backtesting");
		this->ui.pushButtonStartBackTest->setEnabled(false);
		this->unitPtr->wait();
		this->ui.textEditOutput->append("backtesting end");
		this->ui.pushButtonStartBackTest->setEnabled(true);
	}
}

void BackTestWindow::setStrategyAndRun(std::shared_ptr<StrategyTemplate> strategyPtr)
{
	// ��һ����ɨ��ָ��ָ���������Բ�����
	QStringList propNames;
	auto meta = strategyPtr->metaObject();
	for (int i = meta->propertyOffset(); i < meta->propertyCount(); ++i)
	{
		auto prop = meta->property(i);
		QString name(prop.name());
		propNames.append(name);
	}
	// �ڶ���������ɨ�赽�����Դ����Ի���
	std::shared_ptr<SetStrategyParamsWindow> dialogPtr = std::make_shared<SetStrategyParamsWindow>(this, propNames.size());
	for (int i = 0; i < propNames.size(); ++i)
	{
		auto item = new QStandardItem(propNames[i]);
		dialogPtr->model->setItem(i, 0, item);
	}
	int ret = dialogPtr->exec();
	// ���������ڶԻ���ر�ǰ���ò�������
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