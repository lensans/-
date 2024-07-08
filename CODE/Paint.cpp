#include"Paint.h"
#include<algorithm>

// 绘制类型一直方图
QChart *Paint::createBarChart1()
{
    void getnums1();
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


void Paint:: getnums1(){
    sort(data.begin(),data.end());
    int i=0;
    data1[0]=0;
    while(data[i]<90&&i<data.size()){
        data1[0]++;
    }
    data1[1]=0;
    while(data[i]<100&&data[i]>=90&&i<data.size()){
        data1[1]++;
    }
    data1[2]=0;
    while(data[i]<110&&data[i]>=100&&i<data.size()){
        data1[2]++;
    }
    data1[3]=0;
    while(data[i]<120&&data[i]>=110&&i<data.size()){
        data1[3]++;
    }
    data1[4]=0;
    while(data[i]<130&&data[i]>=120&&i<data.size()){
        data1[4]++;
    }
    data1[5]=0;
    while(data[i]<140&&data[i]>=130&&i<data.size()){
        data1[5]++;
    }
    data1[6]=0;
    while(data[i]<=150&&data[i]>=140&&i<data.size()){
        data1[6]++;
    }
}
QChart *Paint::createBarChart2()
{
    void getnums2();
    QChart *chart = new QChart();
    chart->setTitle("直方图演示");

    QBarSet *set0 = new QBarSet("成绩");
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


void Paint:: getnums2(){
    sort(data.begin(),data.end());
    int i=0;
    data2[0]=0;
    while(data[i]<60&&i<data.size()){
        data2[0]++;
    }
    data2[1]=0;
    while(data[i]<70&&data[i]>=60&&i<data.size()){
        data2[1]++;
    }
    data2[2]=0;
    while(data[i]<80&&data[i]>=70&&i<data.size()){
        data2[2]++;
    }
    data2[3]=0;
    while(data[i]<90&&data[i]>=80&&i<data.size()){
        data2[3]++;
    }
    data2[4]=0;
    while(data[i]<=100&&data[i]>=90&&i<data.size()){
        data2[4]++;
    }
}
