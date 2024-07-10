#include "subject_relation.h"
#include "ui_subject_relation.h"

Subject_relation::Subject_relation(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Subject_relation)
{
    ui->setupUi(this);
}

Subject_relation::~Subject_relation()
{
    delete ui;
}
