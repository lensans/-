#ifndef SCORE_DISTRIBUTION_H
#define SCORE_DISTRIBUTION_H

#include <QWidget>
#include<QtCharts>
#include"mysql_connect.h"
namespace Ui {
class score_distribution;
}

class score_distribution : public QWidget
{
    Q_OBJECT

public:
    explicit score_distribution(QString new_subject,DB db,QString new_student_id,QWidget *parent = nullptr);
    void initchart(QString subject,DB db);
    void create_distribution_chart(QString subject,DB db,QString student_id);
    QString student_id;
    DB d1;
    QString subject;

    void on_score_returnPressed();

    ~score_distribution();

private:
    Ui::score_distribution *ui;
};

#endif // SCORE_DISTRIBUTION_H
