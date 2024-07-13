#include "signin.h"
#include "ui_signin.h"
#include <mysql_connect.h>
#include "change_password.h"
#include "managerwindow.h"
#include "studentwindow.h"
#include "teacherwindow.h"
#include <QGraphicsDropShadowEffect>
#include"stu_change_password_.h"

signin::signin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::signin)
{
    // 初始化UI界面
    ui->setupUi(this);

    setFixedSize(801,479);

    //设置右侧图片
    QPixmap *pix = new QPixmap(":/signin.png");// 创建一个QPixmap对象，用于加载图片
    QSize sz = ui->label_image->size();// 用一个对象sz来获取label_image的大小
    ui->label_image->setPixmap(pix->scaled(sz));// 调整传入图片的大小到label_image的大小，并设置给label_image

    //设置阴影
    QGraphicsDropShadowEffect *shadow = new QGraphicsDropShadowEffect(this);// 创建一个阴影效果对象
    shadow->setOffset(-3, 0);// 设置阴影的偏移量
    shadow->setColor(QColor("#888888"));// 设置阴影的颜色为中等深度的灰色
    shadow->setBlurRadius(30);// 设置阴影的模糊半径
    ui->label_image->setGraphicsEffect(shadow);// 将阴影效果应用到label_image上

    connect(ui->btn_signin,&QPushButton::clicked,this,&signin::on_btn_signin_clicked);//点击确认登录按钮

}

void signin::on_btn_signin_clicked()//点击确认登录
{
    DB db;
    //从文本框读入姓名和密码
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();
    int res = db.login_check(username, password);
    switch(res){
    case -1:
        QMessageBox::information(this,"Error","请重新输入");
        break;
    case 0:{
        managerwindow *ma_on = new managerwindow();
        ma_on->show();
        break;
    }
    case 1:{
        StudentWindow *st_on = new StudentWindow(username);
        st_on->show();
        break;
    }
    case 2:{
        TeacherWindow *te_on = new TeacherWindow();
        te_on->show();
        break;
    }
    case 3:{
        stu_change_password_ *w3 = new stu_change_password_(student(username));
        w3->show();
        break;
    }
    default:
        break;
    }
    if(res!=3&&res!=-1){
        this->close();
    }
}

signin::~signin()
{
    delete ui;
}
