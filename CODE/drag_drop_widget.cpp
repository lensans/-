#include "drag_drop_widget.h"

DragDropWidget::DragDropWidget(QWidget *parent):QWidget(parent){
    setAcceptDrops(true);
    //QVBoxLayout *layout=new QVBoxLayout(this);
    //QLabel *label=new QLabel("将Excel文件拖拽到此区域上传",this);
    //label->setAlignment(Qt::AlignCenter);
    //layout->addWidget(label);
    //setLayout(layout);
}

void DragDropWidget::dragEnterEvent(QDragEnterEvent *event){
    if(event->mimeData()->hasUrls()){
        event->acceptProposedAction();
    }
}

void DragDropWidget::dropEvent(QDropEvent *event){
    const QMimeData *mimeData=event->mimeData();
    if(mimeData->hasUrls()){
        QList<QUrl> urlList=mimeData->urls();
        if(!urlList.isEmpty()){
            QString file_path=urlList.first().toLocalFile();
            if(!file_path.isEmpty()){
                emit fileDropped(file_path); // 发射信号
            }
        }
    }
}
