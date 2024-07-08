#ifndef PAINT_H
#define PAINT_H
#include<vector>
#include<QtCharts>
using namespace std;
class Paint{
public:
    Paint(vector<int>data):data(data){}
    QChart *createBarChart1();
    QChart *createBarChart2();
    void getnums1();
    void getnums2();
private:
    vector<int>data;
    int data1[7];
    int data2[5];
};

#endif // PAINT_H
