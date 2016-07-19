#include "addticketdialog.h"
#include "ui_addticketdialog.h"

AddTicketDialog::AddTicketDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddTicketDialog)
{
    ui->setupUi(this);

}

void AddTicketDialog::setFlag(int i)
{
    flag = i;
}

int AddTicketDialog::getFlag()
{
    return flag;
}

AddTicketDialog::~AddTicketDialog()
{
    delete ui;
    flag = 0;
}

int AddTicketDialog::flag = 0;

void AddTicketDialog::on_pushButton_clicked()
{
    flag = 0;
    close();
}

void AddTicketDialog::on_pushButton_2_clicked()
{
    flag = 0;
    close();
}
