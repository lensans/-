#include "managerwindow.h"
#include "ui_managerwindow.h"
#include "input_score.h"
#include "revise_score.h"
#include "check_score.h"
#include <QPushButton>

managerwindow::managerwindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::managerwindow)

{
    ui->setupUi(this);
    connect(ui->btn_input,&QPushButton::clicked,this,&managerwindow::on_btn_input_clicked);//点击录入成绩按钮，跳入录入成绩界面
    //connect(ui->btn_input,&QPushButton::clicked,this,&managerwindow::close);//并且关闭菜单界面

    connect(ui->btn_revise,&QPushButton::clicked,this,&managerwindow::on_btn_revise_clicked);//跳入修改成绩界面
    //connect(ui->btn_revise,&QPushButton::clicked,this,&managerwindow::close);

    connect(ui->btn_check,&QPushButton::clicked,this,&managerwindow::on_btn_check_clicked);//跳入查询成绩界面
    //connect(ui->btn_check,&QPushButton::clicked,this,&managerwindow::close);
}

void managerwindow::on_btn_input_clicked()
{
    Input_score *in_on = new Input_score(this);
    in_on->show();
}

void managerwindow::on_btn_revise_clicked()
{
    revise_score *re_on = new revise_score(this);
    re_on->show();
}

void managerwindow::on_btn_check_clicked()
{
    check_score *ch_on = new check_score(this);
    ch_on->show();
}

managerwindow::~managerwindow()
{
    delete ui;
}
