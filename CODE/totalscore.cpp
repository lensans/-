#include "totalscore.h"
#include "ui_totalscore.h"
#include"score_distribution.h"
//一分一段表

totalscore::totalscore(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::totalscore)
{
    ui->setupUi(this);

    connect(ui->btn_check_all_return,&QPushButton::clicked,this,&totalscore::close);//退出
}

void totalscore::on_Chinese_clicked()
{
    score_distribution* s=new score_distribution("Chinese",db,QString::number(10));
    s->show();
    this->close();
}


void totalscore::on_Math_clicked()
{
    score_distribution* s=new score_distribution("Math",db,QString::number(10));
    s->show();
    this->close();
}


void totalscore::on_English_clicked()
{
    score_distribution* s=new score_distribution("English",db,QString::number(10));
    s->show();
    this->close();
}


void totalscore::on_Physics_clicked()
{
    score_distribution* s=new score_distribution("Physics",db,QString::number(10));
    s->show();
    this->close();
}


void totalscore::on_Chemestry_clicked()
{
    score_distribution* s=new score_distribution("Chemestry",db,QString::number(10));
    s->show();
    this->close();
}


void totalscore::on_Biology_clicked()
{
    score_distribution* s=new score_distribution("Biology",db,QString::number(10));
    s->show();
    this->close();
}


void totalscore::on_SUM_clicked()
{
    score_distribution* s=new score_distribution("SUM",db,QString::number(10));
    s->show();
    this->close();
}


totalscore::~totalscore()
{
    delete ui;
}
