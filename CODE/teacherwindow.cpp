#include "teacherwindow.h"
#include "ui_teacherwindow.h"

#include "check_score.h"
#include "change_password.h"
#include "total_score.h"
#include "subject_relation.h"
#include "single_score.h"
#include"choice_window.h"

TeacherWindow::TeacherWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TeacherWindow)
{
    ui->setupUi(this);

    connect(ui->btn_teacher_check,&QPushButton::clicked,this,&TeacherWindow::on_btn_teacher_check_clicked);//跳入查询成绩界面

    connect(ui->btn_teacher_revise_password,&QPushButton::clicked,this,&TeacherWindow::on_btn_teacher_revise_password_clicked);//跳入重置密码界面

    connect(ui->btn_teacher_total_score,&QPushButton::clicked,this,&TeacherWindow::on_btn_teacher_total_clicked);//跳入显示一分一段表界面

    connect(ui->btn_teacher_subject_relation,&QPushButton::clicked,this,&TeacherWindow::on_btn_teacher_subject_clicked);//跳入显示学科间线性关系界面

    connect(ui->btn_teacher_single_score,&QPushButton::clicked,this,&TeacherWindow::on_btn_teacher_single_clicked);//跳入展示单科成绩直方图界面

    connect(ui->btn_teacher_return,&QPushButton::clicked,this,&TeacherWindow::close);//退出

}

void TeacherWindow::on_btn_teacher_check_clicked()//跳入查询成绩界面
{
    check_score *ch_te = new check_score(this);
    ch_te->show();
}

void TeacherWindow::on_btn_teacher_revise_password_clicked()//重置密码
{
    change_password *ch_te = new change_password(this);
    ch_te->show();
}

void TeacherWindow::on_btn_teacher_total_clicked()//跳入显示一分一段表界面
{
    choice_window *to_te = new choice_window();
    to_te->show();
}

void TeacherWindow::on_btn_teacher_subject_clicked()//跳入显示学科间线性关系界面
{
    Subject_relation *su_te = new Subject_relation(this);
    su_te->show();
}

void TeacherWindow::on_btn_teacher_single_clicked()//跳入展示单科成绩直方图界面
{
    Single_score *si_te = new Single_score(this);
    si_te->show();
}

TeacherWindow::~TeacherWindow()
{
    delete ui;
}
