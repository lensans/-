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

    void on_btn_manager_input_clicked();//录入成绩
    void on_btn_manager_revise_clicked();//修改成绩
    void on_btn_manager_check_clicked();  //查询成绩
    void on_btn_manager_delete_clicked();  //删除成绩
    void on_btn_manager_revise_password_clicked();//重置密码
    void on_btn_manager_total_clicked();//一分一段表
    void on_btn_manager_subject_clicked();//学科间线性关系
    void on_btn_manager_single_clicked();//单科成绩直方图

    ~managerwindow();

private:
    Ui::managerwindow *ui;

};

#endif // MANAGERWINDOW_H
