#ifndef TOTAL_SCORE_H
#define TOTAL_SCORE_H

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
    explicit totalscore(QString newstudent_id,bool student_call=1,QWidget *parent = nullptr);
    QString student_id;
    bool student=1;
    ~totalscore();


private:
    Ui::totalscore *ui;
private slots:
    void on_Chinese_clicked();

    void on_Math_clicked();

    void on_English_clicked();

    void on_Physics_clicked();

    void on_Chemestry_clicked();

    void on_Biology_clicked();

    void on_SUM_clicked();
};

#endif // TOTAL_SCORE_H
