#ifndef ADDCAMERADIALOG_H
#define ADDCAMERADIALOG_H

#include <QDialog>

namespace Ui {
class AddCameraDialog;
}

class AddCameraDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddCameraDialog(QWidget *parent = 0);
    ~AddCameraDialog();

private:
    Ui::AddCameraDialog *ui;
};

#endif // ADDCAMERADIALOG_H
