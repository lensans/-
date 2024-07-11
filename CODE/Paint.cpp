#include "paint.h"
#include <algorithm>

// 绘制类型一直方图
QChart *Paint::createBarChart1()
{
    getnums1(data1);
    QChart *chart = new QChart();
    chart->setTitle("直方图演示");

    QBarSet *set0 = new QBarSet("成绩");
    *set0<<data1[0]<<data1[1]<<data1[2]<<data1[3]<<data1[4]<<data1[5]<<data1[6];

    QBarSeries  *series = new QBarSeries (chart);
    series->append(set0);

    chart->addSeries(series);
    chart->setAnimationOptions(QChart::SeriesAnimations);

    QStringList categories;
    categories << "90以下" << "90-100" << "100-110" << "110-120" << "120-130" << "130-140"<<"140-150";  //保存横坐标字符串的列表
    QBarCategoryAxis *axis = new QBarCategoryAxis();
    axis->append(categories);
    chart->createDefaultAxes();
    chart->setAxisX(axis, series);
    chart->axes(Qt::Vertical).first()->setRange(0,5000);

    // 在标签和轴之间加空格
    QValueAxis *axisY = qobject_cast<QValueAxis*>(chart->axes(Qt::Vertical).first());
    Q_ASSERT(axisY);
    axisY->setLabelFormat("%.2f  ");

    series->setLabelsPosition(QAbstractBarSeries::LabelsInsideEnd);  //设置标签显示的位置
    series->setLabelsVisible(true);  //设置数据标签可见

    //设置主题
    chart->setTheme(QChart::ChartThemeBlueCerulean);

    return chart;
}

bool comp0(int x){
    return x<90;
}
bool comp1(int x){
    return (x>=90&&x<100);
}
bool comp2(int x){
    return (x>=100&&x<110);
}
bool comp3(int x){
    return (x>=110&&x<120);
}
bool comp4(int x){
    return (x>=120&&x<130);
}
bool comp5(int x){
    return (x>=130&&x<140);
}
bool comp6(int x){
    return (x>=140&&x<=150);
}
void Paint:: getnums1(int*&Data){
    Data[0]=count_if(data.begin(),data.end(),comp0);
    Data[1]=count_if(data.begin(),data.end(),comp1);
    Data[2]=count_if(data.begin(),data.end(),comp2);
    Data[3]=count_if(data.begin(),data.end(),comp3);
    Data[4]=count_if(data.begin(),data.end(),comp4);
    Data[5]=count_if(data.begin(),data.end(),comp5);
    Data[6]=count_if(data.begin(),data.end(),comp6);
}
QChart *Paint::createBarChart2()
{
     getnums2(data2);
    QChart *chart = new QChart();
    chart->setTitle("直方图演示");

    QBarSet *set0 = new QBarSet("人数");
    *set0<<data2[0]<<data2[1]<<data2[2]<<data2[3]<<data2[4];

    QBarSeries  *series = new QBarSeries (chart);
    series->append(set0);

    chart->addSeries(series);
    chart->setAnimationOptions(QChart::SeriesAnimations);

    QStringList categories;
    categories << "60以下" << "60-70" << "70-80" << "80-90" << "90-100" ;  //保存横坐标字符串的列表
    QBarCategoryAxis *axis = new QBarCategoryAxis();
    axis->append(categories);
    chart->createDefaultAxes();
    chart->setAxisX(axis, series);
    chart->axes(Qt::Vertical).first()->setRange(0,500);//设置纵轴范围

    // 在标签和轴之间加空格
    QValueAxis *axisY = qobject_cast<QValueAxis*>(chart->axes(Qt::Vertical).first());
    Q_ASSERT(axisY);
    axisY->setLabelFormat("%.2f  ");

    series->setLabelsPosition(QAbstractBarSeries::LabelsInsideEnd);  //设置标签显示的位置
    series->setLabelsVisible(true);  //设置数据标签可见

    //设置主题
    chart->setTheme(QChart::ChartThemeBlueCerulean);

    return chart;
}
bool comp7(int x){
    return x<60;
}
bool comp8(int x){
    return (x>=60&&x<70);
}
bool comp9(int x){
    return (x>=70&&x<80);
}

bool comp10(int x){
    return (x>=80&&x<90);
}
bool comp11(int x){
    return (x>=90&&x<=100);
}


void Paint:: getnums2(int*&Data){
    Data[0]=count_if(data.begin(),data.end(),comp7);
    Data[1]=count_if(data.begin(),data.end(),comp8);
    Data[2]=count_if(data.begin(),data.end(),comp9);
    Data[3]=count_if(data.begin(),data.end(),comp10);
    Data[4]=count_if(data.begin(),data.end(),comp11);

}

