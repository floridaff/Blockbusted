#-------------------------------------------------
#
# Project created by QtCreator 2016-10-05T10:48:28
#
#-------------------------------------------------

QT += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Blockbusted
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    emp_verification.cpp \
    addemployee.cpp \
    addcustomer.cpp

HEADERS  += mainwindow.h \
    emp_verification.h \
    addemployee.h \
    addcustomer.h

FORMS    += mainwindow.ui \
    emp_verification.ui \
    addemployee.ui \
    addcustomer.ui

DISTFILES +=
