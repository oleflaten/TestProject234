TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    shape.cpp \
    circle.cpp \
    triangle.cpp

HEADERS += \
    shape.h \
    circle.h \
    triangle.h
