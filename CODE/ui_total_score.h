/********************************************************************************
** Form generated from reading UI file 'total_score.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOTAL_SCORE_H
#define UI_TOTAL_SCORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_total_score
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *total_score)
    {
        if (total_score->objectName().isEmpty())
            total_score->setObjectName(QString::fromUtf8("total_score"));
        total_score->resize(800, 600);
        total_score->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(total_score);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        total_score->setCentralWidget(centralwidget);
        menubar = new QMenuBar(total_score);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        total_score->setMenuBar(menubar);
        statusbar = new QStatusBar(total_score);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        total_score->setStatusBar(statusbar);

        retranslateUi(total_score);

        QMetaObject::connectSlotsByName(total_score);
    } // setupUi

    void retranslateUi(QMainWindow *total_score)
    {
        total_score->setWindowTitle(QCoreApplication::translate("total_score", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class total_score: public Ui_total_score {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOTAL_SCORE_H
