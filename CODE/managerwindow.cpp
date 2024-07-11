#include "managerwindow.h"
#include "ui_managerwindow.h"
#include "input_score.h"
#include "revise_score.h"
#include "check_score.h"
#include "total_score.h"
#include "subject_relation.h"
#include "single_score.h"
#include <QPushButton>

managerwindow::managerwindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::managerwindow)

{
    ui->setupUi(this);
    connect(ui->btn_input,&QPushButton::clicked,this,&managerwindow::on_btn_input_clicked);//点击录入成绩按钮，跳入录入成绩界面

    connect(ui->btn_revise,&QPushButton::clicked,this,&managerwindow::on_btn_revise_clicked);//跳入修改成绩界面

    connect(ui->btn_check,&QPushButton::clicked,this,&managerwindow::on_btn_check_clicked);//跳入查询成绩界面

    connect(ui->btn_total_score,&QPushButton::clicked,this,&managerwindow::on_btn_total_clicked);//跳入显示总分界面

    connect(ui->btn_subject_relation,&QPushButton::clicked,this,&managerwindow::on_btn_subject_clicked);//跳入显示学科间线性关系界面

    connect(ui->btn_single_score,&QPushButton::clicked,this,&managerwindow::on_btn_single_clicked);//跳入展示单科成绩直方图界面
}

void managerwindow::on_btn_input_clicked()//点击录入成绩按钮，跳入录入成绩界面
{
    Input_score *in_on = new Input_score(this);
    in_on->show();
}

void managerwindow::on_btn_revise_clicked()//跳入修改成绩界面
{
    revise_score *re_on = new revise_score(this);
    re_on->show();
}

void managerwindow::on_btn_check_clicked()//跳入查询成绩界面
{
    check_score *ch_on = new check_score(this);
    ch_on->show();
}

void managerwindow::on_btn_total_clicked()//跳入显示总分界面
{
    total_score *to_on = new total_score(this);
    to_on->show();
}

void managerwindow::on_btn_subject_clicked()//跳入显示学科间线性关系界面
{
    Subject_relation *su_on = new Subject_relation(this);
    su_on->show();
}

void managerwindow::on_btn_single_clicked()//跳入展示单科成绩直方图界面
{
    Single_score *si_on = new Single_score(this);
    si_on->show();
}

managerwindow::~managerwindow()
{
    delete ui;
}
