#-------------------------------------------------
#
# Project created by QtCreator 2017-07-10T13:30:20
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = recver
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

#if QT_VERSION >= 0x050000
QT       += core gui widgets
#else
QT       += core gui
#endif
QT += network

RESOURCES += \
    niubia.qrc
