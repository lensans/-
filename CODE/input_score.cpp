#include "input_score.h"
#include "ui_input_score.h"
#include "drag_drop_widget.h"
#include <mysql_connect.h>

Input_score::Input_score(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Input_score)
{
    ui->setupUi(this);

    QVBoxLayout *excelLayout = new QVBoxLayout(this);
    QHBoxLayout *buttonLayout = new QHBoxLayout();
    buttonLayout->addWidget(ui->input_excel_return);
    buttonLayout->addWidget(ui->input_excel_confirm);

    DragDropWidget *dragDropWidget = new DragDropWidget(this);

    excelLayout->addWidget(dragDropWidget);
    excelLayout->addLayout(buttonLayout);

    ui->excel_input->setLayout(excelLayout);

    connect(ui->input_single_return,&QPushButton::clicked,this,&Input_score::close);//单个录入时点击返回，关闭录入成绩界面

    connect(ui->input_excel_return,&QPushButton::clicked,this,&Input_score::close);//EXCEL导入时点击返回，关闭录入成绩界面

    connect(ui->input_single_confirm,&QPushButton::clicked,this,&Input_score::on_input_single_confirm_clicked);//单个录入时点击确认录入

    connect(dragDropWidget, &DragDropWidget::fileDropped, this, &Input_score::on_file_dropped);

    connect(ui->input_excel_confirm,&QPushButton::clicked,this,&Input_score::on_input_excel_confirm_clicked);//EXCEL导入时点击确认导入

}

void Input_score::on_input_single_confirm_clicked()//单个录入成绩
{
    //从文本框读入要录入的学生姓名和id
    QString student_name = ui->input_name_line->text();
    QString student_id = ui->input_num_line->text();

    VP subject_scores(7);

    //从文本框读入要录入的学科和对应成绩
    subject_scores[0].first = ui->input_Chinese->text();
    subject_scores[0].second = ui->input_Chinese_line->text().toInt();
    subject_scores[1].first = ui->input_math->text();
    subject_scores[1].second = ui->input_math_line->text().toInt();
    subject_scores[2].first = ui->input_English->text();
    subject_scores[2].second = ui->input_English_line->text().toInt();
    subject_scores[3].first = ui->input_physics->text();
    subject_scores[3].second = ui->input_physics_line->text().toInt();
    subject_scores[4].first = ui->input_chemistry->text();
    subject_scores[4].second = ui->input_chemistry_line->text().toInt();
    subject_scores[5].first = ui->input_biology->text();
    subject_scores[5].second = ui->input_biology_line->text().toInt();
    subject_scores[6].first = ui->input_sum->text();
    subject_scores[6].second = ui->input_sum_line->text().toInt();

    DB db;
    db.add_score(student_id, student_name, subject_scores);

}

void Input_score::on_input_excel_confirm_clicked(){
    if(!filePath.isEmpty()){
        DB db;
        db.upload_score(filePath);
        QMessageBox::information(this,"Success","文件成功上传");
        filePath.clear();
    }
    else{
        QMessageBox::warning(this,"Warning","没有可上传文件");
    }
}

void Input_score::on_file_dropped(const QString &file){
    filePath=file;
    QMessageBox::information(this,"File Dropped","文件即将自："+filePath+"上传");
}

Input_score::~Input_score()
{
    delete ui;
}
