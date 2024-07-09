#include "input_score.h"
#include "ui_input_score.h"
#include "managerwindow.h"
#include <mysql_connect.h>

Input_score::Input_score(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Input_score)
{
    ui->setupUi(this);

    connect(ui->input_single_return,&QPushButton::clicked,this,&Input_score::on_btn_single_return_clicked);//点击返回按钮，跳入菜单界面
    connect(ui->input_single_return,&QPushButton::clicked,this,&Input_score::close);//并且关闭录入成绩界面

    connect(ui->input_excel_return,&QPushButton::clicked,this,&Input_score::on_btn_excel_return_clicked);//点击返回按钮，跳入菜单界面
    connect(ui->input_excel_return,&QPushButton::clicked,this,&Input_score::close);//并且关闭录入成绩界面

    connect(ui->input_single_confirm,&QPushButton::clicked,this,&Input_score::on_input_single_confirm_clicked);
}

void Input_score::on_btn_single_return_clicked()
{
    managerwindow *ma_in_on1 = new managerwindow(this);
    ma_in_on1->show();
}

void Input_score::on_btn_excel_return_clicked()
{
    managerwindow *ma_in_on2 = new managerwindow(this);
    ma_in_on2->show();
}

void Input_score::on_input_single_confirm_clicked()
{
    QString student_id = ui->input_num_line->text();
    QString student_name = ui->input_name_line->text();
    add_score(QSqlDatabase db, int student_id, QString student_name, VP subject_scores)；
}

Input_score::~Input_score()
{
    delete ui;
}
