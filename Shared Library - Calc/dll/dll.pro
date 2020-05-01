#-------------------------------------------------
#
# Project created by QtCreator 2016-03-16T14:47:42
#
#-------------------------------------------------

QT       -= gui

TARGET = dll
TEMPLATE = lib

DEFINES += DLL_LIBRARY

SOURCES += dll.cpp

HEADERS += dll.h\
        dll_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
