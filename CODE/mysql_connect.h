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

#include<vector>

typedef std::vector<QPair<QString,int>> VP;
//用于初始化连接云数据库 失败时返回Null。

QSqlDatabase Initdb();

//登录检查--待实现

bool login_check(QSqlDatabase db, QString user, QString password,int identity);//identity为0表示管理员 1表示学生 2表示老师 其他数字返回false

//返回某学生的单科成绩-已实现

int get_single_score(QSqlDatabase db,int student_id,QString subject);

//将一个学生的科目和成绩保存在一个pair数组中返回-待实现

void get_all_score(QSqlDatabase db,QString student_name,QPair<QString,int>& subject_score);

//修改某个学生某科目的成绩-已实现

void update_score(QSqlDatabase db,int student_id,QString subject,int new_score);

//将excel文件上传到数据库，批量上传可用for循环-待实现

void upload_score(QSqlDatabase db,QString file_path);

//批量获取学生的单科成绩，保存在vector中返回-已实现
void get_students_scores(QSqlDatabase db,int satrt_student_id,int end_student_id,QString subject,VP& scores);


//删除某个学生-已实现
bool delete_student(QSqlDatabase db,int student_id);


//添加学生信息--已实现
bool add_score(QSqlDatabase db, int student_id, QString student_name, VP subject_scores);


#endif // MYSQL_CONNECT_H

