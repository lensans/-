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
    input_excel_score.cpp \
    input_single_score.cpp \
    inputwindow.cpp \
    main.cpp \
    check_score.cpp \
    managerwindow.cpp \
    mysql_connect.cpp \
    password.cpp \
    revise_score.cpp \
    signin.cpp \
    stu_change_password_.cpp \
    stu_check_score_.cpp \
    student.cpp \
    studentwindow.cpp \
    teacherwindow.cpp \
    paint.cpp \
    change_password.cpp \
    Relationship.cpp \
    score_distribution.cpp \
    totalscore.cpp

HEADERS += \
    check_score.h \
    delete_score.h \
    drag_drop_widget.h \
    input_excel_score.h \
    input_single_score.h \
    inputwindow.h \
    managerwindow.h \
    password.h \
    revise_score.h \
    signin.h \
    stu_change_password_.h \
    stu_check_score_.h \
    student.h \
    student.h \
    studentwindow.h \
    teacherwindow.h \
    totalscore.h \
    ui_input_score.h \
    ui_login.h \
    ui_total_score.h \
    mysql_connect.h \
    paint.h \
    change_password.h \
    Relationship.h \
    score_distribution.h

FORMS += \
    change_password.ui \
    check_score.ui \
    delete_score.ui \
    input_excel_score.ui \
    input_single_score.ui \
    inputwindow.ui \
    revise_score.ui \
    signin.ui \
    stu_change_password_.ui \
    stu_check_score_.ui \
    studentwindow.ui \
    teacherwindow.ui \
    managerwindow.ui \
    score_distribution.ui \
    totalscore.ui


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

RESOURCES += \
    images.qrc
