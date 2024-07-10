/********************************************************************************
** Form generated from reading UI file 'managerwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGERWINDOW_H
#define UI_MANAGERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_managerwindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *btn_input;
    QPushButton *btn_check;
    QPushButton *btn_revise;
    QPushButton *btn_total_score;
    QPushButton *btn_subject;
    QPushButton *btn_show_score;
    QLabel *interface_1;

    void setupUi(QMainWindow *managerwindow)
    {
        if (managerwindow->objectName().isEmpty())
            managerwindow->setObjectName(QString::fromUtf8("managerwindow"));
        managerwindow->resize(800, 600);
        managerwindow->setMinimumSize(QSize(800, 0));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\346\226\260\351\255\217")});
        font.setPointSize(20);
        managerwindow->setFont(font);
        managerwindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(managerwindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(270, 120, 271, 431));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        btn_input = new QPushButton(widget);
        btn_input->setObjectName(QString::fromUtf8("btn_input"));
        btn_input->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 219, 255);\n"
"color: rgb(0,0,0);\n"
"\n"
"border:0px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 16pt \"Candara\";\n"
"\n"
""));
        btn_input->setIconSize(QSize(30, 30));

        verticalLayout->addWidget(btn_input);

        btn_check = new QPushButton(widget);
        btn_check->setObjectName(QString::fromUtf8("btn_check"));
        btn_check->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 219, 255);\n"
"color: rgb(0,0,0);\n"
"\n"
"border:0px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 16pt \"Candara\";\n"
""));

        verticalLayout->addWidget(btn_check);

        btn_revise = new QPushButton(widget);
        btn_revise->setObjectName(QString::fromUtf8("btn_revise"));
        btn_revise->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 219, 255);\n"
"color: rgb(0,0,0);\n"
"\n"
"border:0px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 16pt \"Candara\";\n"
""));

        verticalLayout->addWidget(btn_revise);

        btn_total_score = new QPushButton(widget);
        btn_total_score->setObjectName(QString::fromUtf8("btn_total_score"));
        btn_total_score->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 219, 255);\n"
"color: rgb(0,0,0);\n"
"\n"
"border:0px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 16pt \"Candara\";\n"
""));

        verticalLayout->addWidget(btn_total_score);

        btn_subject = new QPushButton(widget);
        btn_subject->setObjectName(QString::fromUtf8("btn_subject"));
        btn_subject->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 219, 255);\n"
"color: rgb(0,0,0);\n"
"\n"
"border:0px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 16pt \"Candara\";\n"
""));

        verticalLayout->addWidget(btn_subject);

        btn_show_score = new QPushButton(widget);
        btn_show_score->setObjectName(QString::fromUtf8("btn_show_score"));
        btn_show_score->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 219, 255);\n"
"color: rgb(0,0,0);\n"
"\n"
"border:0px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 16pt \"Candara\";\n"
""));

        verticalLayout->addWidget(btn_show_score);

        interface_1 = new QLabel(centralwidget);
        interface_1->setObjectName(QString::fromUtf8("interface_1"));
        interface_1->setGeometry(QRect(190, 60, 481, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font1.setPointSize(20);
        interface_1->setFont(font1);
        managerwindow->setCentralWidget(centralwidget);

        retranslateUi(managerwindow);

        QMetaObject::connectSlotsByName(managerwindow);
    } // setupUi

    void retranslateUi(QMainWindow *managerwindow)
    {
        managerwindow->setWindowTitle(QCoreApplication::translate("managerwindow", "MainWindow", nullptr));
        btn_input->setText(QCoreApplication::translate("managerwindow", "\345\275\225\345\205\245\346\210\220\347\273\251", nullptr));
        btn_check->setText(QCoreApplication::translate("managerwindow", "\346\237\245\350\257\242\346\210\220\347\273\251", nullptr));
        btn_revise->setText(QCoreApplication::translate("managerwindow", "\344\277\256\346\224\271\346\210\220\347\273\251", nullptr));
        btn_total_score->setText(QCoreApplication::translate("managerwindow", "\346\237\245\350\257\242\346\200\273\345\210\206\346\216\222\345\220\215", nullptr));
        btn_subject->setText(QCoreApplication::translate("managerwindow", "\350\257\255\346\225\260\345\244\226\345\222\214\347\220\206\345\214\226\347\224\237\345\205\263\347\263\273", nullptr));
        btn_show_score->setText(QCoreApplication::translate("managerwindow", "\345\261\225\347\244\272\345\215\225\347\247\221\346\210\220\347\273\251\347\233\264\346\226\271\345\233\276", nullptr));
        interface_1->setText(QCoreApplication::translate("managerwindow", "\346\254\242\350\277\216\344\275\277\347\224\250\351\253\230\350\200\203\346\210\220\347\273\251\347\256\241\347\220\206\347\263\273\347\273\237\347\256\241\347\220\206\345\221\230\347\253\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class managerwindow: public Ui_managerwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGERWINDOW_H
