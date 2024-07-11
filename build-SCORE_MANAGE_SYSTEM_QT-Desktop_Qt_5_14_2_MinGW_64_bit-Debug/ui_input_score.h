/********************************************************************************
** Form generated from reading UI file 'input_score.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUT_SCORE_H
#define UI_INPUT_SCORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Input_score
{
public:
    QWidget *centralwidget;
    QTabWidget *input_tab;
    QWidget *single_input;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLineEdit *input_Chinese;
    QLineEdit *input_Chinese_line;
    QLineEdit *input_math;
    QLineEdit *input_math_line;
    QLineEdit *input_English;
    QLineEdit *input_English_line;
    QLineEdit *input_physics;
    QLineEdit *input_physics_line;
    QLineEdit *input_chemistry;
    QLineEdit *input_chemistry_line;
    QLineEdit *input_biology;
    QLineEdit *input_biology_line;
    QLineEdit *input_sum;
    QLineEdit *input_sum_line;
    QPushButton *input_single_confirm;
    QPushButton *input_single_return;
    QLabel *revise_title_2;
    QLineEdit *input_name_line;
    QLineEdit *input_num_line;
    QWidget *excel_input;
    QPushButton *input_excel_confirm;
    QPushButton *input_excel_return;
    QLabel *revise_title;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Input_score)
    {
        if (Input_score->objectName().isEmpty())
            Input_score->setObjectName(QString::fromUtf8("Input_score"));
        Input_score->resize(806, 600);
        Input_score->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(Input_score);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        input_tab = new QTabWidget(centralwidget);
        input_tab->setObjectName(QString::fromUtf8("input_tab"));
        input_tab->setGeometry(QRect(9, 9, 782, 539));
        input_tab->setMinimumSize(QSize(782, 539));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(20);
        input_tab->setFont(font);
        input_tab->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(252, 253, 255);"));
        input_tab->setTabShape(QTabWidget::Rounded);
        input_tab->setIconSize(QSize(13, 13));
        single_input = new QWidget();
        single_input->setObjectName(QString::fromUtf8("single_input"));
        widget = new QWidget(single_input);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(380, 60, 291, 361));
        widget->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 0,0);"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        input_Chinese = new QLineEdit(widget);
        input_Chinese->setObjectName(QString::fromUtf8("input_Chinese"));
        input_Chinese->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\256\213\344\275\223\";"));

        gridLayout->addWidget(input_Chinese, 0, 0, 1, 1);

        input_Chinese_line = new QLineEdit(widget);
        input_Chinese_line->setObjectName(QString::fromUtf8("input_Chinese_line"));
        input_Chinese_line->setStyleSheet(QString::fromUtf8("border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;"));

        gridLayout->addWidget(input_Chinese_line, 0, 1, 1, 1);

        input_math = new QLineEdit(widget);
        input_math->setObjectName(QString::fromUtf8("input_math"));
        input_math->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\256\213\344\275\223\";"));

        gridLayout->addWidget(input_math, 1, 0, 1, 1);

        input_math_line = new QLineEdit(widget);
        input_math_line->setObjectName(QString::fromUtf8("input_math_line"));
        input_math_line->setStyleSheet(QString::fromUtf8("border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;"));

        gridLayout->addWidget(input_math_line, 1, 1, 1, 1);

        input_English = new QLineEdit(widget);
        input_English->setObjectName(QString::fromUtf8("input_English"));
        input_English->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\256\213\344\275\223\";"));

        gridLayout->addWidget(input_English, 2, 0, 1, 1);

        input_English_line = new QLineEdit(widget);
        input_English_line->setObjectName(QString::fromUtf8("input_English_line"));
        input_English_line->setStyleSheet(QString::fromUtf8("border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;"));

        gridLayout->addWidget(input_English_line, 2, 1, 1, 1);

        input_physics = new QLineEdit(widget);
        input_physics->setObjectName(QString::fromUtf8("input_physics"));
        input_physics->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\256\213\344\275\223\";"));

        gridLayout->addWidget(input_physics, 3, 0, 1, 1);

        input_physics_line = new QLineEdit(widget);
        input_physics_line->setObjectName(QString::fromUtf8("input_physics_line"));
        input_physics_line->setStyleSheet(QString::fromUtf8("border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;"));

        gridLayout->addWidget(input_physics_line, 3, 1, 1, 1);

        input_chemistry = new QLineEdit(widget);
        input_chemistry->setObjectName(QString::fromUtf8("input_chemistry"));
        input_chemistry->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\256\213\344\275\223\";"));

        gridLayout->addWidget(input_chemistry, 4, 0, 1, 1);

        input_chemistry_line = new QLineEdit(widget);
        input_chemistry_line->setObjectName(QString::fromUtf8("input_chemistry_line"));
        input_chemistry_line->setStyleSheet(QString::fromUtf8("border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;"));

        gridLayout->addWidget(input_chemistry_line, 4, 1, 1, 1);

        input_biology = new QLineEdit(widget);
        input_biology->setObjectName(QString::fromUtf8("input_biology"));
        input_biology->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\256\213\344\275\223\";"));

        gridLayout->addWidget(input_biology, 5, 0, 1, 1);

        input_biology_line = new QLineEdit(widget);
        input_biology_line->setObjectName(QString::fromUtf8("input_biology_line"));
        input_biology_line->setStyleSheet(QString::fromUtf8("border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;"));

        gridLayout->addWidget(input_biology_line, 5, 1, 1, 1);

        input_sum = new QLineEdit(widget);
        input_sum->setObjectName(QString::fromUtf8("input_sum"));
        input_sum->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\256\213\344\275\223\";"));

        gridLayout->addWidget(input_sum, 6, 0, 1, 1);

        input_sum_line = new QLineEdit(widget);
        input_sum_line->setObjectName(QString::fromUtf8("input_sum_line"));
        input_sum_line->setStyleSheet(QString::fromUtf8("border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;"));

        gridLayout->addWidget(input_sum_line, 6, 1, 1, 1);

        input_single_confirm = new QPushButton(single_input);
        input_single_confirm->setObjectName(QString::fromUtf8("input_single_confirm"));
        input_single_confirm->setGeometry(QRect(390, 430, 111, 41));
        input_single_confirm->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\256\213\344\275\223\";\n"
"background-color: rgb(218, 205, 255);"));
        input_single_return = new QPushButton(single_input);
        input_single_return->setObjectName(QString::fromUtf8("input_single_return"));
        input_single_return->setGeometry(QRect(230, 430, 111, 41));
        input_single_return->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\256\213\344\275\223\";\n"
"background-color: rgb(204, 204, 191);"));
        revise_title_2 = new QLabel(single_input);
        revise_title_2->setObjectName(QString::fromUtf8("revise_title_2"));
        revise_title_2->setGeometry(QRect(320, 10, 141, 61));
        revise_title_2->setFont(font);
        input_name_line = new QLineEdit(single_input);
        input_name_line->setObjectName(QString::fromUtf8("input_name_line"));
        input_name_line->setGeometry(QRect(130, 110, 171, 41));
        input_name_line->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 255);\n"
"border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 10pt \"\345\256\213\344\275\223\";\n"
"color: rgb(103, 103, 103);"));
        input_num_line = new QLineEdit(single_input);
        input_num_line->setObjectName(QString::fromUtf8("input_num_line"));
        input_num_line->setGeometry(QRect(130, 180, 171, 41));
        input_num_line->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 255);\n"
"border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 10pt \"\345\256\213\344\275\223\";\n"
"color: rgb(103, 103, 103);"));
        input_tab->addTab(single_input, QString());
        excel_input = new QWidget();
        excel_input->setObjectName(QString::fromUtf8("excel_input"));
        input_excel_confirm = new QPushButton(excel_input);
        input_excel_confirm->setObjectName(QString::fromUtf8("input_excel_confirm"));
        input_excel_confirm->setGeometry(QRect(380, 300, 111, 41));
        input_excel_confirm->setStyleSheet(QString::fromUtf8("background-color: rgb(218, 205, 255);\n"
"font: 16pt \"\345\256\213\344\275\223\";"));
        input_excel_return = new QPushButton(excel_input);
        input_excel_return->setObjectName(QString::fromUtf8("input_excel_return"));
        input_excel_return->setGeometry(QRect(220, 300, 111, 41));
        input_excel_return->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\256\213\344\275\223\";\n"
"background-color: rgb(204, 204, 191);"));
        revise_title = new QLabel(excel_input);
        revise_title->setObjectName(QString::fromUtf8("revise_title"));
        revise_title->setGeometry(QRect(320, 10, 141, 61));
        revise_title->setFont(font);
        input_tab->addTab(excel_input, QString());
        Input_score->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Input_score);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Input_score->setStatusBar(statusbar);

        retranslateUi(Input_score);

        input_tab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Input_score);
    } // setupUi

    void retranslateUi(QMainWindow *Input_score)
    {
        Input_score->setWindowTitle(QCoreApplication::translate("Input_score", "MainWindow", nullptr));
        input_Chinese->setText(QCoreApplication::translate("Input_score", "Chinese", nullptr));
        input_math->setText(QCoreApplication::translate("Input_score", "Math", nullptr));
        input_English->setText(QCoreApplication::translate("Input_score", "English", nullptr));
        input_physics->setText(QCoreApplication::translate("Input_score", "Physics", nullptr));
        input_chemistry->setText(QCoreApplication::translate("Input_score", "Chemestriy", nullptr));
        input_biology->setText(QCoreApplication::translate("Input_score", "Biology", nullptr));
        input_sum->setText(QCoreApplication::translate("Input_score", "Sum", nullptr));
        input_single_confirm->setText(QCoreApplication::translate("Input_score", "\347\241\256\345\256\232\345\257\274\345\205\245", nullptr));
        input_single_return->setText(QCoreApplication::translate("Input_score", "\350\277\224\345\233\236", nullptr));
        revise_title_2->setText(QCoreApplication::translate("Input_score", "\345\275\225\345\205\245\346\210\220\347\273\251", nullptr));
        input_name_line->setPlaceholderText(QCoreApplication::translate("Input_score", "Places input your name", nullptr));
        input_num_line->setPlaceholderText(QCoreApplication::translate("Input_score", "Places input your id", nullptr));
        input_tab->setTabText(input_tab->indexOf(single_input), QCoreApplication::translate("Input_score", "\345\215\225\344\270\252\345\275\225\345\205\245", nullptr));
        input_excel_confirm->setText(QCoreApplication::translate("Input_score", "\347\241\256\350\256\244\345\257\274\345\205\245", nullptr));
        input_excel_return->setText(QCoreApplication::translate("Input_score", "\350\277\224\345\233\236", nullptr));
        revise_title->setText(QCoreApplication::translate("Input_score", "\345\275\225\345\205\245\346\210\220\347\273\251", nullptr));
        input_tab->setTabText(input_tab->indexOf(excel_input), QCoreApplication::translate("Input_score", "EXCEL\345\257\274\345\205\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Input_score: public Ui_Input_score {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUT_SCORE_H
