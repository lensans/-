#ifndef TEACHERWINDOW_H
#define TEACHERWINDOW_H

#include <QMainWindow>

namespace Ui {
class TeacherWindow;
}

class TeacherWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit TeacherWindow(QWidget *parent = nullptr);

    void on_btn_teacher_check_clicked();  //查询成绩
    void on_btn_teacher_revise_password_clicked();//重置密码
    void on_btn_teacher_total_clicked();//一分一段表
    void on_btn_teacher_single_clicked();//单科成绩直方图


    ~TeacherWindow();

private slots:
    void on_btn_teacher_subject_relation_clicked();

private:
    Ui::TeacherWindow *ui;
};

#endif // TEACHERWINDOW_H
