#ifndef TOTAL_SCORE_H
#define TOTAL_SCORE_H

#include <QMainWindow>

//总分及排名

namespace Ui {
class total_score;
}

class total_score : public QMainWindow
{
    Q_OBJECT

public:
    explicit total_score(QWidget *parent = nullptr);
    ~total_score();

private:
    Ui::total_score *ui;
};

#endif // TOTAL_SCORE_H
