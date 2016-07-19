#include "widget.h"
#include "ui_widget.h"
#include "addcameradialog.h"
#include "delcameradialog.h"
#include "addticketdialog.h"
#include "addticketdialog2.h"
#include <QPixmap>
#include <QFileDialog>
#include <QImage>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QImage *i = new QImage("D:/1.png");

    ui->label->setPixmap(QPixmap::fromImage(*i));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_3_clicked()
{
    AddCameraDialog a;
    a.setFixedSize(365 ,307);
    if(a.exec() == QDialog::Accepted)
        show();

}

void Widget::on_pushButton_2_clicked()
{
    DelCameraDialog d;
    d.setFixedSize(337,307);
    if(d.exec() == QDialog::Accepted)
        show();
}

void Widget::on_pushButton_6_clicked()
{

    AddTicketDialog *a= new AddTicketDialog(this);
    a->setFixedSize(337,307);

    if (!a->getFlag())
    a->show();
    a->setFlag(1);

}
