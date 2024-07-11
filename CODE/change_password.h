#ifndef CHANGE_PASSWORD_H
#define CHANGE_PASSWORD_H

#include <QMainWindow>

namespace Ui {
class change_password;
}

class change_password : public QMainWindow
{
    Q_OBJECT

public:
    explicit change_password(QWidget *parent = nullptr);

    void on_change_password_confirm_clicked();//点击确认修改密码

    ~change_password();

private:
    Ui::change_password *ui;
};

#endif // CHANGE_PASSWORD_H
