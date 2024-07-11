#ifndef REVISE_SCORE_H
#define REVISE_SCORE_H

#include <QMainWindow>

namespace Ui {
class revise_score;
}

class revise_score : public QMainWindow
{
    Q_OBJECT

public:
    explicit revise_score(QWidget *parent = nullptr);

    void on_btn_revise_return_clicked();//点击返回
    void on_btn_revise_confirm_clicked();//点击确认修改按钮
    
    ~revise_score();

private:
    Ui::revise_score *ui;
};

#endif // REVISE_SCORE_H

