#-------------------------------------------------
#
# Project created by QtCreator 2017-09-15T18:14:07
#
#-------------------------------------------------

QT       += core gui
QT       += webenginewidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = HomePageBuilder
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    createelement.cpp \
    cssdialog.cpp \
    nodelist.cpp \
    treewidget.cpp

HEADERS  += mainwindow.h \
    createelement.h \
    node.h \
    css.h \
    cssdialog.h \
    nodelist.h \
    treewidget.h

FORMS    += mainwindow.ui \
    createelement.ui \
    cssdialog.ui
