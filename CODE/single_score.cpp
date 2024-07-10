#include "single_score.h"
#include "ui_single_score.h"

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
