#include "cmepaints.h"
#include "ui_cmepaints.h"
#include"paint.h"
#include"single_score.h"
#include"mysql_connect.h"
#include"single_score.h"
CMEpaints::CMEpaints(QString subject,QWidget *parent)
    : QWidget(parent),subject(subject)
    , ui(new Ui::CMEpaints)
{
    ui->setupUi(this);
     DB db;
    vector<int>score;
     int i = 1;
     QString s = QString::number(i);
     int j=1000;
     QString s2=QString::number(j);
     db.get_students_scores(s,s2,subject,score);
     Paint a(score,subject);
     QChartView *chartView;
     chartView=new QChartView(a.createBarChart1());
     ui->verticalLayout->insertWidget(0,chartView);
}

CMEpaints::~CMEpaints()
{
    delete ui;
}

void CMEpaints::on_pushButton_clicked()
{   this->close();
    Single_score*pic=new Single_score();
    pic->show();
}

