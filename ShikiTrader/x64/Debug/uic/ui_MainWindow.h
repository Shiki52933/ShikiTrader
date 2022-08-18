/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QAction *actionQuit;
    QAction *actionStartBacktester;
    QAction *actionSQLSetting;
    QAction *actionInfo;
    QWidget *centralWidget;
    QSplitter *mainFilter;
    QSplitter *splitter_4;
    QGroupBox *groupBox;
    QSplitter *splitter_3;
    QSplitter *splitter;
    QGroupBox *boxLabels;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelExchange;
    QLabel *labelSymbol;
    QLabel *labelName;
    QLabel *labelDirection;
    QLabel *labelOffset;
    QLabel *labelOrderType;
    QLabel *labelPrice;
    QLabel *labelVol;
    QLabel *labelGateway;
    QGroupBox *boxEdits;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBoxExchange;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEditSymbol;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEditName;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *comboBoxDirection;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *comboBoxOffset;
    QHBoxLayout *horizontalLayout_6;
    QComboBox *comboBoxOrderType;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *lineEditPrice;
    QHBoxLayout *horizontalLayout_8;
    QSpinBox *spinBoxVol;
    QHBoxLayout *horizontalLayout_9;
    QComboBox *comboBoxGateway;
    QSplitter *splitter_2;
    QPushButton *pushButtonDelegate;
    QPushButton *pushButtonCancelAll;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *boxInfo;
    QGroupBox *boxDelegate;
    QGroupBox *boxActive;
    QGroupBox *boxTradedInfo;
    QGroupBox *groupBox_7;
    QHBoxLayout *horizontalLayout_10;
    QGroupBox *box;
    QGroupBox *groupBox_9;
    QGroupBox *groupBox_10;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QString::fromUtf8("MainWindowClass"));
        MainWindowClass->resize(867, 686);
        actionQuit = new QAction(MainWindowClass);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("E:/OneDriveNJU/OneDrive - \345\215\227\344\272\254\345\244\247\345\255\246/\345\233\276\347\211\207/quit.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon);
        actionStartBacktester = new QAction(MainWindowClass);
        actionStartBacktester->setObjectName(QString::fromUtf8("actionStartBacktester"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("E:/OneDriveNJU/OneDrive - \345\215\227\344\272\254\345\244\247\345\255\246/\345\233\276\347\211\207/Backtest.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionStartBacktester->setIcon(icon1);
        actionSQLSetting = new QAction(MainWindowClass);
        actionSQLSetting->setObjectName(QString::fromUtf8("actionSQLSetting"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("E:/OneDriveNJU/OneDrive - \345\215\227\344\272\254\345\244\247\345\255\246/\345\233\276\347\211\207/database.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSQLSetting->setIcon(icon2);
        actionInfo = new QAction(MainWindowClass);
        actionInfo->setObjectName(QString::fromUtf8("actionInfo"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("E:/OneDriveNJU/OneDrive - \345\215\227\344\272\254\345\244\247\345\255\246/\345\233\276\347\211\207/info.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        actionInfo->setIcon(icon3);
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        mainFilter = new QSplitter(centralWidget);
        mainFilter->setObjectName(QString::fromUtf8("mainFilter"));
        mainFilter->setGeometry(QRect(0, 10, 861, 651));
        mainFilter->setOrientation(Qt::Vertical);
        splitter_4 = new QSplitter(mainFilter);
        splitter_4->setObjectName(QString::fromUtf8("splitter_4"));
        splitter_4->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(splitter_4);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        splitter_3 = new QSplitter(groupBox);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setGeometry(QRect(10, 20, 211, 328));
        splitter_3->setOrientation(Qt::Vertical);
        splitter = new QSplitter(splitter_3);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        boxLabels = new QGroupBox(splitter);
        boxLabels->setObjectName(QString::fromUtf8("boxLabels"));
        verticalLayout_2 = new QVBoxLayout(boxLabels);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        labelExchange = new QLabel(boxLabels);
        labelExchange->setObjectName(QString::fromUtf8("labelExchange"));

        verticalLayout_2->addWidget(labelExchange);

        labelSymbol = new QLabel(boxLabels);
        labelSymbol->setObjectName(QString::fromUtf8("labelSymbol"));

        verticalLayout_2->addWidget(labelSymbol);

        labelName = new QLabel(boxLabels);
        labelName->setObjectName(QString::fromUtf8("labelName"));

        verticalLayout_2->addWidget(labelName);

        labelDirection = new QLabel(boxLabels);
        labelDirection->setObjectName(QString::fromUtf8("labelDirection"));

        verticalLayout_2->addWidget(labelDirection);

        labelOffset = new QLabel(boxLabels);
        labelOffset->setObjectName(QString::fromUtf8("labelOffset"));

        verticalLayout_2->addWidget(labelOffset);

        labelOrderType = new QLabel(boxLabels);
        labelOrderType->setObjectName(QString::fromUtf8("labelOrderType"));

        verticalLayout_2->addWidget(labelOrderType);

        labelPrice = new QLabel(boxLabels);
        labelPrice->setObjectName(QString::fromUtf8("labelPrice"));

        verticalLayout_2->addWidget(labelPrice);

        labelVol = new QLabel(boxLabels);
        labelVol->setObjectName(QString::fromUtf8("labelVol"));

        verticalLayout_2->addWidget(labelVol);

        labelGateway = new QLabel(boxLabels);
        labelGateway->setObjectName(QString::fromUtf8("labelGateway"));

        verticalLayout_2->addWidget(labelGateway);

        splitter->addWidget(boxLabels);
        boxEdits = new QGroupBox(splitter);
        boxEdits->setObjectName(QString::fromUtf8("boxEdits"));
        verticalLayout = new QVBoxLayout(boxEdits);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        comboBoxExchange = new QComboBox(boxEdits);
        comboBoxExchange->setObjectName(QString::fromUtf8("comboBoxExchange"));

        horizontalLayout_2->addWidget(comboBoxExchange);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEditSymbol = new QLineEdit(boxEdits);
        lineEditSymbol->setObjectName(QString::fromUtf8("lineEditSymbol"));

        horizontalLayout->addWidget(lineEditSymbol);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lineEditName = new QLineEdit(boxEdits);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));

        horizontalLayout_3->addWidget(lineEditName);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        comboBoxDirection = new QComboBox(boxEdits);
        comboBoxDirection->setObjectName(QString::fromUtf8("comboBoxDirection"));

        horizontalLayout_4->addWidget(comboBoxDirection);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        comboBoxOffset = new QComboBox(boxEdits);
        comboBoxOffset->setObjectName(QString::fromUtf8("comboBoxOffset"));

        horizontalLayout_5->addWidget(comboBoxOffset);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        comboBoxOrderType = new QComboBox(boxEdits);
        comboBoxOrderType->setObjectName(QString::fromUtf8("comboBoxOrderType"));

        horizontalLayout_6->addWidget(comboBoxOrderType);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        lineEditPrice = new QLineEdit(boxEdits);
        lineEditPrice->setObjectName(QString::fromUtf8("lineEditPrice"));

        horizontalLayout_7->addWidget(lineEditPrice);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        spinBoxVol = new QSpinBox(boxEdits);
        spinBoxVol->setObjectName(QString::fromUtf8("spinBoxVol"));

        horizontalLayout_8->addWidget(spinBoxVol);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        comboBoxGateway = new QComboBox(boxEdits);
        comboBoxGateway->setObjectName(QString::fromUtf8("comboBoxGateway"));

        horizontalLayout_9->addWidget(comboBoxGateway);


        verticalLayout->addLayout(horizontalLayout_9);

        splitter->addWidget(boxEdits);
        splitter_3->addWidget(splitter);
        splitter_2 = new QSplitter(splitter_3);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        pushButtonDelegate = new QPushButton(splitter_2);
        pushButtonDelegate->setObjectName(QString::fromUtf8("pushButtonDelegate"));
        splitter_2->addWidget(pushButtonDelegate);
        pushButtonCancelAll = new QPushButton(splitter_2);
        pushButtonCancelAll->setObjectName(QString::fromUtf8("pushButtonCancelAll"));
        splitter_2->addWidget(pushButtonCancelAll);
        splitter_3->addWidget(splitter_2);
        splitter_4->addWidget(groupBox);
        groupBox_6 = new QGroupBox(splitter_4);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        verticalLayout_3 = new QVBoxLayout(groupBox_6);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        boxInfo = new QGroupBox(groupBox_6);
        boxInfo->setObjectName(QString::fromUtf8("boxInfo"));

        verticalLayout_3->addWidget(boxInfo);

        boxDelegate = new QGroupBox(groupBox_6);
        boxDelegate->setObjectName(QString::fromUtf8("boxDelegate"));

        verticalLayout_3->addWidget(boxDelegate);

        boxActive = new QGroupBox(groupBox_6);
        boxActive->setObjectName(QString::fromUtf8("boxActive"));

        verticalLayout_3->addWidget(boxActive);

        boxTradedInfo = new QGroupBox(groupBox_6);
        boxTradedInfo->setObjectName(QString::fromUtf8("boxTradedInfo"));

        verticalLayout_3->addWidget(boxTradedInfo);

        splitter_4->addWidget(groupBox_6);
        mainFilter->addWidget(splitter_4);
        groupBox_7 = new QGroupBox(mainFilter);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        horizontalLayout_10 = new QHBoxLayout(groupBox_7);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        box = new QGroupBox(groupBox_7);
        box->setObjectName(QString::fromUtf8("box"));

        horizontalLayout_10->addWidget(box);

        groupBox_9 = new QGroupBox(groupBox_7);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));

        horizontalLayout_10->addWidget(groupBox_9);

        groupBox_10 = new QGroupBox(groupBox_7);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));

        horizontalLayout_10->addWidget(groupBox_10);

        mainFilter->addWidget(groupBox_7);
        MainWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindowClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 867, 22));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menu_4 = new QMenu(menuBar);
        menu_4->setObjectName(QString::fromUtf8("menu_4"));
        MainWindowClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindowClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindowClass->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menuBar->addAction(menu_4->menuAction());
        menu->addAction(actionQuit);
        menu_2->addAction(actionStartBacktester);
        menu_3->addAction(actionSQLSetting);
        menu_4->addAction(actionInfo);

        retranslateUi(MainWindowClass);

        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QCoreApplication::translate("MainWindowClass", "MainWindow", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindowClass", "\351\200\200\345\207\272", nullptr));
        actionStartBacktester->setText(QCoreApplication::translate("MainWindowClass", "\345\233\236\346\265\213\347\263\273\347\273\237", nullptr));
#if QT_CONFIG(tooltip)
        actionStartBacktester->setToolTip(QCoreApplication::translate("MainWindowClass", "\345\233\236\346\265\213\347\263\273\347\273\237", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSQLSetting->setText(QCoreApplication::translate("MainWindowClass", "\346\225\260\346\215\256\345\272\223\351\205\215\347\275\256", nullptr));
        actionInfo->setText(QCoreApplication::translate("MainWindowClass", "\344\277\241\346\201\257", nullptr));
#if QT_CONFIG(tooltip)
        actionInfo->setToolTip(QCoreApplication::translate("MainWindowClass", "\345\210\266\344\275\234", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("MainWindowClass", "\344\272\244\346\230\223", nullptr));
        boxLabels->setTitle(QString());
        labelExchange->setText(QCoreApplication::translate("MainWindowClass", "\344\272\244\346\230\223\346\211\200", nullptr));
        labelSymbol->setText(QCoreApplication::translate("MainWindowClass", "\344\273\243\347\240\201", nullptr));
        labelName->setText(QCoreApplication::translate("MainWindowClass", "\345\220\215\347\247\260", nullptr));
        labelDirection->setText(QCoreApplication::translate("MainWindowClass", "\346\226\271\345\220\221", nullptr));
        labelOffset->setText(QCoreApplication::translate("MainWindowClass", "\345\274\200\345\271\263", nullptr));
        labelOrderType->setText(QCoreApplication::translate("MainWindowClass", "\347\261\273\345\236\213", nullptr));
        labelPrice->setText(QCoreApplication::translate("MainWindowClass", "\344\273\267\346\240\274", nullptr));
        labelVol->setText(QCoreApplication::translate("MainWindowClass", "\346\225\260\351\207\217", nullptr));
        labelGateway->setText(QCoreApplication::translate("MainWindowClass", "\346\216\245\345\217\243", nullptr));
        boxEdits->setTitle(QString());
        pushButtonDelegate->setText(QCoreApplication::translate("MainWindowClass", "\345\247\224\346\211\230", nullptr));
        pushButtonCancelAll->setText(QCoreApplication::translate("MainWindowClass", "\345\205\250\346\222\244", nullptr));
        groupBox_6->setTitle(QString());
        boxInfo->setTitle(QCoreApplication::translate("MainWindowClass", "\350\241\214\346\203\205", nullptr));
        boxDelegate->setTitle(QCoreApplication::translate("MainWindowClass", "\345\247\224\346\211\230", nullptr));
        boxActive->setTitle(QCoreApplication::translate("MainWindowClass", "\346\264\273\345\212\250", nullptr));
        boxTradedInfo->setTitle(QCoreApplication::translate("MainWindowClass", "\346\210\220\344\272\244", nullptr));
        groupBox_7->setTitle(QString());
        box->setTitle(QCoreApplication::translate("MainWindowClass", "\346\227\245\345\277\227", nullptr));
        groupBox_9->setTitle(QCoreApplication::translate("MainWindowClass", "\350\265\204\351\207\221", nullptr));
        groupBox_10->setTitle(QCoreApplication::translate("MainWindowClass", "\346\214\201\344\273\223", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindowClass", "\347\263\273\347\273\237", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindowClass", "\345\212\237\350\203\275", nullptr));
        menu_3->setTitle(QCoreApplication::translate("MainWindowClass", "\351\205\215\347\275\256", nullptr));
        menu_4->setTitle(QCoreApplication::translate("MainWindowClass", "\345\205\263\344\272\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
