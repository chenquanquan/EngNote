/* Add new word with associate chinese in note.
 *
 */
#include "addworddialog.h"
#include "ui_addworddialog.h"

addWordDialog::addWordDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addWordDialog)
{
    ui->setupUi(this);
}

addWordDialog::~addWordDialog()
{
    delete ui;
}

