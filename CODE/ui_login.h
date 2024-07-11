/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.2.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *centralwidget;
    QLabel *label_image;
    QLabel *label;
    QLabel *login_welcome;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QPushButton *btn_signin;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(780, 520);
        login->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 255);\n"
"\n"
""));
        centralwidget = new QWidget(login);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_image = new QLabel(centralwidget);
        label_image->setObjectName(QString::fromUtf8("label_image"));
        label_image->setGeometry(QRect(390, 0, 391, 521));
        label_image->setCursor(QCursor(Qt::IBeamCursor));
        label_image->setStyleSheet(QString::fromUtf8("border-radius:7px;padding:0px 0px;"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 10, 151, 31));
        label->setStyleSheet(QString::fromUtf8("color: rgb(41, 155, 255);\n"
"font: 10pt \"Arial\";"));
        login_welcome = new QLabel(centralwidget);
        login_welcome->setObjectName(QString::fromUtf8("login_welcome"));
        login_welcome->setGeometry(QRect(40, 70, 331, 51));
        login_welcome->setStyleSheet(QString::fromUtf8("font: 87 20pt \"Arial Black\";"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 150, 291, 151));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_username = new QLineEdit(layoutWidget);
        lineEdit_username->setObjectName(QString::fromUtf8("lineEdit_username"));
        lineEdit_username->setMinimumSize(QSize(0, 45));
        lineEdit_username->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 255);\n"
"border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 10pt \"Candara\";"));

        verticalLayout->addWidget(lineEdit_username);

        lineEdit_password = new QLineEdit(layoutWidget);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setMinimumSize(QSize(0, 45));
        lineEdit_password->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 255);\n"
"border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 10pt \"Candara\";"));
        lineEdit_password->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(lineEdit_password);

        btn_signin = new QPushButton(centralwidget);
        btn_signin->setObjectName(QString::fromUtf8("btn_signin"));
        btn_signin->setGeometry(QRect(130, 360, 131, 41));
        btn_signin->setMinimumSize(QSize(50, 40));
        btn_signin->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.52, y1:1, x2:0.54, y2:0, \n"
"stop:0.0112994 rgba(75, 84, 252, 255), \n"
"stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(255, 255, 255);\n"
"\n"
"border:0px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 14pt \"Candara\";"));
        login->setCentralWidget(centralwidget);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "MainWindow", nullptr));
        label_image->setText(QString());
        label->setText(QString());
        login_welcome->setText(QCoreApplication::translate("login", "\346\254\242\350\277\216\347\231\273\345\275\225\351\253\230\350\200\203\346\210\220\347\273\251\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        lineEdit_username->setPlaceholderText(QCoreApplication::translate("login", "Places input your name", nullptr));
        lineEdit_password->setPlaceholderText(QCoreApplication::translate("login", "Please input your password", nullptr));
        btn_signin->setText(QCoreApplication::translate("login", "\347\241\256\350\256\244\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
