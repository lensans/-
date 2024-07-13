#include "single_score.h"
#include "ui_single_score.h"
#include"cmepaints.h"
#include"pcbpaints.h"
Single_score::Single_score(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Single_score)
{
    ui->setupUi(this);
}

Single_score::~Single_score()
{
    delete ui;
}

void Single_score::on_pushButton_clicked()
{
    this->close();
    QString subject="Chinese";
    CMEpaints*pic=new CMEpaints(subject);
    pic->show();
}


void Single_score::on_pushButton_2_clicked()
{
    this->close();
    QString subject="Math";
    CMEpaints*pic=new CMEpaints(subject);
    pic->show();
}


void Single_score::on_pushButton_3_clicked()
{
    this->close();
    QString subject="English";
    CMEpaints*pic=new CMEpaints(subject);
    pic->show();
}

void Single_score::on_pushButton_4_clicked()
{
    this->close();
    QString subject="Physics";
    PCBpaints*pic=new PCBpaints(subject);
    pic->show();
}


void Single_score::on_pushButton_5_clicked()
{
    this->close();
    QString subject="Chemestry";
    PCBpaints*pic=new PCBpaints(subject);
    pic->show();
}



void Single_score::on_pushButton_6_clicked()
{
    this->close();
    QString subject="Biology";
    PCBpaints*pic=new PCBpaints(subject);
    pic->show();
}

