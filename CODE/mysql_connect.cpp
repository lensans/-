#include"mysql_connect.h"




QSqlDatabase Initdb()
{
    QSqlDatabase db =QSqlDatabase::addDatabase("QMYSQL");//使用qmysql驱动连接数据库
    db.setHostName("sh-cynosdbmysql-grp-mejzbbvg.sql.tencentcdb.com");
    db.setPort(21693);
    db.setDatabaseName("scores");
    db.setUserName("user");
    db.setPassword("123456Abc");//设置连接相关参数
    // db.setHostName("127.0.0.1");
    // db.setPort(3306);
    // db.setDatabaseName("mysql");
    // db.setUserName("root");
    // db.setPassword("123456");//设置连接相关参数
    bool success=db.open();
    if(success){
        QMessageBox::information(nullptr,"success","您已成功连接到数据库");
        return db;//成功时返回该对象
    }
    else{
        QSqlError error = db.lastError();
        QMessageBox::critical(nullptr,"error", error.text());
    }//检测连接是否成功
}


int get_single_score(QSqlDatabase db, int student_id,QString subject){
    int result;
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


void update_score(QSqlDatabase db,int student_id,QString subject,int new_score){
    QSqlQuery query(db);//指定数据库连接
    //QString sql = QString("UPDATE SCORE SET Chinese=66 WHERE ID=100");
    QString sql=QString("UPDATE SCORE SET %1=%2 WHERE ID=%3").arg(subject).arg(new_score).arg(student_id);
    // query.prepare("UPDATE SCORE SET ?=? WHERE ID=?");
    // query.bindValue(0,subject);
    // query.bindValue(1,new_score);
    // query.bindValue(2,student_id);
    //db.exec(sql);
    // bool ret=db.commit();
    bool ret=query.exec(sql);
    if (!ret) {
        QMessageBox::critical(nullptr,"error","Failed to update data: " + query.lastError().text());
    }//报错信息
    else{
        QMessageBox::information(nullptr,"success","success");
    }
    db.close();
}


bool add_score(QSqlDatabase db, int student_id, QString student_name, VP subject_scores){
    QSqlQuery query(db);
    query.prepare("INSERT INTO SCORE(Name,ID,Chinese,Math,English,Physics,Chemestriy,Biology,Sum)" "VALUES(? ? ? ? ? ? ? ? ?)");
    query.bindValue(0,student_name);
    query.bindValue(1,student_id);
    for(int i=0;i<subject_scores.size();i++){
        if(subject_scores[i].first=="Chinese"){
            query.bindValue(2,subject_scores[i].second);
            continue;
        }
        if(subject_scores[i].first=="Math"){
            query.bindValue(3,subject_scores[i].second);
            continue;
        }
        if(subject_scores[i].first=="English"){
            query.bindValue(4,subject_scores[i].second);
            continue;
        }
        if(subject_scores[i].first=="Physics"){
            query.bindValue(5,subject_scores[i].second);
            continue;
        }
        if(subject_scores[i].first=="Chemestriy"){
            query.bindValue(6,subject_scores[i].second);
            continue;
        }
        if(subject_scores[i].first=="Biology"){
            query.bindValue(7,subject_scores[i].second);
            continue;
        }
        if(subject_scores[i].first=="Sum"){
            query.bindValue(8,subject_scores[i].second);
            continue;
        }
    }
    if(query.exec()){
        QMessageBox::information(nullptr,"success","success");
        return 1;
    }
    else{
        QMessageBox::information(nullptr,"success",query.lastError().text());
        return 0;
    }
    return query.exec();
}


bool delete_student(QSqlDatabase db, int student_id){
    QSqlQuery query(db);
    query.prepare("DELETE FROM SCORE WHERE ID=?");
    query.bindValue(0,student_id);
    if(query.exec()){
        QMessageBox::information(nullptr,"success","success deleted");
        return 1;
    }
    else{
        QMessageBox::information(nullptr,"fail",query.lastError().text());
    }
}
