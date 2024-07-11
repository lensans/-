#ifndef STUDENTWINDOW_H
#define STUDENTWINDOW_H

#include <QMainWindow>

namespace Ui {
class StudentWindow;
}

class StudentWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit StudentWindow(QWidget *parent = nullptr);

    void on_btn_student_check_clicked();  //查询成绩
    void on_btn_student_delete_clicked();  //删除成绩
    void on_btn_student_revise_password_clicked();//重置密码
    void on_btn_student_total_clicked();//一分一段表

    ~StudentWindow();

private:
    Ui::StudentWindow *ui;
};

#endif // STUDENTWINDOW_H
