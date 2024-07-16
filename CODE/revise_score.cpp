#include "revise_score.h"
#include "ui_revise_score.h"
#include <mysql_connect.h>

revise_score::revise_score(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::revise_score)
{
    ui->setupUi(this);

    setFixedSize(800,600);

    connect(ui->btn_revise_return,&QPushButton::clicked,this,&revise_score::close);//点击返回，关闭修改成绩界面

    connect(ui->btn_revise_confirm,&QPushButton::clicked,this,&revise_score::on_btn_revise_confirm_clicked);//点击确认修改
}

void revise_score::on_btn_revise_confirm_clicked()//修改单科成绩
{
    //从文本框读入要修改的学生id，科目和对应成绩
    QString subjects[6]{"Chinese","Math","English","Physics","Chemestry","Biology"}; bool invalid=1;
    QString student_id = ui->revise_student_id->text();
    QString subject = ui->revise_subject->text();
    for(QString target:subjects){
        if (target==subject){
            invalid=0;
        }
    }
    int new_score = ui->revise_new_score->text().toInt();
    if(new_score>150||subject=="SUM"||invalid){
        QMessageBox::critical(this,"错误","输入不合法");
    }
    else{
        DB db;
        db.update_score(student_id, subject, new_score);
        this->close();
    }
}

revise_score::~revise_score()
{
    delete ui;
}
