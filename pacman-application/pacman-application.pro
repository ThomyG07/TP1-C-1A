QT       += core


CONFIG += c++17
CONFIG += console
# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
<<<<<<< HEAD
    notifierobserver.cpp \
    personnage.cpp

HEADERS += \
    notifierobserver.h \
    personnage.h

=======
   # mainwindow.cpp

HEADERS += \
   # mainwindow.h

FORMS += \
   # mainwindow.ui

TRANSLATIONS += \
    pacman-application_fr_FR.ts
>>>>>>> 0465049177a3ede9392ea32bbb521395e1ab067e
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
