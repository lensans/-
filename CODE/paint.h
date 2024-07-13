#ifndef PAINT_H
#define PAINT_H

#include <vector>
#include <QtCharts>
#include<Qstring>
//QT_CHARTS_USE_NAMESPACE;

class Paint{
public:
    Paint(std::vector<int> data,QString subject):data(data),subject(subject){
        data1=new int[7];
        data2=new int[5];
    }
    QChart *createBarChart1();
    QChart *createBarChart2();
    void getnums1(int*& Data);
    void getnums2(int*& Data);
private:
    std::vector<int> data;
    QString subject;
    int *data1;
    int *data2;
};

#endif // PAINT_H
