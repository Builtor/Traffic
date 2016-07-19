#ifndef ADDTICKETDIALOG_H
#define ADDTICKETDIALOG_H

#include <QDialog>
#include "addticketdialog.h"
#include "ui_addticketdialog.h"

namespace Ui {
class AddTicketDialog;
}

class AddTicketDialog : public QDialog
{
    Q_OBJECT
public:
    explicit AddTicketDialog(QWidget *parent = 0);
    ~AddTicketDialog();
    void setFlag(int i);
    int getFlag();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::AddTicketDialog *ui;
    static int flag;
};


#endif // ADDTICKETDIALOG_H
