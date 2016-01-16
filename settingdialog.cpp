/* Setting window
 *
 */
#include "settingdialog.h"
#include "ui_settingdialog.h"
#include "settingvalue.h"
#include "dictionaryparse.h"

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

/* Save all setting item
 *
 */
void settingDialog::on_yesButton_clicked()
{
    QString dictPathStr = ui->dictLine->text();
    /* Write dictionary path as a setting value */
    settingWriteDictPath(&dictPathStr);
    /* check the dictionary path and read the file(XML) */
    if (dictPathStr.isEmpty() == 0) {
        dictReadXml(&dictPathStr);
    }

    settingDialog::close();
}

void settingDialog::on_noButton_clicked()
{
    settingDialog::close();
}
