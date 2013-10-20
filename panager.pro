#-------------------------------------------------
#
# Project created by QtCreator 2013-02-27T09:54:45
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = panager
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    logic.cpp \
    pass.cpp \
    config.cpp \
    dialoginfo.cpp \
    update.cpp \
    dialogaddrecord.cpp \
    dialogopenfile.cpp \
    live.cpp \
    worker.cpp

HEADERS  += mainwindow.h \
    logic.h \
    pass.h \
    config.h \
    dialoginfo.h \
    update.h \
    dialogaddrecord.h \
    dialogopenfile.h \
    live.h \
    worker.h

FORMS    += mainwindow.ui \
    pass.ui \
    dialoginfo.ui \
    dialogopenfile.ui \
    dialogaddrecord.ui
CONFIG += qt
LIBS    += /usr/lib64/libmysqlclient.so
LIBS += -L/usr/local/lib -lpoppler-qt4
OTHER_FILES += \
    background.png \
    button_hover.png \
    button.png \
    ../close.png

RESOURCES += \
    resorsy.qrc

