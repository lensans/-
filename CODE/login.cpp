#include "login.h"
#include "ui_login.h"
#include <QGraphicsDropShadowEffect>

login::login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login)
{
    // 初始化UI界面
    ui->setupUi(this);

    //设置右侧图片
    QPixmap *pix = new QPixmap(":/Desktop/login_02.png");// 创建一个QPixmap对象，用于加载图片
    QSize sz = ui->label_image->size();// 用一个对象sz来获取label_image的大小
    ui->label_image->setPixmap(pix->scaled(sz));// 调整传入图片的大小到label_image的大小，并设置给label_image

    //设置阴影
    QGraphicsDropShadowEffect *shadow = new QGraphicsDropShadowEffect(this);// 创建一个阴影效果对象
    shadow->setOffset(-3, 0);// 设置阴影的偏移量
    shadow->setColor(QColor("#888888"));// 设置阴影的颜色为中等深度的灰色
    shadow->setBlurRadius(30);// 设置阴影的模糊半径
    ui->label_image->setGraphicsEffect(shadow);// 将阴影效果应用到label_image上

    //初始化数据库
    sqlite_Init();
}

login::~login()
{
    delete ui;
}

void sqlite_Init()
{

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("user.db");
    if(!db.open())
    {
        qDebug()<<"open error";// 如果打开失败，输出错误信息
    }
    //create excle
    QString createsql=QString("create table if not exists user(id integer primary key autoincrement,"
                        "username ntext unique not NULL,"
                        "password ntext not NULL)");
    QSqlQuery query;
    if(!query.exec(createsql))// 创建一个QSqlQuery对象用于执行SQL语句
    {
        qDebug()<<"table create error";
    }
    else{
        qDebug()<<"table create success";
    }
}


void login::on_btn_signin_clicked()
{
    sqlite_Init();
    QString username = ui->lineEdit_username->text();// 获取用户名输入框的内容
    QString password = ui->lineEdit_password->text();// 获取密码输入框的内容
    QString sql=QString("select * from user where username='%1' and password='%2'")
            .arg(username).arg(password);
    //创建执行语句对象
    QSqlQuery query(sql);
    //判断执行结果
    if(!query.next())
    {
        qDebug()<<"Login error";
        QMessageBox::information(this,"登录认证","登录失败,账户或者密码错误");

    }
    else
    {
        qDebug()<<"Login success";
        QMessageBox::information(this,"登录认证","登录成功");
        QWidget *w = new QWidget;
        w->show();
        this->close();
    }
}


