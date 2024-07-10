/********************************************************************************
** Form generated from reading UI file 'single_score.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SINGLE_SCORE_H
#define UI_SINGLE_SCORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Single_score
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Single_score)
    {
        if (Single_score->objectName().isEmpty())
            Single_score->setObjectName(QString::fromUtf8("Single_score"));
        Single_score->resize(800, 600);
        Single_score->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(Single_score);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Single_score->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Single_score);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Single_score->setMenuBar(menubar);
        statusbar = new QStatusBar(Single_score);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Single_score->setStatusBar(statusbar);

        retranslateUi(Single_score);

        QMetaObject::connectSlotsByName(Single_score);
    } // setupUi

    void retranslateUi(QMainWindow *Single_score)
    {
        Single_score->setWindowTitle(QCoreApplication::translate("Single_score", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Single_score: public Ui_Single_score {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SINGLE_SCORE_H
