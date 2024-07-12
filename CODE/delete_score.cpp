#include "delete_score.h"
#include "ui_delete_score.h"
#include <mysql_connect.h>

Delete_score::Delete_score(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Delete_score)
{
    ui->setupUi(this);

    connect(ui->btn_delete_return,&QPushButton::clicked,this,&Delete_score::close);//点击返回,关闭删除学生成绩界面

    connect(ui->btn_delete_confirm,&QPushButton::clicked,this,&Delete_score::on_btn_delete_confirm_clicked);//点击确定删除
}

void Delete_score::on_btn_delete_confirm_clicked()//点击确认删除
{
    //从文本框读入要查询的学生id
    QString student_id = ui->delete_student_id->text();

    DB db;
    db.delete_student(student_id);//删除学生成绩
}

Delete_score::~Delete_score()
{
    delete ui;
}
