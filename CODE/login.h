#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include <QSqlDatabase> 
#include <QSqlQuery> 
#include <QMessageBox>
#include <QDebug>

void sqlite_Init();

QT_BEGIN_NAMESPACE
namespace Ui { class login; }
QT_END_NAMESPACE

class login : public QMainWindow
{
    Q_OBJECT

public:
    login(QWidget *parent = nullptr);
    
    void on_btn_signin_clicked();//点击确认登录
    
    ~login();

private slots:


private:
    Ui::login *ui;
};
#endif // LOGIN_H
