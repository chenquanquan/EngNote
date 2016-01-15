#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "settingdialog.h"
#include "addworddialog.h"
#include "settingvalue.h"

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
   QString valueStr = arg1; //ui->inputEdit->text();
   QString outputStr = valueStr;

   ui->noteEdit->setText(outputStr);
}

void MainWindow::on_settingButton_clicked()
{
    settingDialog *settingWindow = new settingDialog(this);

    settingWindow->show();
}

void MainWindow::on_addButton_clicked()
{
    addWordDialog *addWindow = new addWordDialog(this);

    addWindow->show();
}
