#include "subject_relation.h"
#include "ui_subject_relation.h"
#include<QtCharts>
#include"Relationship.h"
#include <mysql_connect.h>
#include"teacherwindow.h"
Subject_relation::Subject_relation(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Subject_relation)
{
    ui->setupUi(this);
   DB db;
    int i = 1;
    QString s = QString::number(i);
    int j=1000;
    QString s2=QString::number(j);
    QString subject1="CME";
    QString subject2="PCB";
    vector<int>cmescore;
    vector<int>pcbscore;
    db.get_students_scores(s,s2,subject1,cmescore);
    db.get_students_scores(s,s2,subject2,pcbscore);
    Relationship A(cmescore,pcbscore);
    ui->graphicsView->setChart(A.getrelationshipmap());
    ui->mainlineEdit->setText(A.getrelationship());
}

Subject_relation::~Subject_relation()
{
    delete ui;
}

void Subject_relation::on_pushButton_clicked()
{
    this->close();
    //TeacherWindow* father=new TeacherWindow();
    //father->show();
}
