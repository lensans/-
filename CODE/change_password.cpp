#include "change_password.h"
#include "ui_change_password.h"
#include <mysql_connect.h>

change_password::change_password(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::change_password)
{
    ui->setupUi(this);
}

change_password::~change_password()
{
    delete ui;
}

void change_password::on_change_password_confirm_clicked()
{
    QString username = ui->change_password_id->text();
    QString new_password = ui->change_password_new->text();

    DB db;
    int res = db.revise_password(username,new_password);
    if(res == 1)
    {

        this->close();
    }
}
