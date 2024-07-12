#ifndef CHOICE_WINDOW_H
#define CHOICE_WINDOW_H

#include <QWidget>

namespace Ui {
class choice_window;
}

class choice_window : public QWidget
{
    Q_OBJECT

public:
    explicit choice_window(QWidget *parent = nullptr);
    ~choice_window();

private slots:
    void on_pushButton_6_clicked();

    void on_Math_clicked();

    void on_English_clicked();

    void on_Physics_clicked();

    void on_Chemestry_clicked();

    void on_Biology_clicked();

    void on_SUM_clicked();

private:
    Ui::choice_window *ui;
};

#endif // CHOICE_WINDOW_H
