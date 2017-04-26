TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    messages.cpp \
    messagecentral.cpp \
    cartoonmessages.cpp \
    purerandom.cpp \

    derived.cpp \
    seccondlevel.cpp \
    derived.cpp \
    seccondlevel.cpp
    testonly.cpp

HEADERS += \
    messages.h \
    messagecentral.h \
    cartoonmessages.h \
    purerandom.h \
    derived.h \
    seccondlevel.h  
    testonly.h
