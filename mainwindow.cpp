#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_inputEdit_textChanged(const QString &arg1)
{
   QString valueStr = ui->inputEdit->text();
   QString outputStr = valueStr;

   ui->noteEdit->setText(outputStr);
}
