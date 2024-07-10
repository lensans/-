/********************************************************************************
** Form generated from reading UI file 'check_score.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECK_SCORE_H
#define UI_CHECK_SCORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_check_score
{
public:
    QWidget *centralwidget;
    QLineEdit *check_name;
    QLineEdit *check_num;
    QWidget *widget;
    QFormLayout *formLayout_4;
    QLineEdit *check_Chinese_line;
    QSpacerItem *verticalSpacer;
    QLabel *check_math_label;
    QLineEdit *check_math_line;
    QSpacerItem *verticalSpacer_2;
    QLabel *check_English_label;
    QLineEdit *check_English_line;
    QSpacerItem *verticalSpacer_3;
    QLabel *check_physics_label;
    QLineEdit *check_physics_line;
    QSpacerItem *verticalSpacer_4;
    QLabel *check_chemistry_label;
    QLineEdit *check_chemistry_line;
    QSpacerItem *verticalSpacer_5;
    QLabel *check_biology_label;
    QLineEdit *check_biology_line;
    QLabel *check_Chinese_label;
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
        check_name = new QLineEdit(centralwidget);
        check_name->setObjectName(QString::fromUtf8("check_name"));
        check_name->setGeometry(QRect(120, 190, 201, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        check_name->setFont(font);
        check_name->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 255);\n"
"border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 10pt \"\345\256\213\344\275\223\";\n"
"color: rgb(103, 103, 103);"));
        check_num = new QLineEdit(centralwidget);
        check_num->setObjectName(QString::fromUtf8("check_num"));
        check_num->setGeometry(QRect(120, 260, 201, 41));
        check_num->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 255);\n"
"border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 10pt \"\345\256\213\344\275\223\";\n"
"color: rgb(103, 103, 103);"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(420, 200, 231, 291));
        widget->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 0,0);"));
        formLayout_4 = new QFormLayout(widget);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        check_Chinese_line = new QLineEdit(widget);
        check_Chinese_line->setObjectName(QString::fromUtf8("check_Chinese_line"));
        check_Chinese_line->setStyleSheet(QString::fromUtf8("border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, check_Chinese_line);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_4->setItem(1, QFormLayout::FieldRole, verticalSpacer);

        check_math_label = new QLabel(widget);
        check_math_label->setObjectName(QString::fromUtf8("check_math_label"));
        check_math_label->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\256\213\344\275\223\";"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, check_math_label);

        check_math_line = new QLineEdit(widget);
        check_math_line->setObjectName(QString::fromUtf8("check_math_line"));
        check_math_line->setStyleSheet(QString::fromUtf8("border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;"));

        formLayout_4->setWidget(2, QFormLayout::FieldRole, check_math_line);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_4->setItem(3, QFormLayout::FieldRole, verticalSpacer_2);

        check_English_label = new QLabel(widget);
        check_English_label->setObjectName(QString::fromUtf8("check_English_label"));
        check_English_label->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\256\213\344\275\223\";"));

        formLayout_4->setWidget(4, QFormLayout::LabelRole, check_English_label);

        check_English_line = new QLineEdit(widget);
        check_English_line->setObjectName(QString::fromUtf8("check_English_line"));
        check_English_line->setStyleSheet(QString::fromUtf8("border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;"));

        formLayout_4->setWidget(4, QFormLayout::FieldRole, check_English_line);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_4->setItem(5, QFormLayout::FieldRole, verticalSpacer_3);

        check_physics_label = new QLabel(widget);
        check_physics_label->setObjectName(QString::fromUtf8("check_physics_label"));
        check_physics_label->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\256\213\344\275\223\";"));

        formLayout_4->setWidget(6, QFormLayout::LabelRole, check_physics_label);

        check_physics_line = new QLineEdit(widget);
        check_physics_line->setObjectName(QString::fromUtf8("check_physics_line"));
        check_physics_line->setStyleSheet(QString::fromUtf8("border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;"));

        formLayout_4->setWidget(6, QFormLayout::FieldRole, check_physics_line);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_4->setItem(7, QFormLayout::FieldRole, verticalSpacer_4);

        check_chemistry_label = new QLabel(widget);
        check_chemistry_label->setObjectName(QString::fromUtf8("check_chemistry_label"));
        check_chemistry_label->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\256\213\344\275\223\";"));

        formLayout_4->setWidget(8, QFormLayout::LabelRole, check_chemistry_label);

        check_chemistry_line = new QLineEdit(widget);
        check_chemistry_line->setObjectName(QString::fromUtf8("check_chemistry_line"));
        check_chemistry_line->setStyleSheet(QString::fromUtf8("border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;"));

        formLayout_4->setWidget(8, QFormLayout::FieldRole, check_chemistry_line);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_4->setItem(9, QFormLayout::FieldRole, verticalSpacer_5);

        check_biology_label = new QLabel(widget);
        check_biology_label->setObjectName(QString::fromUtf8("check_biology_label"));
        check_biology_label->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\256\213\344\275\223\";"));

        formLayout_4->setWidget(10, QFormLayout::LabelRole, check_biology_label);

        check_biology_line = new QLineEdit(widget);
        check_biology_line->setObjectName(QString::fromUtf8("check_biology_line"));
        check_biology_line->setStyleSheet(QString::fromUtf8("border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;"));

        formLayout_4->setWidget(10, QFormLayout::FieldRole, check_biology_line);

        check_Chinese_label = new QLabel(widget);
        check_Chinese_label->setObjectName(QString::fromUtf8("check_Chinese_label"));
        check_Chinese_label->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\256\213\344\275\223\";"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, check_Chinese_label);

        btn_check_confirm = new QPushButton(centralwidget);
        btn_check_confirm->setObjectName(QString::fromUtf8("btn_check_confirm"));
        btn_check_confirm->setGeometry(QRect(250, 380, 91, 41));
        btn_check_confirm->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\256\213\344\275\223\";\n"
"background-color: rgb(218, 205, 255);"));
        btn_check_return = new QPushButton(centralwidget);
        btn_check_return->setObjectName(QString::fromUtf8("btn_check_return"));
        btn_check_return->setGeometry(QRect(110, 380, 91, 41));
        btn_check_return->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\256\213\344\275\223\";\n"
"background-color: rgb(204, 204, 191);"));
        check_title = new QLabel(centralwidget);
        check_title->setObjectName(QString::fromUtf8("check_title"));
        check_title->setGeometry(QRect(340, 60, 141, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font1.setPointSize(20);
        check_title->setFont(font1);
        check_score_title = new QLabel(centralwidget);
        check_score_title->setObjectName(QString::fromUtf8("check_score_title"));
        check_score_title->setGeometry(QRect(430, 140, 181, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font2.setPointSize(16);
        check_score_title->setFont(font2);
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
        check_name->setText(QString());
        check_name->setPlaceholderText(QCoreApplication::translate("check_score", "\350\257\267\350\276\223\345\205\245\350\246\201\346\237\245\350\257\242\347\232\204\345\255\246\347\224\237\345\247\223\345\220\215", nullptr));
        check_num->setText(QString());
        check_num->setPlaceholderText(QCoreApplication::translate("check_score", "\350\257\267\350\276\223\345\205\245\350\246\201\346\237\245\350\257\242\347\232\204\345\255\246\347\224\237\345\255\246\345\217\267", nullptr));
        check_math_label->setText(QCoreApplication::translate("check_score", "\346\225\260\345\255\246\357\274\232", nullptr));
        check_English_label->setText(QCoreApplication::translate("check_score", "\350\213\261\350\257\255\357\274\232", nullptr));
        check_physics_label->setText(QCoreApplication::translate("check_score", "\347\211\251\347\220\206\357\274\232", nullptr));
        check_chemistry_label->setText(QCoreApplication::translate("check_score", "\345\214\226\345\255\246\357\274\232", nullptr));
        check_biology_label->setText(QCoreApplication::translate("check_score", "\347\224\237\347\211\251\357\274\232", nullptr));
        check_Chinese_label->setText(QCoreApplication::translate("check_score", "<html><head/><body><p><span style=\" font-size:16pt;\">\350\257\255\346\226\207\357\274\232</span></p></body></html>", nullptr));
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
