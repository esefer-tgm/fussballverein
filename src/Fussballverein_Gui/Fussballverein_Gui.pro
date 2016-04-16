#-------------------------------------------------
#
# Project created by QtCreator 2016-04-16T18:38:45
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Fussballverein_Gui
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp

HEADERS  += widget.h

FORMS    += widget.ui

QMAKE_CXXFLAGS += -std=gnu++11
