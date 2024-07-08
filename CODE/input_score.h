#ifndef INPUT_SCORE_H
#define INPUT_SCORE_H

#include <QMainWindow>

namespace Ui {
class Input_score;
}

class Input_score : public QMainWindow
{
    Q_OBJECT

public:
    explicit Input_score(QWidget *parent = nullptr);
    ~Input_score();

private:
    Ui::Input_score *ui;
};

#endif // INPUT_SCORE_H
