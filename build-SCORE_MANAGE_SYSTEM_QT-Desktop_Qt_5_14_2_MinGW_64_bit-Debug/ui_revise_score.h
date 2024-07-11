/********************************************************************************
** Form generated from reading UI file 'revise_score.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REVISE_SCORE_H
#define UI_REVISE_SCORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_revise_score
{
public:
    QWidget *centralwidget;
    QPushButton *btn_revise_return;
    QLineEdit *revise_student_id;
    QPushButton *btn_revise_confirm;
    QLabel *revise_title;
    QLineEdit *revise_subject;
    QLineEdit *revise_new_score;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *revise_score)
    {
        if (revise_score->objectName().isEmpty())
            revise_score->setObjectName(QString::fromUtf8("revise_score"));
        revise_score->resize(800, 600);
        revise_score->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(revise_score);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btn_revise_return = new QPushButton(centralwidget);
        btn_revise_return->setObjectName(QString::fromUtf8("btn_revise_return"));
        btn_revise_return->setGeometry(QRect(280, 460, 101, 41));
        btn_revise_return->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\256\213\344\275\223\";\n"
"background-color: rgb(204, 204, 191);"));
        revise_student_id = new QLineEdit(centralwidget);
        revise_student_id->setObjectName(QString::fromUtf8("revise_student_id"));
        revise_student_id->setGeometry(QRect(310, 170, 201, 41));
        revise_student_id->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 255);\n"
"border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 10pt \"\345\256\213\344\275\223\";\n"
"color: rgb(103, 103, 103);"));
        btn_revise_confirm = new QPushButton(centralwidget);
        btn_revise_confirm->setObjectName(QString::fromUtf8("btn_revise_confirm"));
        btn_revise_confirm->setGeometry(QRect(450, 460, 101, 41));
        btn_revise_confirm->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\256\213\344\275\223\";\n"
"background-color: rgb(218, 205, 255);"));
        revise_title = new QLabel(centralwidget);
        revise_title->setObjectName(QString::fromUtf8("revise_title"));
        revise_title->setGeometry(QRect(350, 60, 141, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(20);
        revise_title->setFont(font);
        revise_subject = new QLineEdit(centralwidget);
        revise_subject->setObjectName(QString::fromUtf8("revise_subject"));
        revise_subject->setGeometry(QRect(310, 270, 201, 41));
        revise_subject->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 255);\n"
"border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 10pt \"\345\256\213\344\275\223\";\n"
"color: rgb(103, 103, 103);"));
        revise_new_score = new QLineEdit(centralwidget);
        revise_new_score->setObjectName(QString::fromUtf8("revise_new_score"));
        revise_new_score->setGeometry(QRect(310, 340, 201, 41));
        revise_new_score->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 255);\n"
"border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 10pt \"\345\256\213\344\275\223\";\n"
"color: rgb(103, 103, 103);"));
        revise_score->setCentralWidget(centralwidget);
        menubar = new QMenuBar(revise_score);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 17));
        revise_score->setMenuBar(menubar);
        statusbar = new QStatusBar(revise_score);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        revise_score->setStatusBar(statusbar);

        retranslateUi(revise_score);

        QMetaObject::connectSlotsByName(revise_score);
    } // setupUi

    void retranslateUi(QMainWindow *revise_score)
    {
        revise_score->setWindowTitle(QCoreApplication::translate("revise_score", "MainWindow", nullptr));
        btn_revise_return->setText(QCoreApplication::translate("revise_score", "\350\277\224\345\233\236", nullptr));
        revise_student_id->setText(QString());
        revise_student_id->setPlaceholderText(QCoreApplication::translate("revise_score", "Places input student id", nullptr));
        btn_revise_confirm->setText(QCoreApplication::translate("revise_score", "\347\241\256\350\256\244\344\277\256\346\224\271", nullptr));
        revise_title->setText(QCoreApplication::translate("revise_score", "\344\277\256\346\224\271\346\210\220\347\273\251", nullptr));
        revise_subject->setPlaceholderText(QCoreApplication::translate("revise_score", "Places input subject", nullptr));
        revise_new_score->setPlaceholderText(QCoreApplication::translate("revise_score", "Places input new score", nullptr));
    } // retranslateUi

};

namespace Ui {
    class revise_score: public Ui_revise_score {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REVISE_SCORE_H
