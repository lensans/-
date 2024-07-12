QT       += core gui
QT       += sql
QT       += charts
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG   += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    delete_score.cpp \
    drag_drop_widget.cpp \
    main.cpp \
    check_score.cpp \
    input_score.cpp \
    login.cpp \
    managerwindow.cpp \
    mysql_connect.cpp \
    password.cpp \
    revise_score.cpp \
    single_score.cpp \
    studentwindow.cpp \
    teacherwindow.cpp \
    total_score.cpp \
    paint.cpp \
    change_password.cpp \
    subject_relation.cpp \
    Relationship.cpp \
    score_distribution.cpp \
    choice_window.cpp

HEADERS += \
    check_score.h \
    delete_score.h \
    drag_drop_widget.h \
    input_score.h \
    login.h \
    managerwindow.h \
    password.h \
    revise_score.h \
    single_score.h \
    student.h \
    studentwindow.h \
    subject_relation.h \
    teacherwindow.h \
    total_score.h \
    ui_input_score.h \
    ui_login.h \
    ui_total_score.h \
    mysql_connect.h \
    paint.h \
    change_password.h \
    Relationship.h \
    score_distribution.h \
    choice_window.h

FORMS += \
    change_password.ui \
    check_score.ui \
    delete_score.ui \
    input_score.ui \
    login.ui \
    revise_score.ui \
    single_score.ui \
    studentwindow.ui \
    teacherwindow.ui \
    total_score.ui \
    managerwindow.ui \
    subject_relation.ui \
    score_distribution.ui \
    choice_window.ui


LIBS += -L"$$PWD/OpenSSL-Win64/lib/" -llibssl -llibcrypto

INCLUDEPATH += $$PWD/OpenSSL-Win64/include

# Default rules for deployment.
QXLSX_PARENTPATH=./     # current QXlsx path is . (. means curret directory)
QXLSX_HEADERPATH=./qxlsx/header/  # current QXlsx header path is ./header/
QXLSX_SOURCEPATH=./qxlsx/source/# current QXlsx source path is ./source/
include(./QXlsx/QXlsx.pri)
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
