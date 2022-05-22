QT       += core gui statemachine

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    animatedwidget.cpp \
    background.cpp \
    observercollision.cpp \
    personnage.cpp \
    drawable.cpp \
    drawableelem.cpp \
    interactive.cpp \
    main.cpp \
<<<<<<< HEAD
    notifiercollision.cpp \
=======
    mainwindow.cpp \
>>>>>>> origin/UI
    movable.cpp \
    pastille.cpp \
    regularmove.cpp

HEADERS += \
    animatedwidget.h \
    notifiercollision.h \
    background.h \
    observercollision.h \
    personnage.h \
    consts.h \
    drawable.h \
    drawableelem.h \
    interactive.h \
    mainwindow.h \
    movable.h \
    pastille.h \
    regularmove.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

<<<<<<< HEAD
DISTFILES += \
    ../images/background.png \
    ../images/blinky_ba_1.png \
    ../images/blinky_ba_2.png \
    ../images/blinky_dr_1.png \
    ../images/blinky_dr_2.png \
    ../images/blinky_ga_1.png \
    ../images/blinky_ga_2.png \
    ../images/blinky_ha_1.png \
    ../images/blinky_ha_2.png \
    ../images/clyde_ba_1.png \
    ../images/clyde_ba_2.png \
    ../images/clyde_dr_1.png \
    ../images/clyde_dr_2.png \
    ../images/clyde_ga_1.png \
    ../images/clyde_ga_2.png \
    ../images/clyde_ha_1.png \
    ../images/clyde_ha_2.png \
    ../images/images.svg \
    ../images/inky_ba_1.png \
    ../images/inky_ba_2.png \
    ../images/inky_dr_1.png \
    ../images/inky_dr_2.png \
    ../images/inky_ga_1.png \
    ../images/inky_ga_2.png \
    ../images/inky_ha_1.png \
    ../images/inky_ha_2.png \
    ../images/pacman_ba_1.png \
    ../images/pacman_ba_2.png \
    ../images/pacman_ba_3.png \
    ../images/pacman_ba_4.png \
    ../images/pacman_dr_1.png \
    ../images/pacman_dr_2.png \
    ../images/pacman_dr_3.png \
    ../images/pacman_dr_4.png \
    ../images/pacman_ga_1.png \
    ../images/pacman_ga_2.png \
    ../images/pacman_ga_3.png \
    ../images/pacman_ga_4.png \
    ../images/pacman_go_1.png \
    ../images/pacman_go_2.png \
    ../images/pacman_go_3.png \
    ../images/pacman_go_4.png \
    ../images/pacman_ha_1.png \
    ../images/pacman_ha_2.png \
    ../images/pacman_ha_3.png \
    ../images/pacman_ha_4.png \
    ../images/pastille.png \
    ../images/pinky_ba_1.png \
    ../images/pinky_ba_2.png \
    ../images/pinky_dr_1.png \
    ../images/pinky_dr_2.png \
    ../images/pinky_ga_1.png \
    ../images/pinky_ga_2.png \
    ../images/pinky_ha_1.png \
    ../images/pinky_ha_2.png
=======
FORMS += \
    mainwindow.ui
>>>>>>> origin/UI
