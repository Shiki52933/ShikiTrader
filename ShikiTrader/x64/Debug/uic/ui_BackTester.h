/********************************************************************************
** Form generated from reading UI file 'BackTester.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BACKTESTER_H
#define UI_BACKTESTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QSplitter *mainSpliter;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QLabel *label;
    QComboBox *comboBoxSelectStrategy;
    QSplitter *splitter_2;
    QLabel *label_2;
    QLineEdit *lineEditFullSymbol;
    QSplitter *splitter_3;
    QLabel *label_3;
    QDateEdit *dateEditStart;
    QSplitter *splitter_4;
    QLabel *label_4;
    QDateEdit *dateEditEnd;
    QSplitter *splitter_5;
    QLabel *label_5;
    QLineEdit *lineEditRate;
    QSplitter *splitter_6;
    QLabel *label_6;
    QLineEdit *lineEditSlip;
    QSplitter *splitter_7;
    QLabel *label_7;
    QLineEdit *lineEditMultiplier;
    QSplitter *splitter_8;
    QLabel *label_8;
    QLineEdit *lineEditChangeUnit;
    QSplitter *splitter_9;
    QLabel *label_9;
    QLineEdit *lineEditMoney;
    QSplitter *splitter_10;
    QLabel *label_10;
    QComboBox *comboBoxBackTestMode;
    QPushButton *pushButtonStartBackTest;
    QPushButton *pushButtonParamsOptimize;
    QPushButton *pushButtonOptimizeResult;
    QPushButton *pushButtonSaveResult;
    QSplitter *splitter_36;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter_11;
    QLabel *label_11;
    QLineEdit *lineEditFirstDate;
    QSplitter *splitter_12;
    QLabel *label_12;
    QLineEdit *lineEditLastDate;
    QSplitter *splitter_13;
    QLabel *label_13;
    QLineEdit *lineEditTotalTradeDates;
    QSplitter *splitter_14;
    QLabel *label_14;
    QLineEdit *lineEditGainDates;
    QSplitter *splitter_15;
    QLabel *label_15;
    QLineEdit *lineEditLossDates;
    QSplitter *splitter_16;
    QLabel *label_16;
    QLineEdit *lineEditStartMoney;
    QSplitter *splitter_17;
    QLabel *label_17;
    QLineEdit *lineEditEndMoney;
    QSplitter *splitter_18;
    QLabel *label_18;
    QLineEdit *lineEditProfitRate;
    QSplitter *splitter_19;
    QLabel *label_19;
    QLineEdit *lineEditAnnualProfitRate;
    QSplitter *splitter_20;
    QLabel *label_20;
    QLineEdit *lineEditMaxWithdraw;
    QSplitter *splitter_21;
    QLabel *label_21;
    QLineEdit *lineEditMaxWithdrawPercent;
    QSplitter *splitter_22;
    QLabel *label_22;
    QLineEdit *lineEditTotalProfit;
    QSplitter *splitter_23;
    QLabel *label_23;
    QLineEdit *lineEditTotalServiceCharge;
    QSplitter *splitter_24;
    QLabel *label_24;
    QLineEdit *lineEditTotalSlip;
    QSplitter *splitter_25;
    QLabel *label_25;
    QLineEdit *lineEditTotalTurnover;
    QSplitter *splitter_26;
    QLabel *label_26;
    QLineEdit *lineEditTotalTradeNum;
    QSplitter *splitter_27;
    QLabel *label_27;
    QLineEdit *lineEditDailyProfit;
    QSplitter *splitter_28;
    QLabel *label_28;
    QLineEdit *lineEditDailyServiceCharge;
    QSplitter *splitter_29;
    QLabel *label_29;
    QLineEdit *lineEditDailySlip;
    QSplitter *splitter_30;
    QLabel *label_30;
    QLineEdit *lineEditDailyTurnover;
    QSplitter *splitter_31;
    QLabel *label_31;
    QLineEdit *lineEditDailyTradeNum;
    QSplitter *splitter_32;
    QLabel *label_32;
    QLineEdit *lineEditDailyProfitRate;
    QSplitter *splitter_33;
    QLabel *label_33;
    QLineEdit *lineEditProfitVar;
    QSplitter *splitter_34;
    QLabel *label_34;
    QLineEdit *lineEditSharp;
    QSplitter *splitter_35;
    QLabel *label_35;
    QLineEdit *lineEditProfitWithdrawRatio;
    QTextEdit *textEditOutput;
    QGroupBox *groupBox_3;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(985, 877);
        mainSpliter = new QSplitter(Form);
        mainSpliter->setObjectName(QString::fromUtf8("mainSpliter"));
        mainSpliter->setGeometry(QRect(20, 10, 941, 861));
        mainSpliter->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(mainSpliter);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        splitter = new QSplitter(groupBox);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        label = new QLabel(splitter);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(true);
        label->setMinimumSize(QSize(98, 0));
        label->setMaximumSize(QSize(98, 16777215));
        splitter->addWidget(label);
        comboBoxSelectStrategy = new QComboBox(splitter);
        comboBoxSelectStrategy->setObjectName(QString::fromUtf8("comboBoxSelectStrategy"));
        splitter->addWidget(comboBoxSelectStrategy);

        verticalLayout->addWidget(splitter);

        splitter_2 = new QSplitter(groupBox);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(splitter_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(98, 0));
        label_2->setMaximumSize(QSize(98, 16777215));
        splitter_2->addWidget(label_2);
        lineEditFullSymbol = new QLineEdit(splitter_2);
        lineEditFullSymbol->setObjectName(QString::fromUtf8("lineEditFullSymbol"));
        splitter_2->addWidget(lineEditFullSymbol);

        verticalLayout->addWidget(splitter_2);

        splitter_3 = new QSplitter(groupBox);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Horizontal);
        label_3 = new QLabel(splitter_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(98, 0));
        label_3->setMaximumSize(QSize(98, 16777215));
        splitter_3->addWidget(label_3);
        dateEditStart = new QDateEdit(splitter_3);
        dateEditStart->setObjectName(QString::fromUtf8("dateEditStart"));
        splitter_3->addWidget(dateEditStart);

        verticalLayout->addWidget(splitter_3);

        splitter_4 = new QSplitter(groupBox);
        splitter_4->setObjectName(QString::fromUtf8("splitter_4"));
        splitter_4->setOrientation(Qt::Horizontal);
        label_4 = new QLabel(splitter_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(98, 0));
        label_4->setMaximumSize(QSize(98, 16777215));
        splitter_4->addWidget(label_4);
        dateEditEnd = new QDateEdit(splitter_4);
        dateEditEnd->setObjectName(QString::fromUtf8("dateEditEnd"));
        splitter_4->addWidget(dateEditEnd);

        verticalLayout->addWidget(splitter_4);

        splitter_5 = new QSplitter(groupBox);
        splitter_5->setObjectName(QString::fromUtf8("splitter_5"));
        splitter_5->setOrientation(Qt::Horizontal);
        label_5 = new QLabel(splitter_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(98, 0));
        label_5->setMaximumSize(QSize(98, 16777215));
        splitter_5->addWidget(label_5);
        lineEditRate = new QLineEdit(splitter_5);
        lineEditRate->setObjectName(QString::fromUtf8("lineEditRate"));
        splitter_5->addWidget(lineEditRate);

        verticalLayout->addWidget(splitter_5);

        splitter_6 = new QSplitter(groupBox);
        splitter_6->setObjectName(QString::fromUtf8("splitter_6"));
        splitter_6->setOrientation(Qt::Horizontal);
        label_6 = new QLabel(splitter_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(98, 0));
        label_6->setMaximumSize(QSize(98, 16777215));
        splitter_6->addWidget(label_6);
        lineEditSlip = new QLineEdit(splitter_6);
        lineEditSlip->setObjectName(QString::fromUtf8("lineEditSlip"));
        splitter_6->addWidget(lineEditSlip);

        verticalLayout->addWidget(splitter_6);

        splitter_7 = new QSplitter(groupBox);
        splitter_7->setObjectName(QString::fromUtf8("splitter_7"));
        splitter_7->setOrientation(Qt::Horizontal);
        label_7 = new QLabel(splitter_7);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(98, 0));
        label_7->setMaximumSize(QSize(98, 16777215));
        splitter_7->addWidget(label_7);
        lineEditMultiplier = new QLineEdit(splitter_7);
        lineEditMultiplier->setObjectName(QString::fromUtf8("lineEditMultiplier"));
        splitter_7->addWidget(lineEditMultiplier);

        verticalLayout->addWidget(splitter_7);

        splitter_8 = new QSplitter(groupBox);
        splitter_8->setObjectName(QString::fromUtf8("splitter_8"));
        splitter_8->setOrientation(Qt::Horizontal);
        label_8 = new QLabel(splitter_8);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(98, 0));
        label_8->setMaximumSize(QSize(98, 16777215));
        splitter_8->addWidget(label_8);
        lineEditChangeUnit = new QLineEdit(splitter_8);
        lineEditChangeUnit->setObjectName(QString::fromUtf8("lineEditChangeUnit"));
        splitter_8->addWidget(lineEditChangeUnit);

        verticalLayout->addWidget(splitter_8);

        splitter_9 = new QSplitter(groupBox);
        splitter_9->setObjectName(QString::fromUtf8("splitter_9"));
        splitter_9->setOrientation(Qt::Horizontal);
        label_9 = new QLabel(splitter_9);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(98, 0));
        label_9->setMaximumSize(QSize(98, 16777215));
        splitter_9->addWidget(label_9);
        lineEditMoney = new QLineEdit(splitter_9);
        lineEditMoney->setObjectName(QString::fromUtf8("lineEditMoney"));
        splitter_9->addWidget(lineEditMoney);

        verticalLayout->addWidget(splitter_9);

        splitter_10 = new QSplitter(groupBox);
        splitter_10->setObjectName(QString::fromUtf8("splitter_10"));
        splitter_10->setOrientation(Qt::Horizontal);
        label_10 = new QLabel(splitter_10);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMinimumSize(QSize(98, 0));
        label_10->setMaximumSize(QSize(98, 16777215));
        splitter_10->addWidget(label_10);
        comboBoxBackTestMode = new QComboBox(splitter_10);
        comboBoxBackTestMode->setObjectName(QString::fromUtf8("comboBoxBackTestMode"));
        splitter_10->addWidget(comboBoxBackTestMode);

        verticalLayout->addWidget(splitter_10);

        pushButtonStartBackTest = new QPushButton(groupBox);
        pushButtonStartBackTest->setObjectName(QString::fromUtf8("pushButtonStartBackTest"));

        verticalLayout->addWidget(pushButtonStartBackTest);

        pushButtonParamsOptimize = new QPushButton(groupBox);
        pushButtonParamsOptimize->setObjectName(QString::fromUtf8("pushButtonParamsOptimize"));

        verticalLayout->addWidget(pushButtonParamsOptimize);

        pushButtonOptimizeResult = new QPushButton(groupBox);
        pushButtonOptimizeResult->setObjectName(QString::fromUtf8("pushButtonOptimizeResult"));

        verticalLayout->addWidget(pushButtonOptimizeResult);

        pushButtonSaveResult = new QPushButton(groupBox);
        pushButtonSaveResult->setObjectName(QString::fromUtf8("pushButtonSaveResult"));

        verticalLayout->addWidget(pushButtonSaveResult);

        mainSpliter->addWidget(groupBox);
        splitter_36 = new QSplitter(mainSpliter);
        splitter_36->setObjectName(QString::fromUtf8("splitter_36"));
        splitter_36->setOrientation(Qt::Horizontal);
        groupBox_2 = new QGroupBox(splitter_36);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        scrollArea = new QScrollArea(groupBox_2);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 355, 687));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        splitter_11 = new QSplitter(scrollAreaWidgetContents);
        splitter_11->setObjectName(QString::fromUtf8("splitter_11"));
        splitter_11->setOrientation(Qt::Horizontal);
        label_11 = new QLabel(splitter_11);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMinimumSize(QSize(100, 0));
        label_11->setMaximumSize(QSize(100, 16777215));
        splitter_11->addWidget(label_11);
        lineEditFirstDate = new QLineEdit(splitter_11);
        lineEditFirstDate->setObjectName(QString::fromUtf8("lineEditFirstDate"));
        lineEditFirstDate->setEnabled(false);
        splitter_11->addWidget(lineEditFirstDate);

        verticalLayout_2->addWidget(splitter_11);

        splitter_12 = new QSplitter(scrollAreaWidgetContents);
        splitter_12->setObjectName(QString::fromUtf8("splitter_12"));
        splitter_12->setOrientation(Qt::Horizontal);
        label_12 = new QLabel(splitter_12);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMinimumSize(QSize(100, 0));
        label_12->setMaximumSize(QSize(100, 16777215));
        splitter_12->addWidget(label_12);
        lineEditLastDate = new QLineEdit(splitter_12);
        lineEditLastDate->setObjectName(QString::fromUtf8("lineEditLastDate"));
        lineEditLastDate->setEnabled(false);
        splitter_12->addWidget(lineEditLastDate);

        verticalLayout_2->addWidget(splitter_12);

        splitter_13 = new QSplitter(scrollAreaWidgetContents);
        splitter_13->setObjectName(QString::fromUtf8("splitter_13"));
        splitter_13->setOrientation(Qt::Horizontal);
        label_13 = new QLabel(splitter_13);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setMinimumSize(QSize(100, 0));
        label_13->setMaximumSize(QSize(100, 16777215));
        splitter_13->addWidget(label_13);
        lineEditTotalTradeDates = new QLineEdit(splitter_13);
        lineEditTotalTradeDates->setObjectName(QString::fromUtf8("lineEditTotalTradeDates"));
        lineEditTotalTradeDates->setEnabled(false);
        splitter_13->addWidget(lineEditTotalTradeDates);

        verticalLayout_2->addWidget(splitter_13);

        splitter_14 = new QSplitter(scrollAreaWidgetContents);
        splitter_14->setObjectName(QString::fromUtf8("splitter_14"));
        splitter_14->setOrientation(Qt::Horizontal);
        label_14 = new QLabel(splitter_14);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setMinimumSize(QSize(100, 0));
        label_14->setMaximumSize(QSize(100, 16777215));
        splitter_14->addWidget(label_14);
        lineEditGainDates = new QLineEdit(splitter_14);
        lineEditGainDates->setObjectName(QString::fromUtf8("lineEditGainDates"));
        lineEditGainDates->setEnabled(false);
        splitter_14->addWidget(lineEditGainDates);

        verticalLayout_2->addWidget(splitter_14);

        splitter_15 = new QSplitter(scrollAreaWidgetContents);
        splitter_15->setObjectName(QString::fromUtf8("splitter_15"));
        splitter_15->setOrientation(Qt::Horizontal);
        label_15 = new QLabel(splitter_15);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setMinimumSize(QSize(100, 0));
        label_15->setMaximumSize(QSize(100, 16777215));
        splitter_15->addWidget(label_15);
        lineEditLossDates = new QLineEdit(splitter_15);
        lineEditLossDates->setObjectName(QString::fromUtf8("lineEditLossDates"));
        lineEditLossDates->setEnabled(false);
        splitter_15->addWidget(lineEditLossDates);

        verticalLayout_2->addWidget(splitter_15);

        splitter_16 = new QSplitter(scrollAreaWidgetContents);
        splitter_16->setObjectName(QString::fromUtf8("splitter_16"));
        splitter_16->setOrientation(Qt::Horizontal);
        label_16 = new QLabel(splitter_16);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setMinimumSize(QSize(100, 0));
        label_16->setMaximumSize(QSize(100, 16777215));
        splitter_16->addWidget(label_16);
        lineEditStartMoney = new QLineEdit(splitter_16);
        lineEditStartMoney->setObjectName(QString::fromUtf8("lineEditStartMoney"));
        lineEditStartMoney->setEnabled(false);
        splitter_16->addWidget(lineEditStartMoney);

        verticalLayout_2->addWidget(splitter_16);

        splitter_17 = new QSplitter(scrollAreaWidgetContents);
        splitter_17->setObjectName(QString::fromUtf8("splitter_17"));
        splitter_17->setOrientation(Qt::Horizontal);
        label_17 = new QLabel(splitter_17);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setMinimumSize(QSize(100, 0));
        label_17->setMaximumSize(QSize(100, 16777215));
        splitter_17->addWidget(label_17);
        lineEditEndMoney = new QLineEdit(splitter_17);
        lineEditEndMoney->setObjectName(QString::fromUtf8("lineEditEndMoney"));
        lineEditEndMoney->setEnabled(false);
        splitter_17->addWidget(lineEditEndMoney);

        verticalLayout_2->addWidget(splitter_17);

        splitter_18 = new QSplitter(scrollAreaWidgetContents);
        splitter_18->setObjectName(QString::fromUtf8("splitter_18"));
        splitter_18->setOrientation(Qt::Horizontal);
        label_18 = new QLabel(splitter_18);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setMinimumSize(QSize(100, 0));
        label_18->setMaximumSize(QSize(100, 16777215));
        splitter_18->addWidget(label_18);
        lineEditProfitRate = new QLineEdit(splitter_18);
        lineEditProfitRate->setObjectName(QString::fromUtf8("lineEditProfitRate"));
        lineEditProfitRate->setEnabled(false);
        splitter_18->addWidget(lineEditProfitRate);

        verticalLayout_2->addWidget(splitter_18);

        splitter_19 = new QSplitter(scrollAreaWidgetContents);
        splitter_19->setObjectName(QString::fromUtf8("splitter_19"));
        splitter_19->setOrientation(Qt::Horizontal);
        label_19 = new QLabel(splitter_19);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setMinimumSize(QSize(100, 0));
        label_19->setMaximumSize(QSize(100, 16777215));
        splitter_19->addWidget(label_19);
        lineEditAnnualProfitRate = new QLineEdit(splitter_19);
        lineEditAnnualProfitRate->setObjectName(QString::fromUtf8("lineEditAnnualProfitRate"));
        lineEditAnnualProfitRate->setEnabled(false);
        splitter_19->addWidget(lineEditAnnualProfitRate);

        verticalLayout_2->addWidget(splitter_19);

        splitter_20 = new QSplitter(scrollAreaWidgetContents);
        splitter_20->setObjectName(QString::fromUtf8("splitter_20"));
        splitter_20->setOrientation(Qt::Horizontal);
        label_20 = new QLabel(splitter_20);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setMinimumSize(QSize(100, 0));
        label_20->setMaximumSize(QSize(100, 16777215));
        splitter_20->addWidget(label_20);
        lineEditMaxWithdraw = new QLineEdit(splitter_20);
        lineEditMaxWithdraw->setObjectName(QString::fromUtf8("lineEditMaxWithdraw"));
        lineEditMaxWithdraw->setEnabled(false);
        splitter_20->addWidget(lineEditMaxWithdraw);

        verticalLayout_2->addWidget(splitter_20);

        splitter_21 = new QSplitter(scrollAreaWidgetContents);
        splitter_21->setObjectName(QString::fromUtf8("splitter_21"));
        splitter_21->setOrientation(Qt::Horizontal);
        label_21 = new QLabel(splitter_21);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setMinimumSize(QSize(100, 0));
        label_21->setMaximumSize(QSize(100, 16777215));
        splitter_21->addWidget(label_21);
        lineEditMaxWithdrawPercent = new QLineEdit(splitter_21);
        lineEditMaxWithdrawPercent->setObjectName(QString::fromUtf8("lineEditMaxWithdrawPercent"));
        lineEditMaxWithdrawPercent->setEnabled(false);
        splitter_21->addWidget(lineEditMaxWithdrawPercent);

        verticalLayout_2->addWidget(splitter_21);

        splitter_22 = new QSplitter(scrollAreaWidgetContents);
        splitter_22->setObjectName(QString::fromUtf8("splitter_22"));
        splitter_22->setOrientation(Qt::Horizontal);
        label_22 = new QLabel(splitter_22);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setMinimumSize(QSize(100, 0));
        label_22->setMaximumSize(QSize(100, 16777215));
        splitter_22->addWidget(label_22);
        lineEditTotalProfit = new QLineEdit(splitter_22);
        lineEditTotalProfit->setObjectName(QString::fromUtf8("lineEditTotalProfit"));
        lineEditTotalProfit->setEnabled(false);
        splitter_22->addWidget(lineEditTotalProfit);

        verticalLayout_2->addWidget(splitter_22);

        splitter_23 = new QSplitter(scrollAreaWidgetContents);
        splitter_23->setObjectName(QString::fromUtf8("splitter_23"));
        splitter_23->setOrientation(Qt::Horizontal);
        label_23 = new QLabel(splitter_23);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setMinimumSize(QSize(100, 0));
        label_23->setMaximumSize(QSize(100, 16777215));
        splitter_23->addWidget(label_23);
        lineEditTotalServiceCharge = new QLineEdit(splitter_23);
        lineEditTotalServiceCharge->setObjectName(QString::fromUtf8("lineEditTotalServiceCharge"));
        lineEditTotalServiceCharge->setEnabled(false);
        splitter_23->addWidget(lineEditTotalServiceCharge);

        verticalLayout_2->addWidget(splitter_23);

        splitter_24 = new QSplitter(scrollAreaWidgetContents);
        splitter_24->setObjectName(QString::fromUtf8("splitter_24"));
        splitter_24->setOrientation(Qt::Horizontal);
        label_24 = new QLabel(splitter_24);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setMinimumSize(QSize(100, 0));
        label_24->setMaximumSize(QSize(100, 16777215));
        splitter_24->addWidget(label_24);
        lineEditTotalSlip = new QLineEdit(splitter_24);
        lineEditTotalSlip->setObjectName(QString::fromUtf8("lineEditTotalSlip"));
        lineEditTotalSlip->setEnabled(false);
        splitter_24->addWidget(lineEditTotalSlip);

        verticalLayout_2->addWidget(splitter_24);

        splitter_25 = new QSplitter(scrollAreaWidgetContents);
        splitter_25->setObjectName(QString::fromUtf8("splitter_25"));
        splitter_25->setOrientation(Qt::Horizontal);
        label_25 = new QLabel(splitter_25);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setMinimumSize(QSize(100, 0));
        label_25->setMaximumSize(QSize(100, 16777215));
        splitter_25->addWidget(label_25);
        lineEditTotalTurnover = new QLineEdit(splitter_25);
        lineEditTotalTurnover->setObjectName(QString::fromUtf8("lineEditTotalTurnover"));
        lineEditTotalTurnover->setEnabled(false);
        splitter_25->addWidget(lineEditTotalTurnover);

        verticalLayout_2->addWidget(splitter_25);

        splitter_26 = new QSplitter(scrollAreaWidgetContents);
        splitter_26->setObjectName(QString::fromUtf8("splitter_26"));
        splitter_26->setOrientation(Qt::Horizontal);
        label_26 = new QLabel(splitter_26);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setMinimumSize(QSize(100, 0));
        label_26->setMaximumSize(QSize(100, 16777215));
        splitter_26->addWidget(label_26);
        lineEditTotalTradeNum = new QLineEdit(splitter_26);
        lineEditTotalTradeNum->setObjectName(QString::fromUtf8("lineEditTotalTradeNum"));
        lineEditTotalTradeNum->setEnabled(false);
        splitter_26->addWidget(lineEditTotalTradeNum);

        verticalLayout_2->addWidget(splitter_26);

        splitter_27 = new QSplitter(scrollAreaWidgetContents);
        splitter_27->setObjectName(QString::fromUtf8("splitter_27"));
        splitter_27->setOrientation(Qt::Horizontal);
        label_27 = new QLabel(splitter_27);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setMinimumSize(QSize(100, 0));
        label_27->setMaximumSize(QSize(100, 16777215));
        splitter_27->addWidget(label_27);
        lineEditDailyProfit = new QLineEdit(splitter_27);
        lineEditDailyProfit->setObjectName(QString::fromUtf8("lineEditDailyProfit"));
        lineEditDailyProfit->setEnabled(false);
        splitter_27->addWidget(lineEditDailyProfit);

        verticalLayout_2->addWidget(splitter_27);

        splitter_28 = new QSplitter(scrollAreaWidgetContents);
        splitter_28->setObjectName(QString::fromUtf8("splitter_28"));
        splitter_28->setOrientation(Qt::Horizontal);
        label_28 = new QLabel(splitter_28);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setMinimumSize(QSize(100, 0));
        label_28->setMaximumSize(QSize(100, 16777215));
        splitter_28->addWidget(label_28);
        lineEditDailyServiceCharge = new QLineEdit(splitter_28);
        lineEditDailyServiceCharge->setObjectName(QString::fromUtf8("lineEditDailyServiceCharge"));
        lineEditDailyServiceCharge->setEnabled(false);
        splitter_28->addWidget(lineEditDailyServiceCharge);

        verticalLayout_2->addWidget(splitter_28);

        splitter_29 = new QSplitter(scrollAreaWidgetContents);
        splitter_29->setObjectName(QString::fromUtf8("splitter_29"));
        splitter_29->setOrientation(Qt::Horizontal);
        label_29 = new QLabel(splitter_29);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setMinimumSize(QSize(100, 0));
        label_29->setMaximumSize(QSize(100, 16777215));
        splitter_29->addWidget(label_29);
        lineEditDailySlip = new QLineEdit(splitter_29);
        lineEditDailySlip->setObjectName(QString::fromUtf8("lineEditDailySlip"));
        lineEditDailySlip->setEnabled(false);
        splitter_29->addWidget(lineEditDailySlip);

        verticalLayout_2->addWidget(splitter_29);

        splitter_30 = new QSplitter(scrollAreaWidgetContents);
        splitter_30->setObjectName(QString::fromUtf8("splitter_30"));
        splitter_30->setOrientation(Qt::Horizontal);
        label_30 = new QLabel(splitter_30);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setMinimumSize(QSize(100, 0));
        label_30->setMaximumSize(QSize(100, 16777215));
        splitter_30->addWidget(label_30);
        lineEditDailyTurnover = new QLineEdit(splitter_30);
        lineEditDailyTurnover->setObjectName(QString::fromUtf8("lineEditDailyTurnover"));
        lineEditDailyTurnover->setEnabled(false);
        splitter_30->addWidget(lineEditDailyTurnover);

        verticalLayout_2->addWidget(splitter_30);

        splitter_31 = new QSplitter(scrollAreaWidgetContents);
        splitter_31->setObjectName(QString::fromUtf8("splitter_31"));
        splitter_31->setOrientation(Qt::Horizontal);
        label_31 = new QLabel(splitter_31);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setMinimumSize(QSize(100, 0));
        label_31->setMaximumSize(QSize(100, 16777215));
        splitter_31->addWidget(label_31);
        lineEditDailyTradeNum = new QLineEdit(splitter_31);
        lineEditDailyTradeNum->setObjectName(QString::fromUtf8("lineEditDailyTradeNum"));
        lineEditDailyTradeNum->setEnabled(false);
        splitter_31->addWidget(lineEditDailyTradeNum);

        verticalLayout_2->addWidget(splitter_31);

        splitter_32 = new QSplitter(scrollAreaWidgetContents);
        splitter_32->setObjectName(QString::fromUtf8("splitter_32"));
        splitter_32->setOrientation(Qt::Horizontal);
        label_32 = new QLabel(splitter_32);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setMinimumSize(QSize(100, 0));
        label_32->setMaximumSize(QSize(100, 16777215));
        splitter_32->addWidget(label_32);
        lineEditDailyProfitRate = new QLineEdit(splitter_32);
        lineEditDailyProfitRate->setObjectName(QString::fromUtf8("lineEditDailyProfitRate"));
        lineEditDailyProfitRate->setEnabled(false);
        splitter_32->addWidget(lineEditDailyProfitRate);

        verticalLayout_2->addWidget(splitter_32);

        splitter_33 = new QSplitter(scrollAreaWidgetContents);
        splitter_33->setObjectName(QString::fromUtf8("splitter_33"));
        splitter_33->setOrientation(Qt::Horizontal);
        label_33 = new QLabel(splitter_33);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setMinimumSize(QSize(100, 0));
        label_33->setMaximumSize(QSize(100, 16777215));
        splitter_33->addWidget(label_33);
        lineEditProfitVar = new QLineEdit(splitter_33);
        lineEditProfitVar->setObjectName(QString::fromUtf8("lineEditProfitVar"));
        lineEditProfitVar->setEnabled(false);
        splitter_33->addWidget(lineEditProfitVar);

        verticalLayout_2->addWidget(splitter_33);

        splitter_34 = new QSplitter(scrollAreaWidgetContents);
        splitter_34->setObjectName(QString::fromUtf8("splitter_34"));
        splitter_34->setOrientation(Qt::Horizontal);
        label_34 = new QLabel(splitter_34);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setMinimumSize(QSize(100, 0));
        label_34->setMaximumSize(QSize(100, 16777215));
        splitter_34->addWidget(label_34);
        lineEditSharp = new QLineEdit(splitter_34);
        lineEditSharp->setObjectName(QString::fromUtf8("lineEditSharp"));
        lineEditSharp->setEnabled(false);
        splitter_34->addWidget(lineEditSharp);

        verticalLayout_2->addWidget(splitter_34);

        splitter_35 = new QSplitter(scrollAreaWidgetContents);
        splitter_35->setObjectName(QString::fromUtf8("splitter_35"));
        splitter_35->setOrientation(Qt::Horizontal);
        label_35 = new QLabel(splitter_35);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setMinimumSize(QSize(100, 0));
        label_35->setMaximumSize(QSize(100, 16777215));
        splitter_35->addWidget(label_35);
        lineEditProfitWithdrawRatio = new QLineEdit(splitter_35);
        lineEditProfitWithdrawRatio->setObjectName(QString::fromUtf8("lineEditProfitWithdrawRatio"));
        lineEditProfitWithdrawRatio->setEnabled(false);
        splitter_35->addWidget(lineEditProfitWithdrawRatio);

        verticalLayout_2->addWidget(splitter_35);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollArea);

        textEditOutput = new QTextEdit(groupBox_2);
        textEditOutput->setObjectName(QString::fromUtf8("textEditOutput"));
        textEditOutput->setEnabled(false);

        verticalLayout_3->addWidget(textEditOutput);

        splitter_36->addWidget(groupBox_2);
        groupBox_3 = new QGroupBox(splitter_36);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        splitter_36->addWidget(groupBox_3);
        mainSpliter->addWidget(splitter_36);

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("Form", "\344\272\244\346\230\223\347\255\226\347\225\245", nullptr));
        label_2->setText(QCoreApplication::translate("Form", "\344\272\244\346\230\223\346\240\207\347\232\204", nullptr));
        label_3->setText(QCoreApplication::translate("Form", "\345\274\200\345\247\213\346\227\245\346\234\237", nullptr));
        label_4->setText(QCoreApplication::translate("Form", "\347\273\223\346\235\237\346\227\245\346\234\237", nullptr));
        label_5->setText(QCoreApplication::translate("Form", "\346\211\213\347\273\255\350\264\271\347\216\207", nullptr));
        label_6->setText(QCoreApplication::translate("Form", "\344\272\244\346\230\223\346\273\221\347\202\271", nullptr));
        label_7->setText(QCoreApplication::translate("Form", "\345\220\210\347\272\246\344\271\230\346\225\260", nullptr));
        label_8->setText(QCoreApplication::translate("Form", "\344\273\267\346\240\274\350\267\263\345\212\250", nullptr));
        label_9->setText(QCoreApplication::translate("Form", "\345\233\236\346\265\213\350\265\204\351\207\221", nullptr));
        label_10->setText(QCoreApplication::translate("Form", "\344\273\267\346\240\274\346\250\241\345\274\217", nullptr));
        pushButtonStartBackTest->setText(QCoreApplication::translate("Form", "\345\274\200\345\247\213\345\233\236\346\265\213", nullptr));
        pushButtonParamsOptimize->setText(QCoreApplication::translate("Form", "\345\217\202\346\225\260\344\274\230\345\214\226", nullptr));
        pushButtonOptimizeResult->setText(QCoreApplication::translate("Form", "\344\274\230\345\214\226\347\273\223\346\236\234", nullptr));
        pushButtonSaveResult->setText(QCoreApplication::translate("Form", "\344\277\235\345\255\230\347\273\223\346\236\234", nullptr));
        groupBox_2->setTitle(QString());
        label_11->setText(QCoreApplication::translate("Form", "\351\246\226\344\270\252\344\272\244\346\230\223\346\227\245", nullptr));
        label_12->setText(QCoreApplication::translate("Form", "\346\234\200\345\220\216\344\272\244\346\230\223\346\227\245", nullptr));
        label_13->setText(QCoreApplication::translate("Form", "\346\200\273\344\272\244\346\230\223\346\227\245", nullptr));
        label_14->setText(QCoreApplication::translate("Form", "\347\233\210\345\210\251\344\272\244\346\230\223\346\227\245", nullptr));
        label_15->setText(QCoreApplication::translate("Form", "\344\272\217\346\215\237\344\272\244\346\230\223\346\227\245", nullptr));
        label_16->setText(QCoreApplication::translate("Form", "\350\265\267\345\247\213\350\265\204\351\207\221", nullptr));
        label_17->setText(QCoreApplication::translate("Form", "\347\273\223\346\235\237\350\265\204\351\207\221", nullptr));
        label_18->setText(QCoreApplication::translate("Form", "\346\200\273\346\224\266\347\233\212\347\216\207", nullptr));
        label_19->setText(QCoreApplication::translate("Form", "\345\271\264\345\214\226\346\224\266\347\233\212", nullptr));
        label_20->setText(QCoreApplication::translate("Form", "\346\234\200\345\244\247\345\233\236\346\222\244", nullptr));
        label_21->setText(QCoreApplication::translate("Form", "\347\231\276\345\210\206\346\257\224\346\234\200\345\244\247\345\233\236\346\222\244", nullptr));
        label_22->setText(QCoreApplication::translate("Form", "\346\200\273\347\233\210\344\272\217", nullptr));
        label_23->setText(QCoreApplication::translate("Form", "\346\200\273\346\211\213\347\273\255\350\264\271", nullptr));
        label_24->setText(QCoreApplication::translate("Form", "\346\200\273\346\273\221\347\202\271", nullptr));
        label_25->setText(QCoreApplication::translate("Form", "\346\200\273\346\210\220\344\272\244\351\242\235", nullptr));
        label_26->setText(QCoreApplication::translate("Form", "\346\200\273\346\210\220\344\272\244\347\254\224\346\225\260", nullptr));
        label_27->setText(QCoreApplication::translate("Form", "\346\227\245\345\235\207\347\233\210\344\272\217", nullptr));
        label_28->setText(QCoreApplication::translate("Form", "\346\227\245\345\235\207\346\211\213\347\273\255\350\264\271", nullptr));
        label_29->setText(QCoreApplication::translate("Form", "\346\227\245\345\235\207\346\273\221\347\202\271", nullptr));
        label_30->setText(QCoreApplication::translate("Form", "\346\227\245\345\235\207\346\210\220\344\272\244\351\242\235", nullptr));
        label_31->setText(QCoreApplication::translate("Form", "\346\227\245\345\235\207\346\210\220\344\272\244\347\254\224\346\225\260", nullptr));
        label_32->setText(QCoreApplication::translate("Form", "\346\227\245\345\235\207\346\224\266\347\233\212\347\216\207", nullptr));
        label_33->setText(QCoreApplication::translate("Form", "\346\224\266\347\233\212\346\240\207\345\207\206\345\267\256", nullptr));
        label_34->setText(QCoreApplication::translate("Form", "\345\244\217\346\231\256\346\257\224\347\216\207", nullptr));
        label_35->setText(QCoreApplication::translate("Form", "\346\224\266\347\233\212\345\233\236\346\222\244\346\257\224", nullptr));
        groupBox_3->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BACKTESTER_H
