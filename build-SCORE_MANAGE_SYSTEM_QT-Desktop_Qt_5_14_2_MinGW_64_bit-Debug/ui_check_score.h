/********************************************************************************
** Form generated from reading UI file 'check_score.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECK_SCORE_H
#define UI_CHECK_SCORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_check_score
{
public:
    QWidget *centralwidget;
    QLineEdit *check_student_id;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *check_math_label;
    QLabel *check_physics_label;
    QLabel *check_biology_label;
    QLineEdit *check_English_line;
    QLabel *check_English_label;
    QLineEdit *check_biology_line;
    QLineEdit *check_chemistry_line;
    QLabel *check_Chinese_label;
    QLineEdit *check_physics_line;
    QLabel *check_sum_label;
    QLabel *check_chemistry_label;
    QLineEdit *check_math_line;
    QLineEdit *check_Chinese_line;
    QLineEdit *check_sum_line;
    QPushButton *btn_check_confirm;
    QPushButton *btn_check_return;
    QLabel *check_title;
    QLabel *check_score_title;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *check_score)
    {
        if (check_score->objectName().isEmpty())
            check_score->setObjectName(QString::fromUtf8("check_score"));
        check_score->resize(800, 600);
        check_score->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(check_score);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        check_student_id = new QLineEdit(centralwidget);
        check_student_id->setObjectName(QString::fromUtf8("check_student_id"));
        check_student_id->setGeometry(QRect(150, 210, 201, 41));
        check_student_id->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 255);\n"
"border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 10pt \"\345\256\213\344\275\223\";\n"
"color: rgb(103, 103, 103);"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(450, 140, 209, 381));
        widget->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 0,0);"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        check_math_label = new QLabel(widget);
        check_math_label->setObjectName(QString::fromUtf8("check_math_label"));
        check_math_label->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\256\213\344\275\223\";"));

        gridLayout->addWidget(check_math_label, 1, 0, 1, 1);

        check_physics_label = new QLabel(widget);
        check_physics_label->setObjectName(QString::fromUtf8("check_physics_label"));
        check_physics_label->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\256\213\344\275\223\";"));

        gridLayout->addWidget(check_physics_label, 3, 0, 1, 1);

        check_biology_label = new QLabel(widget);
        check_biology_label->setObjectName(QString::fromUtf8("check_biology_label"));
        check_biology_label->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\256\213\344\275\223\";"));

        gridLayout->addWidget(check_biology_label, 5, 0, 1, 1);

        check_English_line = new QLineEdit(widget);
        check_English_line->setObjectName(QString::fromUtf8("check_English_line"));
        check_English_line->setStyleSheet(QString::fromUtf8("border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;"));

        gridLayout->addWidget(check_English_line, 2, 1, 1, 2);

        check_English_label = new QLabel(widget);
        check_English_label->setObjectName(QString::fromUtf8("check_English_label"));
        check_English_label->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\256\213\344\275\223\";"));

        gridLayout->addWidget(check_English_label, 2, 0, 1, 1);

        check_biology_line = new QLineEdit(widget);
        check_biology_line->setObjectName(QString::fromUtf8("check_biology_line"));
        check_biology_line->setStyleSheet(QString::fromUtf8("border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;"));

        gridLayout->addWidget(check_biology_line, 5, 1, 1, 2);

        check_chemistry_line = new QLineEdit(widget);
        check_chemistry_line->setObjectName(QString::fromUtf8("check_chemistry_line"));
        check_chemistry_line->setStyleSheet(QString::fromUtf8("border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;"));

        gridLayout->addWidget(check_chemistry_line, 4, 1, 1, 2);

        check_Chinese_label = new QLabel(widget);
        check_Chinese_label->setObjectName(QString::fromUtf8("check_Chinese_label"));
        check_Chinese_label->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\256\213\344\275\223\";"));

        gridLayout->addWidget(check_Chinese_label, 0, 0, 1, 1);

        check_physics_line = new QLineEdit(widget);
        check_physics_line->setObjectName(QString::fromUtf8("check_physics_line"));
        check_physics_line->setStyleSheet(QString::fromUtf8("border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;"));

        gridLayout->addWidget(check_physics_line, 3, 1, 1, 2);

        check_sum_label = new QLabel(widget);
        check_sum_label->setObjectName(QString::fromUtf8("check_sum_label"));
        check_sum_label->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\256\213\344\275\223\";"));

        gridLayout->addWidget(check_sum_label, 6, 0, 1, 2);

        check_chemistry_label = new QLabel(widget);
        check_chemistry_label->setObjectName(QString::fromUtf8("check_chemistry_label"));
        check_chemistry_label->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\256\213\344\275\223\";"));

        gridLayout->addWidget(check_chemistry_label, 4, 0, 1, 1);

        check_math_line = new QLineEdit(widget);
        check_math_line->setObjectName(QString::fromUtf8("check_math_line"));
        check_math_line->setStyleSheet(QString::fromUtf8("border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;"));

        gridLayout->addWidget(check_math_line, 1, 1, 1, 2);

        check_Chinese_line = new QLineEdit(widget);
        check_Chinese_line->setObjectName(QString::fromUtf8("check_Chinese_line"));
        check_Chinese_line->setStyleSheet(QString::fromUtf8("border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;"));

        gridLayout->addWidget(check_Chinese_line, 0, 1, 1, 2);

        check_sum_line = new QLineEdit(widget);
        check_sum_line->setObjectName(QString::fromUtf8("check_sum_line"));
        check_sum_line->setStyleSheet(QString::fromUtf8("border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;"));

        gridLayout->addWidget(check_sum_line, 6, 2, 1, 1);

        btn_check_confirm = new QPushButton(centralwidget);
        btn_check_confirm->setObjectName(QString::fromUtf8("btn_check_confirm"));
        btn_check_confirm->setGeometry(QRect(270, 340, 101, 41));
        btn_check_confirm->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\256\213\344\275\223\";\n"
"background-color: rgb(218, 205, 255);"));
        btn_check_return = new QPushButton(centralwidget);
        btn_check_return->setObjectName(QString::fromUtf8("btn_check_return"));
        btn_check_return->setGeometry(QRect(130, 340, 101, 41));
        btn_check_return->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\256\213\344\275\223\";\n"
"background-color: rgb(204, 204, 191);"));
        check_title = new QLabel(centralwidget);
        check_title->setObjectName(QString::fromUtf8("check_title"));
        check_title->setGeometry(QRect(340, 40, 141, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(20);
        check_title->setFont(font);
        check_score_title = new QLabel(centralwidget);
        check_score_title->setObjectName(QString::fromUtf8("check_score_title"));
        check_score_title->setGeometry(QRect(450, 110, 181, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(16);
        check_score_title->setFont(font1);
        check_score->setCentralWidget(centralwidget);
        menubar = new QMenuBar(check_score);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        check_score->setMenuBar(menubar);
        statusbar = new QStatusBar(check_score);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        check_score->setStatusBar(statusbar);

        retranslateUi(check_score);

        QMetaObject::connectSlotsByName(check_score);
    } // setupUi

    void retranslateUi(QMainWindow *check_score)
    {
        check_score->setWindowTitle(QCoreApplication::translate("check_score", "MainWindow", nullptr));
        check_student_id->setText(QString());
        check_student_id->setPlaceholderText(QCoreApplication::translate("check_score", "Places input student id", nullptr));
        check_math_label->setText(QCoreApplication::translate("check_score", "\346\225\260\345\255\246\357\274\232", nullptr));
        check_physics_label->setText(QCoreApplication::translate("check_score", "\347\211\251\347\220\206\357\274\232", nullptr));
        check_biology_label->setText(QCoreApplication::translate("check_score", "\347\224\237\347\211\251\357\274\232", nullptr));
        check_English_label->setText(QCoreApplication::translate("check_score", "\350\213\261\350\257\255\357\274\232", nullptr));
        check_Chinese_label->setText(QCoreApplication::translate("check_score", "<html><head/><body><p><span style=\" font-size:16pt;\">\350\257\255\346\226\207\357\274\232</span></p></body></html>", nullptr));
        check_sum_label->setText(QCoreApplication::translate("check_score", "\346\200\273\345\210\206\357\274\232", nullptr));
        check_chemistry_label->setText(QCoreApplication::translate("check_score", "\345\214\226\345\255\246\357\274\232", nullptr));
        btn_check_confirm->setText(QCoreApplication::translate("check_score", "\347\241\256\350\256\244\346\237\245\350\257\242", nullptr));
        btn_check_return->setText(QCoreApplication::translate("check_score", "\350\277\224\345\233\236", nullptr));
        check_title->setText(QCoreApplication::translate("check_score", "\346\237\245\350\257\242\346\210\220\347\273\251", nullptr));
        check_score_title->setText(QCoreApplication::translate("check_score", "\350\257\245\345\255\246\347\224\237\347\232\204\346\210\220\347\273\251\344\270\272\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class check_score: public Ui_check_score {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECK_SCORE_H
