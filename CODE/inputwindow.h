#ifndef INPUTWINDOW_H
#define INPUTWINDOW_H

#include <QMainWindow>

namespace Ui {
class InputWindow;
}

class InputWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit InputWindow(QWidget *parent = nullptr);

    void on_btn_single_input_clicked();//单个录入成绩

    void on_btn_excel_input_clicked();//EXCEL导入成绩

    ~InputWindow();

private:
    Ui::InputWindow *ui;
};

#endif // INPUTWINDOW_H
