#include "stu_change_password.h"
#include "ui_stu_change_password.h"
#include "mysql_connect.h"
#include<QMessageBox>
stu_change_password::stu_change_password(student s,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::stu_change_password)
{
    stu=s;
    ui->setupUi(this);

    connect(ui->change_password_return,&QPushButton::clicked,this,&stu_change_password::close);//点击返回，关闭修改密码界面
}

stu_change_password::~stu_change_password()
{
    delete ui;
}

void stu_change_password::on_change_password_confirm_2_clicked()
{
    QString np=ui->change_password_new->text();
    DB db;
    int res=db.revise_password(stu.student_id,np);
    if(res){
        QMessageBox::information(nullptr,"恭喜","您已成功修改密码");
        this->close();
    }
}

