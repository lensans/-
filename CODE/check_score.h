#ifndef CHECK_SCORE_H
#define CHECK_SCORE_H

#include <QMainWindow>
#include "mysql_connect.h"
namespace Ui {
class check_score;
}

class check_score : public QMainWindow
{
    Q_OBJECT

public:
    explicit check_score(QWidget *parent = nullptr);

    void on_btn_check_all_confirm_clicked();//查询全部成绩时点击确认查询
    void on_btn_check_single_confirm_clicked();//查询单科成绩时点击确认查询
    DB db;
    ~check_score();



private:
    Ui::check_score *ui;
};

#endif // CHECK_SCORE_H
