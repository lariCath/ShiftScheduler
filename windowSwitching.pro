QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addworkerwindow.cpp \
    createschedule.cpp \
    displayemployeewindow.cpp \
    employee.cpp \
    fillschedule.cpp \
    generateschedulewindow.cpp \
    main.cpp \
    mainwindow.cpp \
    managedateinput.cpp \
    manageemployee.cpp \
    schedulewindow.cpp \
    shift.cpp

HEADERS += \
    addworkerwindow.h \
    createschedule.h \
    displayemployeewindow.h \
    employee.h \
    fillschedule.h \
    generateschedulewindow.h \
    mainwindow.h \
    managedateinput.h \
    manageemployee.h \
    schedulewindow.h \
    shift.h

FORMS += \
    addworkerwindow.ui \
    displayemployeewindow.ui \
    generateschedulewindow.ui \
    mainwindow.ui \
    schedulewindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

//RC_ICONS = your_icon.ico

RESOURCES += \
    qtresource.qrc
