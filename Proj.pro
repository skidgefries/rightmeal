QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    basicinfo.cpp \
    bmi.cpp \
    caloriecalculator.cpp \
    dietplan.cpp \
    main.cpp \
    mainwindow.cpp \
    myprofile.cpp \
    signup.cpp \
    workout.cpp

HEADERS += \
    basicinfo.h \
    bmi.h \
    caloriecalculator.h \
    dietplan.h \
    mainwindow.h \
    myprofile.h \
    signup.h \
    workout.h

FORMS += \
    basicinfo.ui \
    bmi.ui \
    caloriecalculator.ui \
    dietplan.ui \
    mainwindow.ui \
    myprofile.ui \
    signup.ui \
    workout.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    icons.qrc
