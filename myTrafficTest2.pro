#-------------------------------------------------
#
# Project created by QtCreator 2016-07-13T11:02:28
#
#-------------------------------------------------

QT       += core gui axcontainer

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = myTrafficTest2
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    addcameradialog.cpp \
    delcameradialog.cpp \
    addticketdialog.cpp \
    addticketdialog2.cpp

HEADERS  += widget.h \
    addcameradialog.h \
    delcameradialog.h \
    addticketdialog.h \
    addticketdialog2.h

FORMS    += widget.ui \
    addcameradialog.ui \
    delcameradialog.ui \
    addticketdialog.ui
