#include "input_score.h"
#include <QMainWindow>
#include <QWidget>
#include <QObject>

namespace Ui {
class managerwindow;
}

class managerwindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit managerwindow(QWidget *parent = nullptr);
    void on_btn_input_clicked();
    void on_btn_revise_clicked();
    void on_btn_check_clicked();
    //void on_btn_total_clicked();
    ~managerwindow();

public slots:
    void on_btn_input_clicked();
    void on_btn_revise_clicked();
    void on_btn_check_clicked();

private:
    Ui::managerwindow *ui;

};

#endif // MANAGERWINDOW_H
