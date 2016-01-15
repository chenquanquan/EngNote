#ifndef SETTINGDIALOG_H
#define SETTINGDIALOG_H

#include <QDialog>

namespace Ui {
class settingDialog;
}

class settingDialog : public QDialog
{
    Q_OBJECT

public:
    explicit settingDialog(QWidget *parent = 0);
    ~settingDialog();

private slots:
    void on_yesButton_clicked();

    void on_noButton_clicked();

private:
    Ui::settingDialog *ui;
};

#endif // SETTINGDIALOG_H
