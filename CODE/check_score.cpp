#include "check_score.h"
#include "ui_check_score.h"
#include "managerwindow.h"

check_score::check_score(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::check_score)
{
    ui->setupUi(this);

    connect(ui->btn_check_return,&QPushButton::clicked,this,&check_score::on_btn_check_return_clicked);//点击返回按钮，跳入菜单界面
    connect(ui->btn_check_return,&QPushButton::clicked,this,&check_score::close);//并且关闭录入成绩界面
}

void check_score::on_btn_check_return_clicked()
{
    managerwindow *ma_ch_on = new managerwindow(this);
    ma_ch_on->show();
}

check_score::~check_score()
{
    delete ui;
}
