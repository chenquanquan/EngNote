#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "settingdialog.h"
#include "addworddialog.h"
#include "settingvalue.h"
#include "dictionaryparse.h"

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
   QString dictPathStr;
   QList<QString> dictList;
   QString valueStr = arg1; //ui->inputEdit->text();
   QString outputStr = valueStr;

   settingReadDictPath(&dictPathStr);
   if (dictPathStr.isEmpty() == 0) {
       dictReadXml(&dictPathStr);
       dictSearchWord(&valueStr, &dictList);

       /* Display all result in ui */
       QListIterator<QString> i(dictList);
       ui->noteEdit->clear();
       for (;i.hasNext();) {
           ui->noteEdit->append(i.next());
       }
   }
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
