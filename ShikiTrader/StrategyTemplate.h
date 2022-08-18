#pragma once
#include "DataTypes.h"
#include <qdatetime.h>


class StrategyTemplate : public QObject {
	Q_OBJECT
protected:
	int pos=0;
	std::set<FullSymbol> symbols;
	std::map<QDateTime, FullSymbol> formerQuery;
	QList<int> allOrderIds;
	QList<int> allTradedIds;

private:
	void sendOrder(Order order);
public:
	StrategyTemplate(QObject* engine, QMap<QString, QVariant> settings, QString mode="BackTest");
	virtual void init();
	virtual void start(); // start是入口
protected:
	void buy(FullSymbol symbol, double price, int num, bool stop);
	void sell(FullSymbol symbol, double price, int num, bool stop);
	void shortSell(FullSymbol symbol, double price, int num, bool stop); //short和qobject某个成员重名了
	void cover(FullSymbol symbol, double price, int num, bool stop);
	void cancelAll();
signals:
	void sigSendOrder(Order order);
	void sigCancelOrder(int id);
	void sigAskData(std::set<FullSymbol> symbols, QDateTime start, QDateTime end, Interval interval);
public slots:
	virtual void onBar(const QMap<FullSymbol,QList<BarData>>& data);
	void onOrder(Order order);

};

typedef StrategyTemplate* (*StrategyFactory)(QObject*, QMap<QString, QVariant>, QString);