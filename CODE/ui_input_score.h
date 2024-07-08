/********************************************************************************
** Form generated from reading UI file 'input_score.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUT_SCORE_H
#define UI_INPUT_SCORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Input_score
{
public:
    QWidget *centralwidget;
    QFormLayout *formLayout;
    QTabWidget *input_tab;
    QWidget *single_input;
    QWidget *widget;
    QFormLayout *formLayout_4;
    QLabel *input_Chinese_label;
    QLineEdit *input_Chinese_line;
    QSpacerItem *verticalSpacer;
    QLabel *input_math_label;
    QLineEdit *input_math_line;
    QSpacerItem *verticalSpacer_2;
    QLabel *input_English_label;
    QLineEdit *input_English_line;
    QSpacerItem *verticalSpacer_3;
    QLabel *input_physics_label;
    QLineEdit *input_physics_line;
    QSpacerItem *verticalSpacer_4;
    QLabel *input_chemistry_label;
    QLineEdit *input_chemistry_line;
    QSpacerItem *verticalSpacer_5;
    QLabel *input_biology_label;
    QLineEdit *input_biology_line;
    QWidget *widget_2;
    QFormLayout *formLayout_3;
    QLineEdit *input_name_line;
    QLabel *input_name_label;
    QLineEdit *input_num_line;
    QLabel *input_num_label;
    QSpacerItem *verticalSpacer_6;
    QPushButton *input_single_confirm;
    QPushButton *input_single_return;
    QLabel *revise_title_2;
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
        formLayout = new QFormLayout(centralwidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        input_tab = new QTabWidget(centralwidget);
        input_tab->setObjectName(QString::fromUtf8("input_tab"));
        input_tab->setMinimumSize(QSize(782, 539));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
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
        widget->setGeometry(QRect(390, 100, 251, 281));
        widget->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 0,0);"));
        formLayout_4 = new QFormLayout(widget);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        input_Chinese_label = new QLabel(widget);
        input_Chinese_label->setObjectName(QString::fromUtf8("input_Chinese_label"));
        input_Chinese_label->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\256\213\344\275\223\";"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, input_Chinese_label);

        input_Chinese_line = new QLineEdit(widget);
        input_Chinese_line->setObjectName(QString::fromUtf8("input_Chinese_line"));
        input_Chinese_line->setStyleSheet(QString::fromUtf8("border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, input_Chinese_line);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_4->setItem(1, QFormLayout::FieldRole, verticalSpacer);

        input_math_label = new QLabel(widget);
        input_math_label->setObjectName(QString::fromUtf8("input_math_label"));
        input_math_label->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\256\213\344\275\223\";"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, input_math_label);

        input_math_line = new QLineEdit(widget);
        input_math_line->setObjectName(QString::fromUtf8("input_math_line"));
        input_math_line->setStyleSheet(QString::fromUtf8("border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;"));

        formLayout_4->setWidget(2, QFormLayout::FieldRole, input_math_line);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_4->setItem(3, QFormLayout::FieldRole, verticalSpacer_2);

        input_English_label = new QLabel(widget);
        input_English_label->setObjectName(QString::fromUtf8("input_English_label"));
        input_English_label->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\256\213\344\275\223\";"));

        formLayout_4->setWidget(4, QFormLayout::LabelRole, input_English_label);

        input_English_line = new QLineEdit(widget);
        input_English_line->setObjectName(QString::fromUtf8("input_English_line"));
        input_English_line->setStyleSheet(QString::fromUtf8("border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;"));

        formLayout_4->setWidget(4, QFormLayout::FieldRole, input_English_line);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_4->setItem(5, QFormLayout::FieldRole, verticalSpacer_3);

        input_physics_label = new QLabel(widget);
        input_physics_label->setObjectName(QString::fromUtf8("input_physics_label"));
        input_physics_label->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\256\213\344\275\223\";"));

        formLayout_4->setWidget(6, QFormLayout::LabelRole, input_physics_label);

        input_physics_line = new QLineEdit(widget);
        input_physics_line->setObjectName(QString::fromUtf8("input_physics_line"));
        input_physics_line->setStyleSheet(QString::fromUtf8("border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;"));

        formLayout_4->setWidget(6, QFormLayout::FieldRole, input_physics_line);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_4->setItem(7, QFormLayout::FieldRole, verticalSpacer_4);

        input_chemistry_label = new QLabel(widget);
        input_chemistry_label->setObjectName(QString::fromUtf8("input_chemistry_label"));
        input_chemistry_label->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\256\213\344\275\223\";"));

        formLayout_4->setWidget(8, QFormLayout::LabelRole, input_chemistry_label);

        input_chemistry_line = new QLineEdit(widget);
        input_chemistry_line->setObjectName(QString::fromUtf8("input_chemistry_line"));
        input_chemistry_line->setStyleSheet(QString::fromUtf8("border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;"));

        formLayout_4->setWidget(8, QFormLayout::FieldRole, input_chemistry_line);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_4->setItem(9, QFormLayout::FieldRole, verticalSpacer_5);

        input_biology_label = new QLabel(widget);
        input_biology_label->setObjectName(QString::fromUtf8("input_biology_label"));
        input_biology_label->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\256\213\344\275\223\";"));

        formLayout_4->setWidget(10, QFormLayout::LabelRole, input_biology_label);

        input_biology_line = new QLineEdit(widget);
        input_biology_line->setObjectName(QString::fromUtf8("input_biology_line"));
        input_biology_line->setStyleSheet(QString::fromUtf8("border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;"));

        formLayout_4->setWidget(10, QFormLayout::FieldRole, input_biology_line);

        widget_2 = new QWidget(single_input);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(80, 110, 251, 101));
        widget_2->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 0, 0);"));
        formLayout_3 = new QFormLayout(widget_2);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        input_name_line = new QLineEdit(widget_2);
        input_name_line->setObjectName(QString::fromUtf8("input_name_line"));
        input_name_line->setStyleSheet(QString::fromUtf8("border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, input_name_line);

        input_name_label = new QLabel(widget_2);
        input_name_label->setObjectName(QString::fromUtf8("input_name_label"));
        input_name_label->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\256\213\344\275\223\";"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, input_name_label);

        input_num_line = new QLineEdit(widget_2);
        input_num_line->setObjectName(QString::fromUtf8("input_num_line"));
        input_num_line->setStyleSheet(QString::fromUtf8("border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;"));

        formLayout_3->setWidget(4, QFormLayout::FieldRole, input_num_line);

        input_num_label = new QLabel(widget_2);
        input_num_label->setObjectName(QString::fromUtf8("input_num_label"));
        input_num_label->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\256\213\344\275\223\";"));
        input_num_label->setAlignment(Qt::AlignCenter);

        formLayout_3->setWidget(4, QFormLayout::LabelRole, input_num_label);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_3->setItem(3, QFormLayout::FieldRole, verticalSpacer_6);

        input_single_confirm = new QPushButton(single_input);
        input_single_confirm->setObjectName(QString::fromUtf8("input_single_confirm"));
        input_single_confirm->setGeometry(QRect(390, 420, 111, 41));
        input_single_confirm->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\256\213\344\275\223\";\n"
"background-color: rgb(218, 205, 255);"));
        input_single_return = new QPushButton(single_input);
        input_single_return->setObjectName(QString::fromUtf8("input_single_return"));
        input_single_return->setGeometry(QRect(230, 420, 111, 41));
        input_single_return->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\256\213\344\275\223\";\n"
"background-color: rgb(204, 204, 191);"));
        revise_title_2 = new QLabel(single_input);
        revise_title_2->setObjectName(QString::fromUtf8("revise_title_2"));
        revise_title_2->setGeometry(QRect(320, 10, 141, 61));
        revise_title_2->setFont(font);
        input_tab->addTab(single_input, QString());
        widget->raise();
        input_single_confirm->raise();
        input_single_return->raise();
        widget_2->raise();
        revise_title_2->raise();
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

        formLayout->setWidget(0, QFormLayout::FieldRole, input_tab);

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
        input_Chinese_label->setText(QCoreApplication::translate("Input_score", "<html><head/><body><p><span style=\" font-size:16pt;\">\350\257\255\346\226\207\357\274\232</span></p></body></html>", nullptr));
        input_math_label->setText(QCoreApplication::translate("Input_score", "\346\225\260\345\255\246\357\274\232", nullptr));
        input_English_label->setText(QCoreApplication::translate("Input_score", "\350\213\261\350\257\255\357\274\232", nullptr));
        input_physics_label->setText(QCoreApplication::translate("Input_score", "\347\211\251\347\220\206\357\274\232", nullptr));
        input_chemistry_label->setText(QCoreApplication::translate("Input_score", "\345\214\226\345\255\246\357\274\232", nullptr));
        input_biology_label->setText(QCoreApplication::translate("Input_score", "\347\224\237\347\211\251\357\274\232", nullptr));
        input_name_label->setText(QCoreApplication::translate("Input_score", "<html><head/><body><p><span style=\" font-size:16pt;\">\345\247\223\345\220\215\357\274\232</span></p></body></html>", nullptr));
        input_num_label->setText(QCoreApplication::translate("Input_score", "<html><head/><body><p><span style=\" font-size:16pt;\">\345\255\246\345\217\267\357\274\232</span></p></body></html>", nullptr));
        input_single_confirm->setText(QCoreApplication::translate("Input_score", "\347\241\256\345\256\232\345\257\274\345\205\245", nullptr));
        input_single_return->setText(QCoreApplication::translate("Input_score", "\350\277\224\345\233\236", nullptr));
        revise_title_2->setText(QCoreApplication::translate("Input_score", "\345\275\225\345\205\245\346\210\220\347\273\251", nullptr));
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
