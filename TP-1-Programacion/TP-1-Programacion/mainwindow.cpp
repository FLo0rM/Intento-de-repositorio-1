#include "mainwindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /* Reservo memoria pasando this para evitar fugas */
    uiWinIngresoPacientes = new IngresoPacientes(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setUserLogin(QString usuario)
{
    setWindowTitle("Guardia Hospitalaria - Operador: " + usuario);
}

void MainWindow::addMovimientos(QString msj)
{
    ui->listMovimientos_1->addItem(msj);
    ui->listMovimientos_1->scrollToBottom();
}

void MainWindow::updateEspera()
{
    ui->listMovimientos_1->addItem("Próximo paciente a ser atendido: ");
    ui->listMovimientos_1->scrollToBottom();
}

void MainWindow::updateAtendido()
{
    ui->listMovimientos_1->addItem("Paciente en consulta: ");
    ui->listMovimientos_1->scrollToBottom();
}

void MainWindow::lastAtendido()
{
    ui->listMovimientos_2->addItem("Pacientes atendidos: ");
    ui->listMovimientos_2->scrollToBottom();
}

void MainWindow::on_btnSiguiente_clicked()
{
    // 1. Limpiamos la lista para redibujarla desde cero
    ui->listMovimientos_1->clear();

    if (!pacientes.isEmpty()) {
        Paciente pacientePop = pacientes.front();

        updateEspera();

        // Muestra los datos del próximo sin desencolar
        QString info = pacientePop.nombre + " (DNI: " + pacientePop.dni + ")";
        ui->listMovimientos_1->addItem(info);

        // Volvemos a listar la cola abajo con el mismo bucle
        ui->listMovimientos_1->addItem("");
        ui->listMovimientos_1->addItem("Pacientes en espera: ");
        QQueue<Paciente> copiaCola = pacientes;
        while (!copiaCola.isEmpty()) {
            Paciente p = copiaCola.dequeue();
            QString item = p.nombre + " (DNI: " + p.dni + " - " + QString::number(p.edad) + " años)";
            ui->listMovimientos_1->addItem(item);
        }

        ui->listMovimientos_1->scrollToBottom();
    } else {
        ui->listMovimientos_1->addItem("No hay pacientes por atender");
        ui->listMovimientos_1->scrollToBottom();
    }
}

void MainWindow::on_btnAtender_clicked()
{
    if (!pacientes.isEmpty()) {
        Paciente pacienteAtendido = pacientes.dequeue();
        atendidos.enqueue(pacienteAtendido);

        // 1. Redibujar lista de espera (sacar visualmente al paciente)
        ui->listMovimientos_1->clear();
        ui->listMovimientos_1->addItem("Pacientes en espera: ");
        QQueue<Paciente> copiaCola = pacientes;
        while (!copiaCola.isEmpty()) {
            Paciente p = copiaCola.dequeue();
            ui->listMovimientos_1->addItem(p.nombre + " (DNI: " + p.dni + ")");
        }

        // 2. Mostrar a quién se está atendiendo
        updateAtendido();
        ui->listMovimientos_1->addItem(pacienteAtendido.nombre + " (DNI: " + pacienteAtendido.dni + ")");
        ui->listMovimientos_1->scrollToBottom();
    } else {
        ui->listMovimientos_1->addItem("Se atendieron todos los pacientes");
        ui->listMovimientos_1->scrollToBottom();
    }
}

void MainWindow::on_btnAtendidos_clicked()
{
    ui->listMovimientos_2->clear();
    lastAtendido();

    QQueue<Paciente> copiaCola2 = atendidos;
    while (!copiaCola2.isEmpty()) {
        Paciente p = copiaCola2.dequeue();
        QString info = p.nombre + " (DNI: " + p.dni + " - Género: " + QChar(p.genero) + ")";
        ui->listMovimientos_2->addItem(info);
        ui->listMovimientos_2->scrollToBottom();
    }
}

void MainWindow::on_btnAnadir_clicked()
{
    uiWinIngresoPacientes->setListgenero({"Femenino", "Masculino", "No binario", "No responde"});

    if (uiWinIngresoPacientes->exec() == QDialog::Accepted) {
        Paciente IngresoPacientesSelect = uiWinIngresoPacientes->getIngresoPacientes();
        pacientes.enqueue(IngresoPacientesSelect);

        ui->listMovimientos_1->clear();
        ui->listMovimientos_1->addItem("Pacientes en espera: ");

        QQueue<Paciente> copiaCola = pacientes;
        while (!copiaCola.isEmpty()) {
            Paciente p = copiaCola.dequeue();
            QString info = p.nombre + " (DNI: " + p.dni + " - " + QString::number(p.edad) + " años)";
            ui->listMovimientos_1->addItem(info);
        }
    }
}

void MainWindow::on_btnSalir_clicked()
{
    this->close();
}
