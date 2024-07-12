#ifndef DELETE_SCORE_H
#define DELETE_SCORE_H

#include <QMainWindow>

namespace Ui {
class Delete_score;
}

class Delete_score : public QMainWindow
{
    Q_OBJECT

public:
    explicit Delete_score(QWidget *parent = nullptr);

    void on_btn_delete_confirm_clicked();//点击确认删除

    ~Delete_score();

private:
    Ui::Delete_score *ui;
};

#endif // DELETE_SCORE_H
