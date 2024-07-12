#include "login.h"
#include <QApplication>
#include"mysql_connect.h"
#include"StudentWindow.h"
#include"teacherwindow.h"
#include"managerwindow.h"
//DB db;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    login w1;
    w1.show();//显示登录界面
    //managerwindow w1;
    //w1.show();
    return a.exec();
}
