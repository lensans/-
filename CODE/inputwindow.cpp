#include "inputwindow.h"
#include "ui_inputwindow.h"
#include "input_single_score.h"
#include "input_excel_score.h"

InputWindow::InputWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::InputWindow)
{
    ui->setupUi(this);

    connect(ui->single_input,&QPushButton::clicked,this,&InputWindow::on_btn_single_input_clicked);//点击单个录入成绩按钮，跳入单个录入成绩界面

    connect(ui->excel_input,&QPushButton::clicked,this,&InputWindow::on_btn_excel_input_clicked);//点击EXCEL导入成绩按钮，跳入EXCEL导入成绩界面

    connect(ui->btn_input_return,&QPushButton::clicked,this,&InputWindow::close);//点击返回按钮关闭界面
}

void InputWindow::on_btn_single_input_clicked()//单个录入成绩
{
    Input_single_score *si_ma = new Input_single_score(this);
    si_ma->show();
}

void InputWindow::on_btn_excel_input_clicked()//EXCEL导入成绩
{
    Input_excel_score *ex = new Input_excel_score(this);
    ex->show();
}

InputWindow::~InputWindow()
{
    delete ui;
}
