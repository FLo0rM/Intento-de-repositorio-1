#include "login.h"
#include "ui_login.h"
#include <QMessageBox>

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
    //importo datos de QlineEdit y los guardo en sus variables
    QString pswLogin;
    QString userLogin;
    pswLogin = ui->inPsw->text();
    userLogin = ui->inUser->text();

    //Validacion de datos de usuario
    qDebug()<< users;
    if(users.contains(userLogin)){//Verifica existencia de usuario
        //Muestra por consola los siguientes mensajes a la hora de ingresar el usuario
        qDebug()<<"Usuario existente";
        qDebug()<<"USER: " << userLogin << "  -existe?: "<< users.contains(userLogin);
        qDebug()<< "PSW: " << pswLogin  <<"   -contrasenia real: " << users.key(userLogin);

        if(users.value(userLogin)== pswLogin){//Busca contrasenia en usuario valido y verifica
            qDebug()<<"Contraseña correcta";
            lastUser= userLogin;
            accept(); //Envia senial accept de QDialog
        }
        else{
            qDebug()<<"Contraseña incorrecta";
            ui->inPsw->clear();//Borro texto de QlineEdit para contraseña
            QMessageBox::warning(this,"Contraseña incorrecta", "La contraseña ingresada no es correcta.");
        }
    }
    else{
        qDebug()<<"Usuario no existente";
        ui->inPsw->clear();//Borro texto de QLineEdit para contrasenia
        ui->inUser->selectAll();//Seleccion QLineEdit de usuario para indicar que debe cambiarse
        QMessageBox::warning(this,"Usuario Incorrecto", "El usuario ingresado no existe");
    }
}
//Recupera el ultimo ususario
QString Login::getUserLogin(){
    return lastUser;
}
