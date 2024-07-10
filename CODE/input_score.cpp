#include "input_score.h"
#include "ui_input_score.h"
#include "managerwindow.h"
#include "mysql_connect.h"



Input_score::Input_score(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Input_score)
{
    ui->setupUi(this);

    //connect(ui->input_single_return,&QPushButton::clicked,this,&Input_score::on_btn_single_return_clicked);//点击返回按钮，跳入菜单界面
    connect(ui->input_single_return,&QPushButton::clicked,this,&Input_score::close);//并且关闭录入成绩界面

    //connect(ui->input_excel_return,&QPushButton::clicked,this,&Input_score::on_btn_excel_return_clicked);//点击返回按钮，跳入菜单界面
    connect(ui->input_excel_return,&QPushButton::clicked,this,&Input_score::close);//并且关闭录入成绩界面

    connect(ui->input_single_confirm,&QPushButton::clicked,this,&Input_score::on_input_single_confirm_clicked);
}

void Input_score::on_btn_single_return_clicked()
{
    managerwindow *ma_in_on1 = new managerwindow(this);
    ma_in_on1->show();
}

void Input_score::on_btn_excel_return_clicked()
{
    managerwindow *ma_in_on2 = new managerwindow(this);
    ma_in_on2->show();
}

void Input_score::on_input_single_confirm_clicked()
{
    //Init();
    QString student_name = ui->input_name_line->text();
    QString student_id = ui->input_num_line->text();

    VP subject_scores(7);

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

Input_score::~Input_score()
{
    delete ui;
}
