#include "input_single_score.h"
#include "ui_input_single_score.h"
#include "mysql_connect.h"

Input_single_score::Input_single_score(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Input_single_score)
{
    ui->setupUi(this);

    setFixedSize(800,600);

    connect(ui->input_single_return,&QPushButton::clicked,this,&Input_single_score::close);//单个录入时点击返回，关闭录入成绩界面

    connect(ui->input_single_confirm,&QPushButton::clicked,this,&Input_single_score::on_input_single_confirm_clicked);//单个录入时点击确认录入

}

void Input_single_score::on_input_single_confirm_clicked()//单个录入成绩
{
    //从文本框读入要录入的学生姓名和id
    QString student_name = ui->input_name_line->text();
    QString student_id = ui->input_num_line->text();

    VP subject_scores(7);

    //从文本框读入要录入的学科和对应成绩
    subject_scores[0].first = ui->input_Chinese->text();
    subject_scores[0].second = ui->input_Chinese_line->text().toInt();
    subject_scores[1].first = ui->input_math->text();
    subject_scores[1].second = ui->input_math_line->text().toInt();
    subject_scores[2].first = ui->input_English->text();
    subject_scores[2].second = ui->input_English_line->text().toInt();
    subject_scores[3].first = ui->input_physics->text();
    subject_scores[3].second = ui->input_physics_line->text().toInt();
    subject_scores[4].first = ui->input_chemistry->text();
    subject_scores[4].second = ui->input_chemistry_line->text().toInt();
    subject_scores[5].first = ui->input_biology->text();
    subject_scores[5].second = ui->input_biology_line->text().toInt();
    subject_scores[6].first = ui->input_sum->text();
    subject_scores[6].second = ui->input_sum_line->text().toInt();

    DB db;
    db.add_score(student_id, student_name, subject_scores);

}

Input_single_score::~Input_single_score()
{
    delete ui;
}
