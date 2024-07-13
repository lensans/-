#ifndef SUBJECT_RELATION_H
#define SUBJECT_RELATION_H
#include <QMainWindow>

//学科间线性关系

namespace Ui {
class Subject_relation;
}

class Subject_relation : public QMainWindow
{
    Q_OBJECT

public:
    explicit Subject_relation(QWidget *parent = nullptr);
    ~Subject_relation();

private slots:
    void on_pushButton_clicked();

    void on_lineEdit_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::Subject_relation *ui;
};

#endif // SUBJECT_RELATION_H
