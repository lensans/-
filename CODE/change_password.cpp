#include "change_password.h"
#include "ui_change_password.h"
#include <mysql_connect.h>

change_password::change_password(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::change_password)
{
    ui->setupUi(this);

    connect(ui->change_password_return,&QPushButton::clicked,this,&change_password::close);//点击返回，关闭修改密码界面

    connect(ui->change_password_confirm,&QPushButton::clicked,this,&change_password::on_change_password_confirm_clicked);//点击确认，修改密码
}

void change_password::on_change_password_confirm_clicked()//修改密码
{
    //从文本框读取姓名和新密码
    QString username = ui->change_password_id->text();
    QString new_password = ui->change_password_new->text();

    DB db;
    int res = db.revise_password(username,new_password);
    if(res == 1)//修改成功
    {
        this->close();
    }
}

change_password::~change_password()
{
    delete ui;
}
