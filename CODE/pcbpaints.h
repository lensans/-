#ifndef PCBPAINTS_H
#define PCBPAINTS_H

#include <QWidget>

namespace Ui {
class PCBpaints;
}

class PCBpaints : public QWidget
{
    Q_OBJECT

public:
    explicit PCBpaints(QString subject,QWidget *parent = nullptr);
    ~PCBpaints();

private slots:
    void on_pushButton_clicked();

private:
    Ui::PCBpaints *ui;
    QString subject;
};

#endif // PCBPAINTS_H
