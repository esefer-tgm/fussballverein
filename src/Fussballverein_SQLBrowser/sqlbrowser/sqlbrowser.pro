#-------------------------------------------------
#
# Project created by QtCreator 2016-04-16T18:38:45
#
#-------------------------------------------------


TEMPLATE        = app
TARGET          = sqlbrowser

QT              += sql widgets

HEADERS         = browser.h connectionwidget.h qsqlconnectiondialog.h
SOURCES         = main.cpp browser.cpp connectionwidget.cpp qsqlconnectiondialog.cpp

FORMS           = browserwidget.ui qsqlconnectiondialog.ui
build_all:!build_pass {
    CONFIG -= build_all
    CONFIG += release
}

# install
target.path = $$[QT_INSTALL_EXAMPLES]/sql/sqlbrowser
INSTALLS += target


wince {
    DEPLOYMENT_PLUGIN += qsqlite
}
