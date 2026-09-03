#include "login.h"
#include"ui_login.h"


Login::Login(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
    //Agrego usuarios validados(usuario, contraseña)
    users.insert("grupo4","utnfrh");
}

Login::~Login()
{
    delete ui;
}

void Login::on_btnIngresar_clicked()
{
    //importo datos de QlineEdit
    QString pswLogin;
    QString userLogin;
    pswLogin = ui->inPsw->text();
    userLogin = ui->inUser->text();

    //validacion de datos de usuario
    qDebug()<< users;
    if(users.contains(userLogin)){ //verifica existencia de usuario
        qDebug()<<"Usuario existente";
        qDebug()<<"USER: " << userLogin << "  -existe?: "<< users.contains(userLogin);
        qDebug()<< "PSW: " << pswLogin  <<"   -contrasenia real: " << users.key(userLogin);
        if(users.value(userLogin)== pswLogin){//busca contrasenia en usuario valido y verifica
            qDebug()<<"Contraseña correcta";
            lastUser= userLogin;
            accept(); //Envia senial accept de QDialog
        }
        else{
            qDebug()<<"Contraseña incorrecta";
            ui->inPsw->clear();//Borro texto de QlineEdit para contraseña
            QMessage::warning("Contraseña incorrecta", "La contraseña ingresada es incorrecta");
        }
    }
    else{
        qDebug()<<"Usuario no existente";
        ui->inPsw->clear();//Borro texto de QLineEdit para contrasenia
        ui->inUser->selectAll();//seleccion QLineEdit de usuario para indicar que debe cambiarse
    }
}

QString Login::getUserLogin(){
    return lastUser;
}
