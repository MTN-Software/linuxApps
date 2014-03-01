#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qstring.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionClose_triggered()
{
    this->close();
}

void MainWindow::on_btnAdd_clicked()
{
    int i, j;
    i = ui->txtNumberOne->text().toInt();
    j = ui->txtNumberTwo->text().toInt();

    i += j;     // i = i + j;

    QString strSum;
    strSum = QString::number(i);
    ui->txtSum->text() = strSum;
}
