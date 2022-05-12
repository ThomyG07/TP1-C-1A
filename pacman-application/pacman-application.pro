QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Personnage.cpp \
    background.cpp \
    clyde.cpp \
    drawable.cpp \
    drawableelem.cpp \
    ennemi.cpp \
    interactive.cpp \
    main.cpp \
    movable.cpp \
    notifiercollision.cpp \
    observercollision.cpp \
    regularmove.cpp

HEADERS += \
    NotifierCollision.h \
    Personnage.h \
    background.h \
    clyde.h \
    consts.h \
    drawable.h \
    drawableelem.h \
    ennemi.h \
    interactive.h \
    movable.h \
    observercollision.h \
    regularmove.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
