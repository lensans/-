#ifndef STU_CHECK_SCORE_H
#define STU_CHECK_SCORE_H

#include <QWidget>
#include "student.h"

namespace Ui {
class stu_check_score;
}

class stu_check_score : public QWidget
{
    Q_OBJECT

public:
    explicit stu_check_score(QString s,QWidget *parent = nullptr);
    student stu;
    ~stu_check_score();

private:
    Ui::stu_check_score *ui;
};

#endif // STU_CHECK_SCORE_H
