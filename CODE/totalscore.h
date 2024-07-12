#ifndef TOTALSCORE_H
#define TOTALSCORE_H

#include <QMainWindow>
#include"mysql_connect.h"
//一分一段表

namespace Ui {
class totalscore;
}

class totalscore : public QMainWindow
{
    Q_OBJECT

public:
    explicit totalscore(QWidget *parent = nullptr);

    DB db;
    void on_Chinese_clicked();

    void on_Math_clicked();

    void on_English_clicked();

    void on_Physics_clicked();

    void on_Chemestry_clicked();

    void on_Biology_clicked();

    void on_SUM_clicked();

    ~totalscore();

private:
    Ui::totalscore *ui;
};

#endif // TOTALSCORE_H
