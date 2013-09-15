#-------------------------------------------------
#
# Project created by QtCreator 2013-09-15T09:16:23
#
#-------------------------------------------------

QT       += network

QT       -= gui

TARGET = libTROW
TEMPLATE = lib

DEFINES += LIBTROW_LIBRARY

SOURCES += libtrow.cpp

HEADERS += libtrow.h\
        libtrow_global.h

unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}
