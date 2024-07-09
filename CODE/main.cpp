#include "login.h"
#include "managerwindow.h"
#include "mysql_connect.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    login w1;
    w1.show();
    managerwindow w2;
    w2.show();
    return a.exec();
}
