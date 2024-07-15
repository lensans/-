#ifndef RELATIONSHIP_H
#define RELATIONSHIP_H
#include<vector>
#include <QLineSeries>
#include <QChart>
#include <QValueAxis>
#include <QtMath>
using  std::vector;
class Relationship{
public:
    Relationship(std::vector<int>a,std::vector<int>b):a(a),b(b){
        Series=nullptr;
    }
    QChart * getrelationshipmap();
    double getrelationshipr();
    QString getrelationship();
private:
    //用 a存储语数外成绩之和，b存储物化生成绩之和
    std::vector<int>a;
    std::vector<int>b;
    QLineSeries *Series;
};

#endif // RELATIONSHIP_H
