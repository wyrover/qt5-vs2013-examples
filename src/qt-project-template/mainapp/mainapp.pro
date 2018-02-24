#-------------------------------------------------
#
# Project created by QtCreator 2018-02-24T11:52:01
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = mainapp
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../utlity/release/ -lutlity
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../utlity/debug/ -lutlity
else:unix: LIBS += -L$$OUT_PWD/../utlity/ -lutlity

INCLUDEPATH += $$PWD/../utlity
DEPENDPATH += $$PWD/../utlity

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../utlity/release/libutlity.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../utlity/debug/libutlity.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../utlity/release/utlity.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../utlity/debug/utlity.lib
else:unix: PRE_TARGETDEPS += $$OUT_PWD/../utlity/libutlity.a
