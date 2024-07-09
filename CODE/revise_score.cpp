#include "revise_score.h"
#include "ui_revise_score.h"
#include "managerwindow.h"

revise_score::revise_score(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::revise_score)
{
    ui->setupUi(this);

    connect(ui->btn_revise_return,&QPushButton::clicked,this,&revise_score::on_btn_revise_return_clicked);//点击返回按钮，跳入菜单界面
    connect(ui->btn_revise_return,&QPushButton::clicked,this,&revise_score::close);//并且关闭录入成绩界面

}

void revise_score::on_btn_revise_return_clicked()
{
    managerwindow *ma_re_on = new managerwindow(this);
    ma_re_on->show();
}

revise_score::~revise_score()
{
    delete ui;
}
