#include "DataTypes.h"
#include <qsqldatabase.h>
#include <qdatetime.h>
#include <qsqlrecord.h>
#include <qcoreapplication.h>
#include <qfile.h>
#include <qjsondocument.h>
#include <qjsonobject.h>
#include <qjsonvalue.h>


DataManager::DataManager()
{
	QString dbSettingPath = QCoreApplication::applicationDirPath() + "/settings/database_setting.json";
	QFile file(dbSettingPath);

	if (file.open(QFile::ReadOnly))
	{
		QByteArray jsonBytes = file.readAll();
		QJsonDocument dbSettingDoc = QJsonDocument::fromJson(jsonBytes);
		if (!dbSettingDoc.isNull())
		{
			// 获取数据库设置
			auto dbSetting = dbSettingDoc.object();
			QString dbType = dbSetting["database.name"].toString();
			QString hostName = dbSetting["database.host_port"].toString();
			QString dbName = dbSetting["database.database"].toString();
			QString user = dbSetting["database.user"].toString();
			QString password = dbSetting["database.password"].toString();
			// 连接
			db = QSqlDatabase::addDatabase(dbType);
			db.setHostName(hostName);
			db.setDatabaseName(dbName);
			db.setUserName(user);
			db.setPassword(password);
			db.open();
			qry = db.exec();
		}
		// 在这里释放打开的文件
		file.close();
	}
}

DataManager::DataManager(QString dbType, QString hostName, QString dbName, QString user, QString password)
{
	db = QSqlDatabase::addDatabase(dbType);
	db.setHostName(hostName);
	db.setDatabaseName(dbName);
	db.setUserName(user);
	db.setPassword(password);
	db.open();
	qry = db.exec();
}

QMap<FullSymbol, QList<BarData>> DataManager::loadData(const std::set<FullSymbol> &symbols, QDateTime start, QDateTime end, Interval type)
{
	QMap<FullSymbol, QList<BarData>> res;

	qry.prepare("SELECT volume, turnover,  open_interest, open_price, high_price, low_price,close_price "
		"FROM dbbardata where symbol = ? and exchange = ? "
		"and datetime>=? and datetime<? "
		"and `interval`=? "
		"ORDER BY datetime ASC");
	// 
	QString interval;
	switch (type)
	{
	case Interval::tick:
		interval = "tick";
		break;
	case Interval::minute:
		interval = "1m";
		break;
	case Interval::hour:
		interval = "1h";
		break;
	case Interval::day:
		interval = "d";
		break;
	}

	//处理每一个请求
	foreach(const FullSymbol & symbol, symbols) {
		qry.bindValue(0, symbol.mSymbol);
		qry.bindValue(1, symbol.mExchange);
		qry.bindValue(2, start);
		qry.bindValue(3, end);
		qry.bindValue(4, interval);
		qry.exec();
		res[symbol].resize(qry.size());

		// 处理查询结果
		while (qry.next())
		{
			QSqlRecord record = qry.record();
			double vol = record.value("volume").toDouble();
			double turnover = record.value("turnover").toDouble();
			double openInterest = record.value("open_interest").toDouble();
			double open = record.value("open").toDouble();
			double high = record.value("high").toDouble();
			double low = record.value("low").toDouble();
			double close = record.value("close").toDouble();
			res[symbol].append(BarData(vol, turnover, openInterest, open, high, low, close));
		}
	}

	return res;
}

DataManager::~DataManager()
{
	db.close();
}
