#ifndef SUBJECT_RELATION_H
#define SUBJECT_RELATION_H

#include <QMainWindow>

namespace Ui {
class Subject_relation;
}

class Subject_relation : public QMainWindow
{
    Q_OBJECT

public:
    explicit Subject_relation(QWidget *parent = nullptr);
    ~Subject_relation();

private:
    Ui::Subject_relation *ui;
};

#endif // SUBJECT_RELATION_H
