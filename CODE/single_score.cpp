#include "single_score.h"
#include "ui_single_score.h"
#include"cmepaints.h"
#include"pcbpaints.h"
Single_score::Single_score(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Single_score)
{
    ui->setupUi(this);

    setFixedSize(800,600);

    connect(ui->input_single_return,&QPushButton::clicked,this,&Single_score::close);
}

Single_score::~Single_score()
{
    delete ui;
}

void Single_score::on_pushButton_clicked()
{
    QString subject="Chinese";
    CMEpaints*pic=new CMEpaints(subject);
    pic->show();
    this->close();
}


void Single_score::on_pushButton_2_clicked()
{

    QString subject="Math";
    CMEpaints*pic=new CMEpaints(subject);
    pic->show();
    this->close();
}


void Single_score::on_pushButton_3_clicked()
{

    QString subject="English";
    CMEpaints*pic=new CMEpaints(subject);
    pic->show();
    this->close();
}

void Single_score::on_pushButton_4_clicked()
{

    QString subject="Physics";
    PCBpaints*pic=new PCBpaints(subject);
    pic->show();
    this->close();
}


void Single_score::on_pushButton_5_clicked()
{

    QString subject="Chemestry";
    PCBpaints*pic=new PCBpaints(subject);
    pic->show();
    this->close();
}



void Single_score::on_pushButton_6_clicked()
{

    QString subject="Biology";
    PCBpaints*pic=new PCBpaints(subject);
    pic->show();
    this->close();
}

