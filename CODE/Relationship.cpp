#include"Relationship.h"
#include<qstring.h>
#include <QtCharts/QScatterSeries>
#include<QVector>
#include<QtCharts>
QChart* Relationship::getrelationshipmap() {
    QScatterSeries *scatterSeries = new QScatterSeries();
    QChart *chart = new QChart();
    QLineSeries *series = new QLineSeries();
    // 添加散点数据，生成散点图
   int n = a.size();
   for (int i = 0; i < n; i++) {
       series->append(a[i], b[i]);
   }
    Series = series;
    QVector<QPointF> points = Series->pointsVector();


   for(int i = 0; i < points.size(); ++i) {
       scatterSeries->append(points[i]);
       scatterSeries->setMarkerSize(10); // 设置散点的大小
    }
    scatterSeries->setName("散点");
    chart->addSeries(scatterSeries);
    // 设置x轴
    QValueAxis* axisX = new QValueAxis;
    axisX->setRange(200, 450);
    axisX->setTitleText("语数外总分");
    axisX->setLabelFormat("%.0f");
    axisX->setTickCount(10);
    axisX->setMinorTickCount(3);

    // 设置y轴
    QValueAxis* axisY = new QValueAxis;
    axisY->setRange(100, 300);
    axisY->setTitleText("物化生总分");
    axisY->setLabelFormat("%.0f");
    axisY->setTickCount(15);
    axisY->setMinorTickCount(3);
    // chart->addAxis(axisX, Qt::AlignBottom);
    // scatterSeries->attachAxis(axisX);

    // chart->addAxis(axisY, Qt::AlignLeft);
    // scatterSeries->attachAxis(axisY);
    chart->setAxisX(axisX,scatterSeries);
    chart->setAxisY(axisY,scatterSeries);


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
    // 设定直线的起始点和终点，根据需要设置合适的范围
    double xMin =200; // 起始点x坐标
    double xMax = 450; // 终点x坐标
    double yMin = slope * xMin + intercept;
    double yMax = slope * xMax + intercept;
    QLineSeries *lineSeries = new QLineSeries();
    lineSeries->append(xMin, yMin);
    lineSeries->append(xMax, yMax);
    chart->addSeries(lineSeries);
    lineSeries->setName("拟合直线");
    chart->setAxisX(axisX,lineSeries);
    chart->setAxisY(axisY,lineSeries);
    // lineSeries->attachAxis(axisX);
    // lineSeries->attachAxis(axisY);
    return chart;

}
double Relationship::getrelationshipr(){
    // 计算 x 和 y 的均值
    double meanX = std::accumulate(a.begin(), a.end(), 0.0) / a.size();
    double meanY = std::accumulate(b.begin(), b.end(), 0.0) / b.size();

    // 计算 Pearson 相关系数的分子和分母
    double numerator = 0.0;
    double denomX = 0.0;
    double denomY = 0.0;

    for (int i = 0; i < a.size(); i++) {
        numerator += (a[i] - meanX) * (b[i] - meanY);
        denomX += pow((a[i] - meanX), 2);
        denomY += pow((b[i] - meanY), 2);
    }

    double correlation = numerator / (sqrt(denomX) * sqrt(denomY));

    return correlation;
}
QString Relationship::getrelationship(){
    QVector<QPointF> points = Series->pointsVector();

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
