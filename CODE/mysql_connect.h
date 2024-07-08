#ifndef MYSQL_CONNECT_H

#define MYSQL_CONNECT_H

#include <QSql>

#include <QSqlQueryModel>

#include <QSqlDatabase>

#include <QSqlQuery>

#include<QMessageBox>

#include<QSqlError>

#include<utility>

#include<QString>

#include "xlsxdocument.h"

#include "xlsxchartsheet.h"

#include "xlsxcellrange.h"

#include "xlsxchart.h"

#include "xlsxrichstring.h"

#include "xlsxworkbook.h"

//用于初始化连接云数据库 失败时返回Null。

QSqlDatabase Initdb();

//登录检查

bool login_check(QSqlDatabase db, QString user, QString password,int identity);//identity为0表示管理员 1表示学生 2表示老师 其他数字返回false

//返回某学生的单科成绩

int get_single_score(QSqlDatabase db,int student_id,QString subject);

//将一个学生的科目和成绩保存在一个pair数组中返回

void get_all_score(QSqlDatabase db,QString student_name,QPair<QString,int>& subject_score);

//修改某个学生某科目的成绩

void update_score(QSqlDatabase db,int student_id,QString subject,int new_score);

//将excel文件上传到数据库，批量上传可用for循环

void upload_score(QSqlDatabase db,QString file_path);

//批量获取学生的单科成绩，保存在vector中返回
void get_many_scores(QSqlDatabase db,int satrt_student_id,int end_student_id,QString sbject,vector<int>& scores);




#endif // MYSQL_CONNECT_H
