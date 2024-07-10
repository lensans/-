#ifndef CHECK_SCORE_H
#define CHECK_SCORE_H

#include <QMainWindow>
#include <QObject>

namespace Ui {
class check_score;
}

class check_score : public QMainWindow
{
    Q_OBJECT

public:
    explicit check_score(QWidget *parent = nullptr);
    void on_btn_check_return_clicked();

    ~check_score();

public slots:
    void on_btn_check_return_clicked();

private:
    Ui::check_score *ui;
};

#endif // CHECK_SCORE_H
