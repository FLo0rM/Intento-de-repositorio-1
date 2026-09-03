#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QHash>
#include <QMessageBox>

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

    //getter
    QString getUserLogin();

private slots:
    void on_btnIngresar_clicked();

private:
    Ui::Login *ui;

    QHash<QString, QString> users;// listado de usuario validos
    QString lastUser;
};

#endif // LOGIN_H
