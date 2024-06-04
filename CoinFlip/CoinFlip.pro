#-------------------------------------------------
#
# Project created by QtCreator 2018-01-09T09:22:09
#
#-------------------------------------------------

QT       += core gui
QT += multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CoinFlip
TEMPLATE = app


SOURCES += main.cpp\
    dataconfig.cpp \
        mainscene.cpp \
    mycoin.cpp \
    mypushbutton.cpp \
    chooselevelscene.cpp \
    playscene.cpp

HEADERS  += mainscene.h \
    dataconfig.h \
    mycoin.h \
    mypushbutton.h \
    chooselevelscene.h \
    playscene.h

FORMS    += mainscene.ui

RESOURCES += \
    res.qrc
