#include "managerwindow.h"
#include "ui_managerwindow.h"
#include "inputwindow.h"
#include "revise_score.h"
#include "check_score.h"
#include "delete_score.h"
#include "change_password.h"
#include "total_score.h"
#include "subject_relation.h"
#include "single_score.h"
#include <QPushButton>

managerwindow::managerwindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::managerwindow)

{
    ui->setupUi(this);
    connect(ui->btn_manager_input,&QPushButton::clicked,this,&managerwindow::on_btn_manager_input_clicked);//点击录入成绩按钮，跳入录入成绩界面

    connect(ui->btn_manager_revise_score,&QPushButton::clicked,this,&managerwindow::on_btn_manager_revise_clicked);//跳入修改成绩界面

    connect(ui->btn_manager_check,&QPushButton::clicked,this,&managerwindow::on_btn_manager_check_clicked);//跳入查询成绩界面

    connect(ui->btn_manager_delete,&QPushButton::clicked,this,&managerwindow::on_btn_manager_delete_clicked);//跳入删除学生成绩界面

    connect(ui->btn_manager_revise_password,&QPushButton::clicked,this,&managerwindow::on_btn_manager_revise_password_clicked);//跳入重置密码界面

    connect(ui->btn_manager_total_score,&QPushButton::clicked,this,&managerwindow::on_btn_manager_total_score_clicked);//跳入显示一分一段表界面

    connect(ui->btn_manager_subject_relation,&QPushButton::clicked,this,&managerwindow::on_btn_manager_subject_clicked);//跳入显示学科间线性关系界面

    connect(ui->btn_manager_single_score,&QPushButton::clicked,this,&managerwindow::on_btn_manager_single_clicked);//跳入展示单科成绩直方图界面

    connect(ui->btn_manager_return,&QPushButton::clicked,this,&managerwindow::close);//退出
}

void managerwindow::on_btn_manager_input_clicked()//点击录入成绩按钮，跳入录入成绩界面
{
    InputWindow *in_ma = new InputWindow(this);
    in_ma->show();
}

void managerwindow::on_btn_manager_revise_clicked()//跳入修改成绩界面
{
    revise_score *re_ma = new revise_score(this);
    re_ma->show();
}

void managerwindow::on_btn_manager_check_clicked()//跳入查询成绩界面
{
    check_score *ch_ma = new check_score(this);
    ch_ma->show();
}

void managerwindow::on_btn_manager_delete_clicked()//删除成绩
{
    Delete_score *de_ma = new Delete_score(this);
    de_ma->show();
}

void managerwindow::on_btn_manager_revise_password_clicked()//重置密码
{
    change_password *ch_ma = new change_password(this);
    ch_ma->show();
}

void managerwindow::on_btn_manager_total_score_clicked()//跳入显示一分一段表界面
{
    totalscore *to = new totalscore("0");
    to->show();
}
void managerwindow::on_btn_manager_subject_clicked()//跳入显示学科间线性关系界面
{
    Subject_relation *su_ma = new Subject_relation(this);
    su_ma->show();
}

void managerwindow::on_btn_manager_single_clicked()//跳入展示单科成绩直方图界面
{
    Single_score *si_ma = new Single_score(this);
    si_ma->show();
}

managerwindow::~managerwindow()
{
    delete ui;
}
