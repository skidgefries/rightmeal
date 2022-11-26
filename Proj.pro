QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    basic.cpp \
    basicinfo.cpp \
    bmi.cpp \
    bodyfat.cpp \
    caloriecalculator.cpp \
    dietplan.cpp \
    displaybmi.cpp \
    main.cpp \
    mainwindow.cpp \
    myprofile.cpp \
    signup.cpp \
    workout.cpp

HEADERS += \
    basic.h \
    basicinfo.h \
    bmi.h \
    bodyfat.h \
    caloriecalculator.h \
    dietplan.h \
    displaybmi.h \
    mainwindow.h \
    myprofile.h \
    signup.h \
    workout.h

FORMS += \
    basic.ui \
    basicinfo.ui \
    bmi.ui \
    bodyfat.ui \
    caloriecalculator.ui \
    dietplan.ui \
    displaybmi.ui \
    mainwindow.ui \
    myprofile.ui \
    signup.ui \
    workout.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    icons.qrc \
    image.qrc
