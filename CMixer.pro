QT       += core
QT       -= gui

TARGET = CMixer
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

win32: LIBS += \
        -L$$PWD/bass -lbass \
        -L$$PWD/bassmix -lbassmix \

INCLUDEPATH += $$PWD/ \
               $$PWD/bass/ \
               $$PWD/bassmix/ \

DEPENDPATH += $$PWD/ \
              $$PWD/bass/ \
              $$PWD/bassmix/ \

target.path =  $$PWD/bin/
INSTALLS +=    target


SOURCES += main.cpp \
    cplayer.cpp \
    cmixer.cpp

HEADERS += \
    cplayer.h \
    cmixer.h
