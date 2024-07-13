#ifndef CMEPAINTS_H
#define CMEPAINTS_H

#include <QWidget>
#include<QString>
namespace Ui {
class CMEpaints;
}

class CMEpaints : public QWidget
{
    Q_OBJECT

public:
    explicit CMEpaints(QString subject,QWidget *parent = nullptr);
    ~CMEpaints();

private slots:
    void on_pushButton_clicked();

private:
    Ui::CMEpaints *ui;
    QString subject;


};

#endif // CMEPAINTS_H
