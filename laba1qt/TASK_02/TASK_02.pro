QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    canvas.cpp \
    dialog.cpp \
    main.cpp \
    mainwindow.cpp \
    mycircle.cpp \
    myellipse.cpp \
    myfigure.cpp \
    myhexagon.cpp \
    mynewstarw8.cpp \
    mypersonalfigure.cpp \
    myrectangle.cpp \
    myrhombus.cpp \
    mysquare.cpp \
    mystar.cpp \
    mystarw5.cpp \
    mystarw6.cpp \
    mytriangle.cpp

HEADERS += \
    canvas.h \
    dialog.h \
    mainwindow.h \
    mycircle.h \
    myellipse.h \
    myfigure.h \
    myhexagon.h \
    mynewstarw8.h \
    mypersonalfigure.h \
    myrectangle.h \
    myrhombus.h \
    mysquare.h \
    mystar.h \
    mystarw5.h \
    mystarw6.h \
    mytriangle.h

FORMS += \
    dialog.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
