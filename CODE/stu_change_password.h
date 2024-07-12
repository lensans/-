#ifndef STU_CHANGE_PASSWORD_H
#define STU_CHANGE_PASSWORD_H

#include <QWidget>
#include "student.h"
namespace Ui {
class stu_change_password;
}

class stu_change_password : public QWidget
{
    Q_OBJECT

public:
    explicit stu_change_password(student s,QWidget *parent = nullptr);
    student stu;
    ~stu_change_password();

private slots:
    void on_change_password_confirm_2_clicked();

private:
    Ui::stu_change_password *ui;
};

#endif // STU_CHANGE_PASSWORD_H
