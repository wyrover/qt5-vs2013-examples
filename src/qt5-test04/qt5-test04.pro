#-------------------------------------------------
#
# Project created by QtCreator 2018-02-24T11:03:55
#
#-------------------------------------------------

QT       -= gui

TARGET = qt5-test04
TEMPLATE = lib

DEFINES += QT5TEST04_LIBRARY

SOURCES += qt5test04.cpp

HEADERS += qt5test04.h\
        qt5-test04_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
