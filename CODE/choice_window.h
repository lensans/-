#ifndef CHOICE_WINDOW_H
#define CHOICE_WINDOW_H

#include <QWidget>
#include"mysql_connect.h"
namespace Ui {
class choice_window;
}

class choice_window : public QWidget
{
    Q_OBJECT

public:
    explicit choice_window(QWidget *parent = nullptr);
    DB db;
    ~choice_window();

private slots:

    void on_Math_clicked();

    void on_English_clicked();

    void on_Physics_clicked();

    void on_Chemestry_clicked();

    void on_Biology_clicked();

    void on_SUM_clicked();

    void on_Chinese_clicked();

private:
    Ui::choice_window *ui;
};

#endif // CHOICE_WINDOW_H
