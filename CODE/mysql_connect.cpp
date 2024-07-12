#include"mysql_connect.h"
#include "password.h"
#include <QSqlField>
#include <QSqlRecord>
#include <QDebug>


DB::DB(){
    Init();
}

void DB::connection_check(){
    if(QSqlDatabase::contains("scoreConnection")){
        QSqlDatabase::removeDatabase("scoreConnection");
    }
}

QSqlDatabase  DB::Init()
{
    connection_check();
    db =QSqlDatabase::addDatabase("QMYSQL","scoreConnection");//使用qmysql驱动连接数据库
    db.setHostName("sh-cynosdbmysql-grp-mejzbbvg.sql.tencentcdb.com");
    db.setPort(21693);
    db.setDatabaseName("scores");
    db.setUserName("user");
    db.setPassword("123456Abc");//设置连接相关参数
    bool success=db.open();
    if(success){
        return db;//成功时返回该对象
    }
    else{
        QSqlError error = db.lastError();
        QMessageBox::critical(nullptr,"error", error.text());
        return db;
    }//检测连接是否成功
}


int DB::get_single_score(QString student_id,QString subject){
    int result=-1;
    QSqlQuery query(db);//指定数据库连接
    QString sql=QString("SELECT * FROM SCORE WHERE ID=%1").arg(student_id);
    if(query.exec(sql)){
        while(query.next()){
            result=query.value(subject).toInt();
        }
        return result;
    }
    else{
        QMessageBox::critical(nullptr,"error",query.lastError().text());
        return -1;
    }
}


bool DB::update_score(QString student_id,QString subject,int new_score){
    QSqlQuery query(db);//指定数据库连接
    QString sql=QString("UPDATE SCORE SET %1=%2 WHERE ID=%3").arg(subject).arg(new_score).arg(student_id);
    bool ret=query.exec(sql);
    if (!ret) {
        QMessageBox::critical(nullptr,"error","Failed to update data: " + query.lastError().text());
        return false;
    }//报错信息
    else{
        return true;
    }
}


bool DB::add_score(QString student_id, QString student_name, VP subject_scores)
{
    QSqlQuery query1(db);
    query1.prepare("INSERT INTO SCORE (NAME,ID ) VALUES( ?,? )");
    query1.addBindValue(student_name);
    query1.addBindValue(student_id);
    if(query1.exec()){
        for(QPair<QString,int> s:subject_scores){
            update_score(student_id,s.first,s.second);
        }
        QMessageBox::information(nullptr,"success","success");
        return true;
    }
    else{
        QMessageBox::information(nullptr,"failed",query1.lastError().text());
        return false;
    }

}


bool DB::delete_student(QString student_id){
    QSqlQuery query(db);
    query.prepare("DELETE FROM SCORE WHERE ID=?");
    query.bindValue(0,student_id);
    if(query.exec()){
        QMessageBox::information(nullptr,"success","success deleted");
        return 1;
    }
    else{
        QMessageBox::information(nullptr,"fail",query.lastError().text());
        return 0;
    }
}

VP DB::get_all_score(QString student_id){
    VP subject_score;
    QSqlQuery query(db);
    query.prepare("SELECT Chinese,Math,English,Physics,Chemestry,Biology,Sum FROM SCORE WHERE ID=?");
    query.bindValue(0,student_id);
    if(query.exec()){
        while(query.next()){
            QSqlRecord record=query.record();
            for(int i=0;i<record.count();++i){
                QString filename=record.fieldName(i);
                int value=query.value(i).toInt();
                subject_score.push_back(qMakePair(filename,value));
            }
        }
        return subject_score;
    }
    else{
        QMessageBox::critical(nullptr,"error",query.lastError().text());
    }
}

int DB::login_check(QString username, QString password){
    //查询该用户是否为新用户
    QSqlQuery query0(db);
    query0.prepare("SELECT password FROM USER WHERE username = ?");
    query0.addBindValue(username);
    if(!query0.exec()){
        QMessageBox::critical(nullptr,"error",query0.lastError().text());
        qDebug()<<1;
        return -1;
    }
    else{
        query0.first();
        QString password_tmp=query0.value("password").toString();
        qDebug()<<password_tmp;
        if(password_tmp=="123456") return 3;
    }

    //查询数据库中是否存在某个用户，其用户名为username，密码为password，盐值为salt
    QSqlQuery query(db);
    query.prepare("SELECT password FROM USER WHERE username = ?");
    query.addBindValue(username);
    query.exec();
    if(!query.first()){
        QMessageBox::critical(nullptr,"error","用户不存在"+query.lastError().text());
        qDebug()<<2;
        return -1;
    }
    else{
        QSqlQuery query1(db);
        query1.prepare("SELECT identity, password, salt FROM USER WHERE username=?");
        query1.addBindValue(username);
        if(!query1.exec()){
            QMessageBox::critical(nullptr,"error",query.lastError().text());
            qDebug()<<3;
            return -1;
        }
        else{
            query1.first();
            int identity=query1.value("identity").toInt();
            QString storedHashedPassword=query1.value("password").toString();
            QString storedSalt=query1.value("salt").toString();
            QString hashedInputPassword=hashPasswordPBKDF2(password,storedSalt);
            if(hashedInputPassword==storedHashedPassword) return identity;
            else return -1;
        }
    }
    qDebug()<<4;
    return -1;
}

void DB::upload_score(QString file_path){

    QXlsx::Document xlsx(file_path);
    if(!xlsx.isLoadPackage()){
        QMessageBox::critical(nullptr,"error","Failed to open Excel document.");
        return;
    }
    QSqlQuery query(db);
    QString sql=QString("INSERT INTO scores (student_id, score) VALUES (?, ?)");
    query.prepare(sql);

    int row=1;
    while(!xlsx.read(row,1).isNull()){
        QString student_id=xlsx.read(row,1).toString();
        int score=xlsx.read(row,2).toInt();
        query.addBindValue(student_id);
        query.addBindValue(score);
        if(!query.exec()){
            QMessageBox::information(nullptr,"fail",query.lastError().text());
            return;
        }
        row++;
    }
}

bool DB::revise_password(QString username,QString new_password){
    QSqlQuery query(db);
    QString new_salt=generateSalt();
    QString hashedPassword=hashPasswordPBKDF2(new_password,new_salt);

    QString sql = "UPDATE USER SET password = ?, salt = ? WHERE username = ?";
    query.prepare(sql);
    query.addBindValue(hashedPassword);
    query.addBindValue(new_salt);
    query.addBindValue(username);

    if(!query.exec()){
        QMessageBox::critical(nullptr,"error","密码更新失败："+query.lastError().text());
        return 0;
    }
    else{
        return 1;
    }
}

void DB::get_students_scores(QString start_student_id, QString end_student_id, QString subject, std::vector<int>& scores){
    QSqlQuery query(db);
    QString sql=QString("SELECT %1 FROM SCORE WHERE ID BETWEEN %2 AND %3").arg(subject).arg(start_student_id).arg(end_student_id);
    if(query.exec(sql)){
        while(query.next()){
            scores.push_back(query.value(subject).toInt());
        }
    }
    else{
        QMessageBox::critical(nullptr,"error","成绩获取失败："+query.lastError().text());
    }

}

int DB::get_rank(QString student_id, QString subject){
    QSqlQuery query(db);
    std::vector<int> scores;
    int distribution[751]{0};
    int rank[751];
    int myscore=get_single_score(student_id,subject);
    get_students_scores("1","1000",subject,scores);
    for(int a:scores){
        distribution[a]+=1;
    }
    rank[0]=0;
    for(int b=1;b<=750;b++){
        rank[b]=distribution[b]+rank[b-1];
    }
    return rank[myscore];
}

void DB::get_all_ranks(QString subject,QMap<int,int> &scoreDistribution){
    QSqlQuery query(db);

    //使用Mysql自带的排序功能
    QString str=QString("SELECT %1 FROM SCORE  ODER BY %2 DESC").arg(subject).arg(subject);
    query.prepare(str);

    if(!query.exec()){
        QMessageBox::critical(nullptr,"error",query.lastError().text());
    }
    else{
        while(query.next()){
            int score=query.value(0).toInt();
            scoreDistribution[score]++;
        }
    }
}
void DB::get_ranks(QString subject,std::vector<int>& rank){
    QSqlQuery query(db);
    std::vector<int> scores;
    int distribution[751]{0};
    get_students_scores("1","1000",subject,scores);
    for(int a:scores){
        distribution[a]+=1;
    }
    rank[0]=0;
    for(int b=1;b<=750;b++){
        rank[b]=distribution[b]+rank[b-1];
    }
}
DB::~DB(){
    db.close();
}
