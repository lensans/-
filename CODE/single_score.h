#ifndef SINGLE_SCORE_H
#define SINGLE_SCORE_H

#include <QMainWindow>

namespace Ui {
class Single_score;
}

class Single_score : public QMainWindow
{
    Q_OBJECT

public:
    explicit Single_score(QWidget *parent = nullptr);
    ~Single_score();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::Single_score *ui;
};

#endif // SINGLE_SCORE_H
