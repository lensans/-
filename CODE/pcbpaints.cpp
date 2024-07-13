#include "pcbpaints.h"
#include "ui_pcbpaints.h"
#include"paint.h"
#include"mysql_connect.h"
#include"single_score.h"
PCBpaints::PCBpaints(QString subject,QWidget *parent)
    : QWidget(parent),subject(subject)
    , ui(new Ui::PCBpaints)
{
    ui->setupUi(this);
    DB db;
    std::vector<int>score;
    int i = 1;
    QString s = QString::number(i);
    int j=1000;
    QString s2=QString::number(j);
    db.get_students_scores(s,s2,subject,score);
    Paint A(score,subject);
    ui->graphicsView->setChart(A.createBarChart2());
}

PCBpaints::~PCBpaints()
{
    delete ui;
}

void PCBpaints::on_pushButton_clicked()
{
    this->close();
    Single_score*pic=new Single_score();
    pic->show();
}

