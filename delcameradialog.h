#ifndef DELCAMERADIALOG_H
#define DELCAMERADIALOG_H

#include <QDialog>

namespace Ui {
class DelCameraDialog;
}

class DelCameraDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DelCameraDialog(QWidget *parent = 0);
    ~DelCameraDialog();

private:
    Ui::DelCameraDialog *ui;
};

#endif // DELCAMERADIALOG_H
