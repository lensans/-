#include"mysql_connect.h"
#include <QSqlField>
#include <QSqlRecord>


DB::DB(){
    Init();
}

QSqlDatabase  DB::Init()
{
    db =QSqlDatabase::addDatabase("QMYSQL");//使用qmysql驱动连接数据库
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


int DB::get_single_score(int student_id,QString subject){
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


bool DB::update_score(QString student_id,QString subject,int new_score){
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
        return false;
    }//报错信息
    else{
        return true;
    }
}


bool DB::add_score(QString student_id, QString student_name, VP subject_scores){
    QSqlQuery query1(db);
    query1.prepare("INSERT INTO SCORE (NAME,ID ) VALUES( ?,? )");
    query1.addBindValue(student_name);
    query1.addBindValue(student_id);
    if(query1.exec()){
        for(QPair s:subject_scores){
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
// QString sql = "INSERT INTO SCORE (ID,";
// QString values = "VALUES (" + QString::number(student_id)+", ";
// for (size_t i = 0; i < subject_scores.size(); ++i) {
//     sql += subject_scores[i].first;
//     values += "?";
//     sql += ", ";
//     values += ", ";
// }
// sql += ") ";
// values +=")";
// sql += values;
// query.prepare(sql);
// // 绑定值
// for (int i=0;i<subject_scores.size();i++) {
//     query.bindValue(i,subject_scores[i].second);
// }
// if(query.exec()){
//     return 1;
// }
// else{
//     QMessageBox::information(nullptr,"error",query.lastError().text());
//     return 0;
// }
// query.prepare("INSERT INTO SCORE(Name,ID,Chinese,Math,English,Physics,Chemestriy,Biology,Sum) VALUES(? ? ? ? ? ? ? ? ?)");
// query.bindValue(0,student_name);
// query.bindValue(1,student_id);
// for(int i=0;i<subject_scores.size();i++){
//     if(subject_scores[i].first=="Chinese"){
//         query.bindValue(2,subject_scores[i].second);
//         continue;
//     }
//     if(subject_scores[i].first=="Math"){
//         query.bindValue(3,subject_scores[i].second);
//         continue;
//     }
//     if(subject_scores[i].first=="English"){
//         query.bindValue(4,subject_scores[i].second);
//         continue;
//     }
//     if(subject_scores[i].first=="Physics"){
//         query.bindValue(5,subject_scores[i].second);
//         continue;
//     }
//     if(subject_scores[i].first=="Chemestriy"){
//         query.bindValue(6,subject_scores[i].second);
//         continue;
//     }
//     if(subject_scores[i].first=="Biology"){
//         query.bindValue(7,subject_scores[i].second);
//         continue;
//     }
//     if(subject_scores[i].first=="Sum"){
//         query.bindValue(8,subject_scores[i].second);
//         continue;
//     }
// }
// if(query.exec()){
//     QMessageBox::information(nullptr,"success","success");
//     return 1;
// }
// else{
//     QMessageBox::information(nullptr,"success",query.lastError().text());
//     return 0;
// }
// return query.exec();


bool DB::delete_student(int student_id){
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

void DB::get_all_score(int student_id,VP& subject_score){
    QSqlQuery query(db);
    query.prepare("SELECT Chinese,Math,English,Physics,Chemestriy,Biology,Sum FROM SCORE WHERE ID=?");
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
    }
    else{
        QMessageBox::critical(nullptr,"error",query.lastError().text());
    }
}

int DB::login_check(QString username, QString password){
    QSqlQuery query(db);
    //查询数据库中是否存在某个用户，其用户名为username，密码为password
    query.prepare("SELECT COUNT(*) FROM users WHERE username = :username AND password = :password");
    query.bindValue(":username",username);
    query.bindValue(":password",password);
    if(!query.exec()){
        QMessageBox::critical(nullptr,"error",query.lastError().text());
        return -1;
    }
    if(query.next() && query.value(0).toInt()==1){
        QSqlQuery query1(db);
        query1.prepare("SELECT identity FROM USER WHERE username=:username AND password=:password");
        query1.bindValue(":user",username);
        query1.bindValue(":password",password);
        if(!query.exec()){
            QMessageBox::critical(nullptr,"error",query.lastError().text());
            return -1;
        }
        if(query1.next()){
            int identity=query1.value(0).toInt();
            return identity;
        }
    }else{
        return -1;
    }
}
bool DB::revise_password(Qstring username,QString new_password){
    QSqlQuery query(db);
    QString sql=QString("UPDATE USER SET password=%1 WHERE username=%2").arg(new_password).arg(username);
    if(!query.exec(sql)){
        QMessageBox::Critical(nullptr,"error","密码更新失败："+query.lastError().text());
        return 0;
    }
    else{
        return 1;
    }
}
