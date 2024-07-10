<<<<<<< HEAD
#ifndef MANAGERWINDOW_H
#define MANAGERWINDOW_H
=======
﻿#ifndef MANAGERWINDOW_H
#define MANAGERWINDOW_H

>>>>>>> eae3de45a9ca010dc73b35dbb34bfc4ba3df93c4
#include "input_score.h"
#include <QMainWindow>
#include <QWidget>
#include <QObject>

namespace Ui {
class managerwindow;
}

class managerwindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit managerwindow(QWidget *parent = nullptr);
    void on_btn_input_clicked();
    void on_btn_revise_clicked();
    void on_btn_check_clicked();
    //void on_btn_total_clicked();
    ~managerwindow();

private:
    Ui::managerwindow *ui;

};

#endif // MANAGERWINDOW_H
