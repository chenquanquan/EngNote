#-------------------------------------------------
#
# Project created by QtCreator 2016-01-14T09:56:28
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = EngNote
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    settingvalue.cpp \
    settingdialog.cpp \
    addworddialog.cpp

HEADERS  += mainwindow.h \
    settingvalue.h \
    settingdialog.h \
    addworddialog.h

FORMS    += mainwindow.ui \
    settingdialog.ui \
    addworddialog.ui
