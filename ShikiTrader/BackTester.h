#pragma once
#include "ui_BackTester.h"
#include "ui_ParamsSetting.h"
#include "StrategyTemplate.h"
#include <QtWidgets/QMainWindow>
#include <qdialog.h>
#include <qmap.h>
#include <qthread.h>
#include <qstandarditemmodel.h>
#include <qitemselectionmodel.h>


class OrderManager: public QObject {
	Q_OBJECT
private:
	int seed = 0;
	QMap<int, Order> orders;
	QList<int> activeOrders;
	QList<Order> history;
	
public:
	void setSeed(int val) { seed = val; };
public slots:
	int addOrder(Order odr);
	int cancelOrder(int id);
	void crossOrders(const QMap<FullSymbol, QList<BarData>>&);
private:
	void crossLimitOrders(int id, const  QList<BarData> &data);
	void crossStopOrders(int id, const QList<BarData> &data);
signals:
	void orderTraded(Order order);
	void orderAdded(Order order);
};

class BackTester : public QObject {
	Q_OBJECT
private:
	OrderManager mOrderManager;
	DataManager  mDataManager;
	QMap<FullSymbol, QList<BarData>> cache;

	QDateTime   mStart;
	QDateTime   mEnd;
	double mRate;
	double mSlip;
	double mMultiplier;
	double mChangeUnit;
	double mMoney;
	QString mMode;

public:
	BackTester(QDateTime  start, QDateTime  end, double rate, double slip, double multiplier, double changeUnit, double money, QString mode);
	QMap<FullSymbol, QList<BarData>> loadData(const std::set<FullSymbol> &symbols, QDateTime start, QDateTime end, Interval interval);
	OrderManager& getOrderManager() { return mOrderManager; }
	QDateTime getStartDateTime() const { return mStart; }
	QDateTime getEndDateTime() const { return mEnd; }
public slots:
	void trade(const std::set<FullSymbol> &symbols, QDateTime start, QDateTime end, Interval interval);
signals:
	void dataPrepared(const QMap<FullSymbol, QList<BarData>>& data);
};

class BackTestUnit : public QThread
{
	Q_OBJECT
private:
	BackTester										 engine;
	std::shared_ptr<StrategyTemplate> strategy;

public:
	BackTestUnit(StrategyFactory factory, QString symbol, QDateTime  start, QDateTime  end,
						double rate, double slip, double multiplier, double changeUnit, double money, QString mode);
	std::shared_ptr<StrategyTemplate> getStrategyPtr() { return strategy; }
	// bool setStrategy(QString dllPath, QMap<QString, QVariant> settings);
public slots:
	void run() Q_DECL_OVERRIDE { this->strategy->init(); this->strategy->start(); }
signals:
	void sigOneStrategyDone();
};

class BackTestWindow : public QMainWindow
{
	Q_OBJECT
private:
	Ui::Form ui;
	std::shared_ptr<BackTestUnit> unitPtr;
	QList<BackTestUnit> backTesters;
public:
	BackTestWindow(QWidget* parent);
public slots:
	void on_pushButtonStartBackTest_clicked();
	void on_pushButtonParamsOptimize_clicked();
	void on_pushButtonOptimizeResult_clicked();
	void on_pushButtonSaveResult_clicked();
	void on_sigOneStragetyDone();
private:
	void setStrategyAndRun(std::shared_ptr<StrategyTemplate>);
};

class SetStrategyParamsWindow : public QDialog
{
	Q_OBJECT
private:
	Ui::ParamsSetting* ui;
public:
	QStandardItemModel* model;
	QItemSelectionModel* select;

public:
	SetStrategyParamsWindow(QWidget* parent, int rows);
	~SetStrategyParamsWindow();
};