QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG   += c++17
QT       += sql
# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp\
    check_score.cpp \
    input_score.cpp \
    login.cpp \
    managerwindow.cpp \
    revise_score.cpp \
    total_score.cpp

HEADERS += \
    check_score.h \
    course.h \
    grade.h \
    input_score.h \
    login.h \
    mainwindow.h\ \
    manager.h \
    managerwindow.h \
    revise_score.h \
    student.h \
    total_score.h \
    ui_check_score.h \
    ui_input_score.h \
    ui_login.h \
    ui_managerwindow.h \
    ui_revise_score.h \
    ui_total_score.h

FORMS += \
    mainwindow.ui\
    check_score.ui \
    input_score.ui \
    login.ui \
    revise_score.ui \
    total_score.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
