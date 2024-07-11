#include "check_score.h"
#include "ui_check_score.h"
#include <mysql_connect.h>


check_score::check_score(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::check_score)
{
    ui->setupUi(this);

    connect(ui->btn_check_return,&QPushButton::clicked,this,&check_score::close);//点击返回,关闭查询成绩界面

    connect(ui->btn_check_confirm,&QPushButton::clicked,this,&check_score::on_btn_check_confirm_clicked);//点击确定查询
}

void check_score::on_btn_check_confirm_clicked()//查询全部成绩
{
    //从文本框读入要查询的学生id
    QString student_id = ui->check_student_id->text().toInt();
    VP subject_scores(7);

    DB db;
    db.get_all_score(student_id,subject_scores);

    //显示成绩
    QString Chinese = QString("%1").arg(subject_scores[0].second);//将int型的分数强转为QString，赋给LineEdit的文本
    ui->check_Chinese_line->setText(Chinese);
    QString Math = QString("%1").arg(subject_scores[1].second);
    ui->check_math_line->setText(Math);
    QString English = QString("%1").arg(subject_scores[2].second);
    ui->check_English_line->setText(English);
    QString Physics = QString("%1").arg(subject_scores[3].second);
    ui->check_physics_line->setText(Physics);
    QString Chemistry = QString("%1").arg(subject_scores[4].second);
    ui->check_chemistry_line->setText(Chemistry);
    QString Biology = QString("%1").arg(subject_scores[5].second);
    ui->check_biology_line->setText(Biology);
    QString Sum = QString("%1").arg(subject_scores[6].second);
    ui->check_sum_line->setText(Sum);
}

check_score::~check_score()
{
    delete ui;
}
