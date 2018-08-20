TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt
QMAKE_CXXFLAGS += -std=c++0x -pthread
LIBS += -pthread

SOURCES += main.cpp \
    messages.cpp \
    messagecentral.cpp \
    cartoonmessages.cpp \
    purerandom.cpp \
    derived.cpp \
    seccondlevel.cpp \
    testonly.cpp \
    immortal.cpp \
    singleton_p.cpp \
    subject.cpp \
    observer.cpp \
    stockgrabber.cpp \
    operations.cpp \
    stockobserver.cpp \
    engine.cpp

HEADERS += \
    messages.h \
    messagecentral.h \
    cartoonmessages.h \
    purerandom.h \
    derived.h \
    seccondlevel.h \  
    immortal.h \
    singleton_p.h \
    subject.h \
    observer.h \
    stockgrabber.h \
    operations.h \
    stockobserver.h \
    engine.h
    testonly.h
