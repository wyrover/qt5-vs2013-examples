#-------------------------------------------------
#
# Project created by QtCreator 2018-02-24T11:08:14
#
#-------------------------------------------------

QT       -= gui

TARGET = test05
TEMPLATE = lib
CONFIG += staticlib

SOURCES += test05.cpp

HEADERS += test05.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
