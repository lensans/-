#include"Relationship.h"
#include<qstring.h>
#include <QtCharts/QScatterSeries>
#include<QVector>
QPointF Relationship::linearRegression(vector<int>& xData,  vector<int>& yData) {
    int n = xData.size();
    double sumX = 0, sumY = 0, sumXY = 0, sumXSquare = 0;

    for (int i = 0; i < n; i++) {
        sumX += xData[i];
        sumY += yData[i];
        sumXY += xData[i] * yData[i];
        sumXSquare += xData[i] * xData[i];
    }

    double meanX = sumX / n;
    double meanY = sumY / n;

    double slope = (n * sumXY - sumX * sumY) / (n * sumXSquare - sumX * sumX);
    double intercept = meanY - slope * meanX;

    return QPointF(slope, intercept);
}

QChart* Relationship::getrelationshipmap(){
    QChart *chart = new QChart();
    QLineSeries *series = new QLineSeries();
    // 添加散点数据，生成散点图
    int n = a.size();
    for (int i = 0; i < n; i++) {
        series->append(a[i], b[i]);
    }
    Series = series;
    chart->addSeries(series);

    // 设置散点样式
    QPen pen(Qt::NoPen); // 设置透明的画笔，使散点不可见
    series->setPointLabelsVisible(false); // 隐藏散点标签
    series->setPointLabelsFormat(""); // 设置空的散点标签格式
    series->setPen(pen);

    chart->setTitle("曲线关系");

    // 线性回归拟合
    QPointF result = linearRegression(a, b);
    QLineSeries *linearFitLine = new QLineSeries();
    linearFitLine->append(a[0], result.y() + result.x() * a[0]);
    linearFitLine->append(a[n-1], result.y() + result.x() * a[n-1]);
    chart->addSeries(linearFitLine);

    // 设置拟合曲线样式
    QPen fitLinePen(Qt::blue); // 设置拟合曲线颜色为蓝色
    fitLinePen.setWidth(2); // 设置拟合曲线宽度
    linearFitLine->setPen(fitLinePen); // 应用设置

    // 设置x轴
    QValueAxis* axisX = new QValueAxis;
    axisX->setRange(200, 450);
    axisX->setTitleText("语数外总分");
    axisX->setLabelFormat("%.0f");
    axisX->setTickCount(30);
    axisX->setMinorTickCount(4);

    // 设置y轴
    QValueAxis* axisY = new QValueAxis;
    axisY->setRange(100, 300);
    axisY->setTitleText("物化生总分");
    axisY->setLabelFormat("%.0f");
    axisY->setTickCount(20);
    axisY->setMinorTickCount(4);

    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);
    linearFitLine->attachAxis(axisX);

    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);
    linearFitLine->attachAxis(axisY);

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
