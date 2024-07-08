/********************************************************************************
** Form generated from reading UI file 'revise_score.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REVISE_SCORE_H
#define UI_REVISE_SCORE_H

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

class Ui_revise_score
{
public:
    QWidget *centralwidget;
    QPushButton *btn_revise_return;
    QLineEdit *revise_num;
    QLabel *revise_score_title;
    QLineEdit *revise_name;
    QPushButton *btn_revise_confirm;
    QWidget *widget;
    QFormLayout *formLayout_4;
    QLineEdit *revise_Chinese_line;
    QSpacerItem *verticalSpacer;
    QLabel *revise_math_label;
    QLineEdit *revise_math_line;
    QSpacerItem *verticalSpacer_2;
    QLabel *revise_English_label;
    QLineEdit *revise_English_line;
    QSpacerItem *verticalSpacer_3;
    QLabel *revise_physics_label;
    QLineEdit *revise_physics_line;
    QSpacerItem *verticalSpacer_4;
    QLabel *revise_chemistry_label;
    QLineEdit *revise_chemistry_line;
    QSpacerItem *verticalSpacer_5;
    QLabel *revise_biology_label;
    QLineEdit *revise_biology_line;
    QLabel *revise_Chinese_label;
    QLabel *revise_title;
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
        btn_revise_return->setGeometry(QRect(280, 460, 91, 41));
        btn_revise_return->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\256\213\344\275\223\";\n"
"background-color: rgb(204, 204, 191);"));
        revise_num = new QLineEdit(centralwidget);
        revise_num->setObjectName(QString::fromUtf8("revise_num"));
        revise_num->setGeometry(QRect(140, 260, 201, 41));
        revise_num->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 255);\n"
"border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 10pt \"\345\256\213\344\275\223\";\n"
"color: rgb(103, 103, 103);"));
        revise_score_title = new QLabel(centralwidget);
        revise_score_title->setObjectName(QString::fromUtf8("revise_score_title"));
        revise_score_title->setGeometry(QRect(430, 110, 271, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font.setPointSize(16);
        revise_score_title->setFont(font);
        revise_name = new QLineEdit(centralwidget);
        revise_name->setObjectName(QString::fromUtf8("revise_name"));
        revise_name->setGeometry(QRect(140, 180, 201, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        revise_name->setFont(font1);
        revise_name->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 255);\n"
"border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 10pt \"\345\256\213\344\275\223\";\n"
"color: rgb(103, 103, 103);"));
        btn_revise_confirm = new QPushButton(centralwidget);
        btn_revise_confirm->setObjectName(QString::fromUtf8("btn_revise_confirm"));
        btn_revise_confirm->setGeometry(QRect(420, 460, 91, 41));
        btn_revise_confirm->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\256\213\344\275\223\";\n"
"background-color: rgb(218, 205, 255);"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(430, 160, 231, 271));
        widget->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 0,0);"));
        formLayout_4 = new QFormLayout(widget);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        revise_Chinese_line = new QLineEdit(widget);
        revise_Chinese_line->setObjectName(QString::fromUtf8("revise_Chinese_line"));
        revise_Chinese_line->setStyleSheet(QString::fromUtf8("border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, revise_Chinese_line);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_4->setItem(1, QFormLayout::FieldRole, verticalSpacer);

        revise_math_label = new QLabel(widget);
        revise_math_label->setObjectName(QString::fromUtf8("revise_math_label"));
        revise_math_label->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\256\213\344\275\223\";"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, revise_math_label);

        revise_math_line = new QLineEdit(widget);
        revise_math_line->setObjectName(QString::fromUtf8("revise_math_line"));
        revise_math_line->setStyleSheet(QString::fromUtf8("border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;"));

        formLayout_4->setWidget(2, QFormLayout::FieldRole, revise_math_line);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_4->setItem(3, QFormLayout::FieldRole, verticalSpacer_2);

        revise_English_label = new QLabel(widget);
        revise_English_label->setObjectName(QString::fromUtf8("revise_English_label"));
        revise_English_label->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\256\213\344\275\223\";"));

        formLayout_4->setWidget(4, QFormLayout::LabelRole, revise_English_label);

        revise_English_line = new QLineEdit(widget);
        revise_English_line->setObjectName(QString::fromUtf8("revise_English_line"));
        revise_English_line->setStyleSheet(QString::fromUtf8("border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;"));

        formLayout_4->setWidget(4, QFormLayout::FieldRole, revise_English_line);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_4->setItem(5, QFormLayout::FieldRole, verticalSpacer_3);

        revise_physics_label = new QLabel(widget);
        revise_physics_label->setObjectName(QString::fromUtf8("revise_physics_label"));
        revise_physics_label->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\256\213\344\275\223\";"));

        formLayout_4->setWidget(6, QFormLayout::LabelRole, revise_physics_label);

        revise_physics_line = new QLineEdit(widget);
        revise_physics_line->setObjectName(QString::fromUtf8("revise_physics_line"));
        revise_physics_line->setStyleSheet(QString::fromUtf8("border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;"));

        formLayout_4->setWidget(6, QFormLayout::FieldRole, revise_physics_line);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_4->setItem(7, QFormLayout::FieldRole, verticalSpacer_4);

        revise_chemistry_label = new QLabel(widget);
        revise_chemistry_label->setObjectName(QString::fromUtf8("revise_chemistry_label"));
        revise_chemistry_label->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\256\213\344\275\223\";"));

        formLayout_4->setWidget(8, QFormLayout::LabelRole, revise_chemistry_label);

        revise_chemistry_line = new QLineEdit(widget);
        revise_chemistry_line->setObjectName(QString::fromUtf8("revise_chemistry_line"));
        revise_chemistry_line->setStyleSheet(QString::fromUtf8("border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;"));

        formLayout_4->setWidget(8, QFormLayout::FieldRole, revise_chemistry_line);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_4->setItem(9, QFormLayout::FieldRole, verticalSpacer_5);

        revise_biology_label = new QLabel(widget);
        revise_biology_label->setObjectName(QString::fromUtf8("revise_biology_label"));
        revise_biology_label->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\256\213\344\275\223\";"));

        formLayout_4->setWidget(10, QFormLayout::LabelRole, revise_biology_label);

        revise_biology_line = new QLineEdit(widget);
        revise_biology_line->setObjectName(QString::fromUtf8("revise_biology_line"));
        revise_biology_line->setStyleSheet(QString::fromUtf8("border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;"));

        formLayout_4->setWidget(10, QFormLayout::FieldRole, revise_biology_line);

        revise_Chinese_label = new QLabel(widget);
        revise_Chinese_label->setObjectName(QString::fromUtf8("revise_Chinese_label"));
        revise_Chinese_label->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\256\213\344\275\223\";"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, revise_Chinese_label);

        revise_title = new QLabel(centralwidget);
        revise_title->setObjectName(QString::fromUtf8("revise_title"));
        revise_title->setGeometry(QRect(340, 40, 141, 61));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font2.setPointSize(20);
        revise_title->setFont(font2);
        revise_score->setCentralWidget(centralwidget);
        menubar = new QMenuBar(revise_score);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
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
        revise_num->setText(QString());
        revise_num->setPlaceholderText(QCoreApplication::translate("revise_score", "\350\257\267\350\276\223\345\205\245\350\246\201\344\277\256\346\224\271\347\232\204\345\255\246\347\224\237\345\255\246\345\217\267", nullptr));
        revise_score_title->setText(QCoreApplication::translate("revise_score", "\350\257\267\350\276\223\345\205\245\350\257\245\345\255\246\347\224\237\344\277\256\346\224\271\345\220\216\347\232\204\346\210\220\347\273\251\357\274\232", nullptr));
        revise_name->setText(QString());
        revise_name->setPlaceholderText(QCoreApplication::translate("revise_score", "\350\257\267\350\276\223\345\205\245\350\246\201\344\277\256\346\224\271\347\232\204\345\255\246\347\224\237\345\247\223\345\220\215", nullptr));
        btn_revise_confirm->setText(QCoreApplication::translate("revise_score", "\347\241\256\350\256\244\344\277\256\346\224\271", nullptr));
        revise_math_label->setText(QCoreApplication::translate("revise_score", "\346\225\260\345\255\246\357\274\232", nullptr));
        revise_English_label->setText(QCoreApplication::translate("revise_score", "\350\213\261\350\257\255\357\274\232", nullptr));
        revise_physics_label->setText(QCoreApplication::translate("revise_score", "\347\211\251\347\220\206\357\274\232", nullptr));
        revise_chemistry_label->setText(QCoreApplication::translate("revise_score", "\345\214\226\345\255\246\357\274\232", nullptr));
        revise_biology_label->setText(QCoreApplication::translate("revise_score", "\347\224\237\347\211\251\357\274\232", nullptr));
        revise_Chinese_label->setText(QCoreApplication::translate("revise_score", "<html><head/><body><p><span style=\" font-size:16pt;\">\350\257\255\346\226\207\357\274\232</span></p></body></html>", nullptr));
        revise_title->setText(QCoreApplication::translate("revise_score", "\344\277\256\346\224\271\346\210\220\347\273\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class revise_score: public Ui_revise_score {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REVISE_SCORE_H
