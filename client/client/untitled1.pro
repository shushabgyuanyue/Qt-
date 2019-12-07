#-------------------------------------------------
#
# Project created by QtCreator 2017-07-09T13:13:35
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = untitled1
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    about.cpp

HEADERS  += \
    mainwindow.h \
    about.h

FORMS    += mainwindow.ui \
    about.ui

RESOURCES += \
    res.qrc
#if QT_VERSION >= 0x050000
QT       += core gui widgets
#else
QT       += core gui
#endif
QT += network
QT += multimedia
