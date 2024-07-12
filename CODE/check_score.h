#ifndef CHECK_SCORE_H
#define CHECK_SCORE_H

#include <QMainWindow>
namespace Ui {
class check_score;
}

class check_score : public QMainWindow
{
    Q_OBJECT

public:
    explicit check_score(QWidget *parent = nullptr);

    void on_btn_check_all_confirm_clicked();//查询成绩时点击确认查询

    ~check_score();



private:
    Ui::check_score *ui;
};

#endif // CHECK_SCORE_H
