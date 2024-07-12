#ifndef STU_CHANGE_PASSWORD__H
#define STU_CHANGE_PASSWORD__H

#include <QMainWindow>
#include "student.h"
namespace Ui {
class stu_change_password_;
}

class stu_change_password_ : public QMainWindow
{
    Q_OBJECT

public:
    explicit stu_change_password_(student s,QWidget *parent = nullptr);
    student stu;
    void on_change_password_confirm_clicked();

    ~stu_change_password_();

private:
    Ui::stu_change_password_ *ui;
};

#endif // STU_CHANGE_PASSWORD__H
