#ifndef SIGNIN_H
#define SIGNIN_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QDebug>

//void sqlite_Init();

QT_BEGIN_NAMESPACE
namespace Ui
{
class signin;
}
QT_END_NAMESPACE

class signin : public QMainWindow
{
    Q_OBJECT

public:
    explicit signin(QWidget *parent = nullptr);

    void on_btn_signin_clicked();//点击确认登录

    ~signin();

private:
    Ui::signin *ui;
};

#endif // SIGNIN_H
