#include "addticketdialog2.h"
#include <QGridLayout>

addTicketDialog2::addTicketDialog2()
{
    carNum = new QLabel();
    carNum->setText("carNum");
    edit = new QLineEdit();
    confrim = new QPushButton();
    confrim->setText("confrim");
    cancel = new QPushButton();
    cancel->setText("cancel");

    QGridLayout *main = new QGridLayout();
    main->addWidget(carNum,0,0);
    main->addWidget(edit,0,1);
    main->addWidget(confrim,1,0);
    main->addWidget(cancel,1,1);

}
