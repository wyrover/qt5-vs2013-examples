#-------------------------------------------------
#
# Project created by QtCreator 2018-02-24T11:53:43
#
#-------------------------------------------------

QT       -= gui

TARGET = utlity
TEMPLATE = lib
CONFIG += staticlib

SOURCES += utlity.cpp

HEADERS += utlity.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
