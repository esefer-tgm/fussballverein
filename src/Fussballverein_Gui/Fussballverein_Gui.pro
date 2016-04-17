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
        settings.cpp

HEADERS  += settings.h

FORMS    += settings.ui


QMAKE_CXXFLAGS += -std=gnu++11
