#ifndef PAINT_H
#define PAINT_H

#include <vector>
#include <QtCharts>

using namespace std;
//QT_CHARTS_USE_NAMESPACE;

class Paint{
public:
    Paint(vector<int> data):data(data){
        data1=new int[7];
        data2=new int[5];
        }
    QChart *createBarChart1();
    QChart *createBarChart2();
    void getnums1(int*& Data);
    void getnums2(int*& Data);
private:
    vector<int> data;
    int *data1;
    int *data2;
};

#endif // PAINT_H
