#-------------------------------------------------
#
# Project created by QtCreator 2016-01-14T09:56:28
#
#-------------------------------------------------

QT       += core gui xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = EngNote
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    settingvalue.cpp \
    settingdialog.cpp \
    addworddialog.cpp \
    dictionaryparse.cpp

HEADERS  += mainwindow.h \
    settingvalue.h \
    settingdialog.h \
    addworddialog.h \
    dictionaryparse.h

FORMS    += mainwindow.ui \
    settingdialog.ui \
    addworddialog.ui
