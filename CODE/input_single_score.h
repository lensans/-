#ifndef INPUT_SINGLE_SCORE_H
#define INPUT_SINGLE_SCORE_H

#include <QMainWindow>

namespace Ui {
class Input_single_score;
}

class Input_single_score : public QMainWindow
{
    Q_OBJECT

public:
    explicit Input_single_score(QWidget *parent = nullptr);

    void on_btn_single_return_clicked();//点击单个导入界面的返回按钮
    void on_input_single_confirm_clicked();//点击单个导入界面的确认导入按钮

    ~Input_single_score();

private:
    Ui::Input_single_score *ui;
};

#endif // INPUT_SINGLE_SCORE_H
