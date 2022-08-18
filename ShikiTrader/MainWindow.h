#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MainWindow.h"
#include "BackTester.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindowClass; };
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindowClass *ui;
private slots:
    void on_actionStartBacktester_triggered()
    {
        auto backTesterWindow = new BackTestWindow(this);
        backTesterWindow->setAttribute(Qt::WA_DeleteOnClose);
        backTesterWindow->show();
    }
};
