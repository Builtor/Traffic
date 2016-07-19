#include "delcameradialog.h"
#include "ui_delcameradialog.h"

DelCameraDialog::DelCameraDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DelCameraDialog)
{
    ui->setupUi(this);
    //setWindowFlags(Qt::NoTabFocus);
}

DelCameraDialog::~DelCameraDialog()
{
    delete ui;
}
