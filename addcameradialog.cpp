#include "addcameradialog.h"
#include "ui_addcameradialog.h"

AddCameraDialog::AddCameraDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddCameraDialog)
{
    ui->setupUi(this);
}

AddCameraDialog::~AddCameraDialog()
{
    delete ui;
}
