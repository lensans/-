QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
QT+=sql
# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp
    
    check_score.cpp \
    input_score.cpp \
    login.cpp \
    main.cpp \
    managerwindow.cpp \
    revise_score.cpp \
    total_score.cpp

HEADERS += \
    mainwindow.h

    check_score.h \
    input_score.h \
    login.h \
    managerwindow.h \
    revise_score.h \
    total_score.h

FORMS += \
    mainwindow.ui

    check_score.ui \
    input_score.ui \
    login.ui \
    managerwindow.ui \
    revise_score.ui \
    total_score.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
