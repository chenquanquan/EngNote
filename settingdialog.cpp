#include "settingdialog.h"
#include "ui_settingdialog.h"
#include "settingvalue.h"

settingDialog::settingDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::settingDialog)
{
    QString dictPathStr;

    ui->setupUi(this);

    /* Write data to setting */
    settingReadDictPath(&dictPathStr);
    ui->dictLine->setText(dictPathStr);
}

settingDialog::~settingDialog()
{
    delete ui;
}

void settingDialog::on_yesButton_clicked()
{
    QString dictPathStr = ui->dictLine->text();
    settingWriteDictPath(&dictPathStr);

    settingDialog::close();
}

void settingDialog::on_noButton_clicked()
{
    settingDialog::close();
}
