#include "choice_window.h"
#include "ui_choice_window.h"
#include"score_distribution.h"
choice_window::choice_window(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::choice_window)
{
    ui->setupUi(this);
}

choice_window::~choice_window()
{
    delete ui;
}

void choice_window::on_pushButton_6_clicked()
{
    score_distribution* s=new score_distribution("Chinese",db);
    s->show();
}


void choice_window::on_Math_clicked()
{
    score_distribution* s=new score_distribution("Math",db);
    s->show();
}


void choice_window::on_English_clicked()
{
    score_distribution* s=new score_distribution("English",db);
    s->show();
}


void choice_window::on_Physics_clicked()
{
    score_distribution* s=new score_distribution("Physics",db);
    s->show();
}


void choice_window::on_Chemestry_clicked()
{
    score_distribution* s=new score_distribution("Chemestry",db);
    s->show();
}


void choice_window::on_Biology_clicked()
{
    score_distribution* s=new score_distribution("Biology",db);
    s->show();
}


void choice_window::on_SUM_clicked()
{
    score_distribution* s=new score_distribution("SUM",db);
    s->show();
}

