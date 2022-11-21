QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    C:/Users/Dell/Downloads/qt/basicinfo.cpp \
    C:/Users/Dell/Downloads/qt/dietplan.cpp \
    C:/Users/Dell/Downloads/qt/firstpage.cpp \
    C:/Users/Dell/Downloads/qt/mainwindow.cpp \
    C:/Users/Dell/Downloads/qt/signup.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    C:/Users/Dell/Downloads/qt/basicinfo.h \
    C:/Users/Dell/Downloads/qt/dietplan.h \
    C:/Users/Dell/Downloads/qt/firstpage.h \
    C:/Users/Dell/Downloads/qt/mainwindow.h \
    C:/Users/Dell/Downloads/qt/signup.h \
    mainwindow.h

FORMS += \
    C:/Users/Dell/Downloads/calories.ui \
    C:/Users/Dell/Downloads/nbasicinfo.ui \
    C:/Users/Dell/Downloads/nmyprofile.ui \
    C:/Users/Dell/Downloads/nsignup.ui \
    C:/Users/Dell/Downloads/qt/basicinfo.ui \
    C:/Users/Dell/Downloads/qt/dietplan.ui \
    C:/Users/Dell/Downloads/qt/firstpage.ui \
    C:/Users/Dell/Downloads/qt/mainwindow.ui \
    C:/Users/Dell/Downloads/qt/signup.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    C:/Users/Dell/Downloads/qt.zip
