/********************************************************************************
** Form generated from reading UI file 'ParamsSetting.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAMSSETTING_H
#define UI_PARAMSSETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ParamsSetting
{
public:
    QSplitter *splitter;
    QTableView *tableView;
    QWidget *layoutWidget;
    QHBoxLayout *hboxLayout;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *ParamsSetting)
    {
        if (ParamsSetting->objectName().isEmpty())
            ParamsSetting->setObjectName(QString::fromUtf8("ParamsSetting"));
        ParamsSetting->resize(700, 479);
        splitter = new QSplitter(ParamsSetting);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(150, 60, 411, 311));
        splitter->setOrientation(Qt::Vertical);
        tableView = new QTableView(splitter);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        splitter->addWidget(tableView);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        hboxLayout = new QHBoxLayout(layoutWidget);
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        okButton = new QPushButton(layoutWidget);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(layoutWidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout->addWidget(cancelButton);

        splitter->addWidget(layoutWidget);

        retranslateUi(ParamsSetting);
        QObject::connect(okButton, &QPushButton::clicked, ParamsSetting, qOverload<>(&QDialog::accept));
        QObject::connect(cancelButton, &QPushButton::clicked, ParamsSetting, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ParamsSetting);
    } // setupUi

    void retranslateUi(QDialog *ParamsSetting)
    {
        ParamsSetting->setWindowTitle(QCoreApplication::translate("ParamsSetting", "Dialog", nullptr));
        okButton->setText(QCoreApplication::translate("ParamsSetting", "OK", nullptr));
        cancelButton->setText(QCoreApplication::translate("ParamsSetting", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ParamsSetting: public Ui_ParamsSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMSSETTING_H
