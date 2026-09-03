#include "ingresopacientes.h"
#include "ui_ingresopacientes.h"
#include <QIntValidator>

IngresoPacientes::IngresoPacientes(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::IngresoPacientes)
{
    ui->setupUi(this);

    // Validadores para evitar ingresos no numéricos
    ui->lineEdit_2->setValidator(new QIntValidator(0, 120, this));            // Edad
    ui->lineEdit_4->setValidator(new QIntValidator(1000000, 99999999, this)); // DNI
}

IngresoPacientes::~IngresoPacientes()
{
    delete ui;
}

void IngresoPacientes::on_btnAceptarG_clicked()
{
    //Se recuperan los datos de los campos y se lus guarda en variables del tipo QString
    QString inputNa = ui->lineEdit->text();
    QString inputEdad = ui->lineEdit_2->text();
    QString inputGen = ui->cboxGenero->currentText();
    QString inputDni = ui->lineEdit_4->text();

    //Se comprueba que todos los campos tengan contenido
    if (!inputNa.isEmpty() && !inputEdad.isEmpty() && !inputDni.isEmpty()) {
        accept();
    }
}

void IngresoPacientes::setListgenero(QStringList list)
{
    //Limpia la comboBox y luego le añade los elementos de la lista que fue enviada
    ui->cboxGenero->clear();
    ui->cboxGenero->addItems(list);
}

Paciente IngresoPacientes::getIngresoPacientes()
{
    //Se declara una variable del tipo "Paciente"
    Paciente nuevoPaciente;

    //Se guardan los datos ingresados en los campos del paciente
    nuevoPaciente.nombre = ui->lineEdit->text();
    nuevoPaciente.edad = ui->lineEdit_2->text().toInt();
    nuevoPaciente.genero = ui->cboxGenero->currentText().at(0).toUpper().toLatin1(); // char según consigna
    nuevoPaciente.dni = ui->lineEdit_4->text();

    // Limpiamos los campos para la próxima vez que se abra
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_4->clear();
    ui->cboxGenero->setCurrentIndex(0);

    //Retorna un variable del tipo "Paciente"
    return nuevoPaciente;
}