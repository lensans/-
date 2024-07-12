#ifndef INPUT_EXCEL_SCORE_H
#define INPUT_EXCEL_SCORE_H

#include <QMainWindow>

namespace Ui {
class Input_excel_score;
}

class Input_excel_score : public QMainWindow
{
    Q_OBJECT

public:
    explicit Input_excel_score(QWidget *parent = nullptr);

    void on_btn_excel_return_clicked();//点击EXCEL导入界面的返回按钮
    void on_input_excel_confirm_clicked();//点击EXCEL导入界面的确认导入按钮
    void on_file_dropped(const QString &file);

    ~Input_excel_score();

private:
    Ui::Input_excel_score *ui;
    QString filePath;
};

#endif // INPUT_EXCEL_SCORE_H
