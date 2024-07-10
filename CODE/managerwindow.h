#ifndef MANAGERWINDOW_H
#define MANAGERWINDOW_H
#include <QMainWindow>

namespace Ui {
class managerwindow;
}

class managerwindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit managerwindow(QWidget *parent = nullptr);
    
    void on_btn_input_clicked();//录入成绩
    void on_btn_revise_clicked();//修改成绩
    void on_btn_check_clicked();  //查询成绩
    void on_btn_total_clicked();//总分排名
    void on_btn_subject_clicked();//学科间线性关系
    void on_btn_single_clicked();//单科成绩直方图
    
    ~managerwindow();

private:
    Ui::managerwindow *ui;

};

#endif // MANAGERWINDOW_H
