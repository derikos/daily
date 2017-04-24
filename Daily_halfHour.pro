TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    messages.cpp \
    messagecentral.cpp \
    cartoonmessages.cpp

HEADERS += \
    messages.h \
    messagecentral.h \
    cartoonmessages.h
