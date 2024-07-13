#include"Relationship.h"
#include<QtCharts>
#include<qstring.h>
QChart* Relationship::getrelationshipmap(){

    QChart *chart = new QChart();
    QLineSeries *series = new QLineSeries();
    // 添加散点数据，生成散点图
    int n=a.size();
    for(int i=0;i<n;i++){
        series->append(a[i],b[i]);
    }
    Series=series;
    chart->addSeries(series);
    chart->setTitle("曲线关系");
    //设置x轴
    QValueAxis*axisX=new QValueAxis;
    axisX->setRange(200,450);
    axisX->setTitleText("语数外总分");
    axisX->setLabelFormat("%.0f");
    axisX->setTickCount(30);
    axisX->setMinorTickCount(4);
    //设置y轴
    QValueAxis*axisY=new QValueAxis;
    axisY->setRange(100,300);
    axisY->setTitleText("物化生总分");
    axisY->setLabelFormat("%.0f");
    axisY->setTickCount(20);
    axisY->setMinorTickCount(4);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);
    return chart;
}
QString Relationship::getrelationship(){
    //计算相关系数r
    QVector<QPointF> points = Series->pointsVector();
    double r = 0.0;
    for (int i = 0; i < points.size(); ++i) {
        r += points[i].x() * points[i].y();
    }
    r /= points.size();

    // 线性回归计算
    double sumX = 0.0, sumY = 0.0, sumXY = 0.0, sumX2 = 0.0;
    for (int i = 0; i < points.size(); ++i) {
        sumX += points[i].x();
        sumY += points[i].y();
        sumXY += points[i].x() * points[i].y();
        sumX2 += points[i].x() * points[i].x();
    }
    double slope = (points.size() * sumXY - sumX * sumY) / (points.size() * sumX2 - sumX * sumX);
    double intercept = (sumY - slope * sumX) / points.size();
    // 线性回归方程
      QString equation = "线性回归方程：y = " + QString::number(slope) + "x + " + QString::number(intercept);
    return equation;
}
