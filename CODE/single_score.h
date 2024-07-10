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

private:
    Ui::Single_score *ui;
};

#endif // SINGLE_SCORE_H
