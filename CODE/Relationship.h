#ifndef RELATIONSHIP_H
#define RELATIONSHIP_H
#include<vector>
#include<QtCharts>
using namespace std;
class Relationship{
public:
    Relationship(vector<int>a,vector<int>b):a(a),b(b){
        Series=nullptr;
    }
    QChart * getrelationshipmap();
    QString getrelationship();
private:
    //用 a存储语数外成绩之和，b存储物化生成绩之和
    vector<int>a;
    vector<int>b;
    QLineSeries *Series;
};

#endif // RELATIONSHIP_H
