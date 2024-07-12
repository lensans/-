#ifndef STU_CHECK_SCORE__H
#define STU_CHECK_SCORE__H

#include <QMainWindow>
#include "student.h"

namespace Ui {
class stu_check_score_;
}

class stu_check_score_ : public QMainWindow
{
    Q_OBJECT

public:
    explicit stu_check_score_(student stu,QWidget *parent = nullptr);
    student stu;
    ~stu_check_score_();

private:
    Ui::stu_check_score_ *ui;
};

#endif // STU_CHECK_SCORE__H
