#include "total_score.h"
#include "ui_total_score.h"

//总分及排名

total_score::total_score(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::total_score)
{
    ui->setupUi(this);
}

total_score::~total_score()
{
    delete ui;
}
