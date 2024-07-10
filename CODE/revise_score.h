#ifndef REVISE_SCORE_H
#define REVISE_SCORE_H

#include <QMainWindow>
#include <QObject>

namespace Ui {
class revise_score;
}

class revise_score : public QMainWindow
{
    Q_OBJECT

public:
    explicit revise_score(QWidget *parent = nullptr);

    void on_btn_revise_return_clicked();

    ~revise_score();

public slots:
    void on_btn_revise_return_clicked();

private:
    Ui::revise_score *ui;
};

#endif // REVISE_SCORE_H
