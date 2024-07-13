#include "stu_change_password_.h"
#include "ui_stu_change_password_.h"
#include "mysql_connect.h"
#include<QMessageBox>

stu_change_password_::stu_change_password_(student s,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::stu_change_password_)
{
    stu=s;
    ui->setupUi(this);

    setFixedSize(800,600);

    connect(ui->change_password_return,&QPushButton::clicked,this,&stu_change_password_::close);//点击返回，关闭修改密码界面
    connect(ui->change_password_confirm,&QPushButton::clicked,this,&stu_change_password_::on_change_password_confirm_clicked);//点击确认修改
}

void stu_change_password_::on_change_password_confirm_clicked()
{
    QString np=ui->change_password_new->text();
    DB db;
    int res=db.revise_password(stu.student_id,np);
    if(res){
        QMessageBox::information(nullptr,"恭喜","您已成功修改密码");
        this->close();
    }
}

stu_change_password_::~stu_change_password_()
{
    delete ui;
}
