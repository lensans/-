#include "score_distribution.h"
#include "ui_score_distribution.h"

score_distribution::score_distribution(QString new_subject,QString new_student_id,bool student_call,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::score_distribution)
{
    student=student_call;
    ui->setupUi(this);
    subject=new_subject;
    ui->setupUi(this);
    student_id=new_student_id;
    initchart(subject);
}

score_distribution::~score_distribution()
{
    delete ui;
}
void score_distribution::initchart(QString subject){
    QChart *chart=new  QChart();
    chart->setTitle("test");
    chart->setAnimationOptions(QChart::SeriesAnimations);
    ui->graphicsView->setChart(chart);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    create_distribution_chart(subject,student_id);
}
void score_distribution:: create_distribution_chart(QString subject,QString student_id){
    DB db;
    QChart* chart =ui->graphicsView->chart();
    chart->setTitle("一分一段表");

    QSplineSeries *s0= new QSplineSeries();
    s0->setName("分数分布曲线");
    chart->addSeries(s0);

    QValueAxis *x=new QValueAxis;
    QValueAxis *y=new QValueAxis;
    if(subject=="SUM"){
        x->setRange(240,600);
        y->setRange(0,32);
    }
    else if(subject=="Chinese"){
        x->setRange(20,150);
        y->setRange(0,100);
    }
    else if(subject=="Math"||subject=="English"){
        x->setRange(20,150);
        y->setRange(0,60);
    }
    else{
        x->setRange(0,100);
        y->setRange(0,100);
    }
    x->setTitleText(subject+"分数分布");
    //创建x轴


    y->setTitleText("人数分布");
    //创建y轴
    std::vector<int> scores;int distribution[751]{0}; int rank[750];
    db.get_students_scores(QString::number(1),QString::number(1000),subject,scores);
    for(int a:scores){
        distribution[a]+=1;
    }
    //获取分数分布
    x->setTickCount(subject=="SUM"?11:11);
    y->setTickCount(11);
    for(int b=1;b<=750;b++){
        rank[b]=distribution[b]+distribution[b-1];
    }
    for(int i=1;i<=(subject=="SUM"?750:150);i++){
        s0->append(i,rank[i]);
    }
    chart->setAxisX(x,s0);
    chart->setAxisY(y,s0);
    int delta;
    if(student){
        ui->score->setText(QString::number(db.get_single_score(student_id,subject)));
        ui->rank->setText(QString::number(db.get_rank(student_id,subject,delta)));
        ui->lineEdit->setText(QString::number(delta));
    }
    else{
        ui->score->setText(QString::number(0));
        ui->rank->setText(QString::number(1000));
        ui->lineEdit->setText(0);
    }
}



void score_distribution::on_score_returnPressed()
{
    DB db;
    std::vector<int> rank(750);
    db.get_ranks(subject,rank);
    int myscore=ui->score->text().toInt();
    ui->rank->setText(QString::number(rank[myscore]));
}
