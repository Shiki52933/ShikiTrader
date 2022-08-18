#pragma once
#include "BackTester.h"
#include "ta_func.h"

class DoubleMA : public StrategyTemplate
{
	Q_OBJECT
	Q_PROPERTY(int fastWindow MEMBER mFastWindow)
	Q_PROPERTY(int slowWindow MEMBER mSlowWindow)
	static const int N = 100;
private:
	FullSymbol mSymbol;
	BackTester* mEngine;
	QDateTime mStart, mEnd;
private:
	int mFastWindow = 7, mSlowWindow = 14;
	int numPrices = 0;
	double closePrices[N];
public:
	DoubleMA(QObject* engine, QMap<QString, QVariant> settings, QString mode): StrategyTemplate(engine, settings, mode)
	{
		if (mode == "BackTest") {
			mEngine = qobject_cast<BackTester*>(engine);
			mStart = mEngine->getStartDateTime();
			mEnd = mEngine->getEndDateTime();
		}
		if (settings.contains(QString("symbol")))
		{
			auto symEx = settings[QString("symbol")].toString().toLatin1().split('.');
			mSymbol = FullSymbol(symEx[0].data(), symEx[1].data());
			symbols.insert(mSymbol);
		}
	}

	void start() Q_DECL_OVERRIDE
	{
		auto nextDay = mStart.addDays(1);
		emit sigAskData(symbols, mStart, nextDay, Interval::day);
		mStart = nextDay;
	}

	void compute()
	{
		if (this->numPrices < mSlowWindow + 1)
			return;
		else
		{
			double 
		}
	}

	void onBar(const QMap<FullSymbol,QList<BarData>>& data) Q_DECL_OVERRIDE
	{
		// 压入数据，准备talib
		if (numPrices < N)
		{
			this->closePrices[numPrices] = data[mSymbol][0].mClose;
			numPrices++;
		}
		else
		{
			for (int i = 0; i < N - 1; ++i)
				closePrices[i] = closePrices[i + 1];
			closePrices[N - 1] = data[mSymbol][0].mClose;
		}
		
		// 保持状态干净
		cancelAll();
		// 这个函数计算并下单
		compute();
		// 要求进一步数据
		if (mStart < mEnd)
		{
			auto nextDay = mStart.addDays(1);
			emit sigAskData(symbols, mStart, nextDay, Interval::day);
			mStart = nextDay;
		}
	}
};