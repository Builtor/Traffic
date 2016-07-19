#ifndef ADDTICKETDIALOG2_H
#define ADDTICKETDIALOG2_H
#include <QDialog>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

class addTicketDialog2
{
public:
    addTicketDialog2();
    ~addTicketDialog2();

private:
    QLabel *carNum;
    QPushButton *confrim;
    QPushButton *cancel;
    QLineEdit   *edit;

};

#endif // ADDTICKETDIALOG2_H
