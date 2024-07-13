#include "input_excel_score.h"
#include "ui_input_excel_score.h"
#include "drag_drop_widget.h"
#include <mysql_connect.h>

Input_excel_score::Input_excel_score(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Input_excel_score)
{
    ui->setupUi(this);

    setFixedSize(800,600);

    QVBoxLayout *excelLayout = new QVBoxLayout(this);
    QHBoxLayout *buttonLayout = new QHBoxLayout();
    buttonLayout->addWidget(ui->input_excel_return);
    buttonLayout->addWidget(ui->input_excel_confirm);

    DragDropWidget *dragDropWidget = new DragDropWidget(this);

    excelLayout->addWidget(dragDropWidget);
    excelLayout->addLayout(buttonLayout);

    ui->centralwidget->setLayout(excelLayout);

    connect(ui->input_excel_return,&QPushButton::clicked,this,&Input_excel_score::close);//EXCEL导入时点击返回，关闭录入成绩界面

    connect(dragDropWidget, &DragDropWidget::fileDropped, this, &Input_excel_score::on_file_dropped);

    connect(ui->input_excel_confirm,&QPushButton::clicked,this,&Input_excel_score::on_input_excel_confirm_clicked);//EXCEL导入时点击确认导入

}

void Input_excel_score::on_input_excel_confirm_clicked(){
    if(!filePath.isEmpty()){
        DB db;
        bool res=db.upload_score(filePath);
        if(res) QMessageBox::information(this,"Success","文件成功上传");
        else QMessageBox::warning(this,"Warning","上传文件失败");
        filePath.clear();
    }
    else{
        QMessageBox::warning(this,"Warning","没有可上传文件");
    }
}

void Input_excel_score::on_file_dropped(const QString &file){
    filePath=file;
    QMessageBox::information(this,"File Dropped","文件即将自："+filePath+"上传");
}

Input_excel_score::~Input_excel_score()
{
    delete ui;
}
