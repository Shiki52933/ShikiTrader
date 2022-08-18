#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindowClass())
{
    ui->setupUi(this);
    setCentralWidget(ui->mainFilter);
    showMaximized();
}

MainWindow::~MainWindow()
{
    delete ui;
}
