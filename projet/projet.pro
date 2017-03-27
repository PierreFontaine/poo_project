#-------------------------------------------------
#
# Project created by QtCreator 2017-03-07T15:24:23
#
#-------------------------------------------------

QT       += core gui charts xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets network

TARGET = projet
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    module.cpp \
    meteomodule.cpp \
    meteojour.cpp \
    meteodata.cpp \
    meteoparam.cpp \
    actumodule.cpp \
    actudata.cpp \
    todolistmodule.cpp \
    todolistdata.cpp \
    todolistajout.cpp

HEADERS  += mainwindow.h \
    module.h \
    meteomodule.h \
    meteojour.h \
    meteodata.h \
    meteoparam.h \
    actumodule.h \
    actudata.h \
    list.h \
    todolistmodule.h \
    todolistdata.h \
    todolistajout.h

FORMS    += mainwindow.ui

DISTFILES += \
    ../build-projet-Desktop_Qt_5_8_0_clang_64bit-Debug/nuageux.png

RESOURCES += \
    images.qrc
