#include "BackTester.h"
#include <qdatetime.h>

void StrategyTemplate::sendOrder(Order order)
{
	emit this->sigSendOrder(order);
}

StrategyTemplate::StrategyTemplate(QObject* engine, QMap<QString, QVariant> settings, QString mode)
{
	if (mode == "BackTest")
	{
		BackTester *btEngine = qobject_cast<BackTester*>(engine);
		OrderManager* odrManager = &(btEngine->getOrderManager());
		// 连接策略和回测引擎
		connect(this, SIGNAL(StrategyTemplate::sigAskData), btEngine, SLOT(BackTester::trade));
		connect(btEngine, SIGNAL(BackTester::dataPrepared), this, SLOT(StrategyTemplate::onBar));
		// 连接策略和回测引擎的订单管理器
		connect(this, SIGNAL(StrategyTemplate::sigSendOrder), odrManager, SLOT(OrderManager::addOrder));
		connect(this, SIGNAL(StrategyTemplate::sigCancelOrder), odrManager, SLOT(OrderManager::cancelOrder));
		connect(odrManager, SIGNAL(OrderManager::orderAdded), this, SLOT(StrategyTemplate::onOrder));
		connect(odrManager, SIGNAL(OrderManager::orderTraded), this, SLOT(StrategyTemplate::onOrder));
	}
}

void StrategyTemplate::init()
{
	// 在这里请求数据初始化策略
}

void StrategyTemplate::start()
{
	emit sigAskData(this->symbols, QDateTime::currentDateTime().addDays(-1), QDateTime::currentDateTime(), Interval::minute);
}

void StrategyTemplate::buy(FullSymbol symbol, double price, int num, bool stop)
{
	Order order{ symbol, -1,  stop ? OrderType::Stop : OrderType::Limit, Direction::Long, Offset::Open, OrderStatus::Submitting, num, price };
	this->sendOrder(order);
}

void StrategyTemplate::sell(FullSymbol symbol, double price, int num, bool stop)
{
	Order order{ symbol, -1,  stop ? OrderType::Stop : OrderType::Limit, Direction::Short, Offset::Close, OrderStatus::Submitting, num, price };
	this->sendOrder(order);
}

void StrategyTemplate::shortSell(FullSymbol symbol, double price, int num, bool stop)
{
	Order order{ symbol, -1,  stop ? OrderType::Stop : OrderType::Limit, Direction::Short, Offset::Open, OrderStatus::Submitting, num, price };
	this->sendOrder(order);
}

void StrategyTemplate::cover(FullSymbol symbol, double price, int num, bool stop)
{
	Order order{ symbol, -1,  stop ? OrderType::Stop : OrderType::Limit, Direction::Long, Offset::Close, OrderStatus::Submitting, num, price };
	this->sendOrder(order);
}

void StrategyTemplate::cancelAll()
{
	for (int id : this->allOrderIds)
	{
		if (!this->allTradedIds.contains(id))
		{
			emit sigCancelOrder(id);
		}
	}
}

void StrategyTemplate::onOrder(Order order)
{
	if (order.status == OrderStatus::Submitting)
	{
		this->allOrderIds.append(order.orderid);
	}
	else if (order.status == OrderStatus::AllTraded)
	{
		this->symbols.insert(order.symbol);
		if (order.mDirection == Direction::Long)
			pos += order.vol;
		else
			pos -= order.vol;
	}
}
void StrategyTemplate::onBar(const QMap<FullSymbol,QList<BarData>>& data)
{
	// 在这里处理数据
	
	// 发出订单
	
	// 再发出信号请求数据
	emit sigAskData(this->symbols, QDateTime::currentDateTime().addDays(-1), QDateTime::currentDateTime(), Interval::minute);
}