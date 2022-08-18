#pragma once
#include <set>
#include <QSqlDatabase.h>
#include <qsqlquery.h>


enum class Interval
{
	tick, minute, hour, day
};
struct BarData
{
	// turnover是成交量 openInterest是未平仓量
	double mVol = 0, mTurnover = 0, mOpenInterest = 0, mOpen = 0, mHigh = 0, mLow = 0, mClose = 0;
public:
	BarData() {}
	BarData(double vol, double turnover, double openInterest, double open, double high, double low, double close)
		: mVol(vol), mTurnover(turnover), mOpenInterest(openInterest), mOpen(open), mHigh(high), mLow(low), mClose(close)
	{}
};
enum class Direction
{
	Long, Short
};
enum class Offset
{
	Open, Close
};
enum class OrderStatus
{
	Submitting, NotTraded, PartTraded, AllTraded, Cancelled, Rejected,
};
enum class OrderType
{
	Limit, Stop
};
struct FullSymbol
{
	char mSymbol[8];
	char mExchange[8];
public:
	FullSymbol() {
		memset(mSymbol, 0, sizeof(mSymbol) + sizeof(mExchange));
	}

	bool operator<(const FullSymbol& another) const
	{
		int i = strcmp(this->mSymbol, another.mSymbol);
		if (i < 0) return true;
		else if (i > 0) return false;
		i = strcmp(this->mExchange, another.mExchange);
		if (i <= 0) return true;
		else
			return false;
	}

	bool operator==(const FullSymbol& another) const
	{
		return strcmp(mSymbol, another.mSymbol) == 0 and strcmp(mExchange, another.mExchange) == 0;
	}

	FullSymbol(const char* symbol, const char* exchange) {
		strcpy_s(mSymbol, symbol), strcpy_s(mExchange, exchange);
	};
};
struct Order
{
	FullSymbol  symbol;  //16个字节
	int				    orderid = -1;
	OrderType   type;
	Direction      mDirection;
	Offset		    mOffset;
	OrderStatus status;   //8个字节
	int				    vol = 0;
	double		    price = 0; //16个字节
};

class DataManager {
	QSqlDatabase db;
	QSqlQuery qry;

public:
	DataManager(); // 默认构造函数读取数据库设置并打开连接
	DataManager(QString dbType, QString hostName, QString dbName, QString user, QString password);
	QMap<FullSymbol, QList<BarData>> loadData(const std::set<FullSymbol> &symbols, QDateTime start, QDateTime end, Interval type);
	~DataManager();
};
