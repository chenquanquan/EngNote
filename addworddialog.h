#ifndef ADDWORDDIALOG_H
#define ADDWORDDIALOG_H

#include <QDialog>

namespace Ui {
class addWordDialog;
}

class addWordDialog : public QDialog
{
    Q_OBJECT

public:
    explicit addWordDialog(QWidget *parent = 0);
    ~addWordDialog();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::addWordDialog *ui;
};

#endif // ADDWORDDIALOG_H
