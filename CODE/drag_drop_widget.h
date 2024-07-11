#ifndef DRAG_DROP_WIDGET_H
#define DRAG_DROP_WIDGET_H

#include <QDragEnterEvent>
#include <QDropEvent>
#include <QMimeData>
#include <QMessageBox>
#include <QVBoxLayout>
#include <QLabel>
#include "mysql_connect.h"

class DragDropWidget: public QWidget{
    Q_OBJECT
public:
    DragDropWidget(QWidget *parent = nullptr);

protected:
    void dragEnterEvent(QDragEnterEvent *event) override;
    void dropEvent(QDropEvent *event) override;

signals:
    void fileDropped(const QString &filePath);
};

#endif // DRAG_DROP_WIDGET_H
