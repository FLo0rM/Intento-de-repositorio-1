#include "mainwindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Reservo memoria
    uiWinIngresoPacientes = new IngresoPacientes(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
//999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999
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
    //Limpiamos la lista para redibujarla desde cero
    ui->listMovimientos_1->clear();

    if (!pacientes.isEmpty()) {
        Paciente pacientePop = pacientes.front();

        updateEspera();

        // Muestra los datos del próximo sin sacarlo de la COLA
        QString info = pacientePop.nombre + " (DNI: " + pacientePop.dni + ")";
        ui->listMovimientos_1->addItem(info);

        // Volvemos a listar la cola abajo con el mismo bucle
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
    //Limpiamos la lista para redibujarla desde cero
    ui->listMovimientos_1->clear();

    if (!pacientes.isEmpty()) {//Comprueba si la cola esta vacia

        Paciente pacienteAtendido = pacientes.dequeue(); //El primer elemento de la cola es expulsado y guardado en una variable
        atendidos.enqueue(pacienteAtendido);//Se guarda el contenido de la variable en la cola


        ui->listMovimientos_1->clear();

        //Mostrar a quién se está atendiendo
        updateAtendido();
        ui->listMovimientos_1->addItem(pacienteAtendido.nombre + " (DNI: " + pacienteAtendido.dni + ")");
        ui->listMovimientos_1->scrollToBottom();

        //Muestra la nueva lista en espera
        ui->listMovimientos_1->addItem("Pacientes en espera: ");

        QQueue<Paciente> copiaCola = pacientes; //Hago una copia de la cola que posee los pacientes sin atender


        if (copiaCola.isEmpty()) { // Validar si la cola de espera quedó vacía
            ui->listMovimientos_1->addItem("  No hay pacientes en espera");
        } else {
            //Muestra el contenido de la cola en la lista
            while (!copiaCola.isEmpty()) {
                Paciente p = copiaCola.dequeue();

                ui->listMovimientos_1->addItem(p.nombre + " (DNI: " + p.dni + ")");
        }
        ui->listMovimientos_1->scrollToBottom();}

    } else {
        ui->listMovimientos_1->addItem("Se atendieron todos los pacientes");
        ui->listMovimientos_1->scrollToBottom();
    }
}

void MainWindow::on_btnAtendidos_clicked()
{
    //Limpia la lista de movimientos 2
    ui->listMovimientos_2->clear();
    //Muestra mensaje sobre los pacientes atendidos en la lista
    lastAtendido();

    QQueue<Paciente> copiaCola2 = atendidos; //Hago una copia de la cola con los pacientes atendidos
    //Muestra en la lista los elementos que contiene la cola de atendidos
    while (!copiaCola2.isEmpty()) { //Comprueba si la cola esta vacia
        Paciente p = copiaCola2.dequeue();
        QString info = p.nombre;
        ui->listMovimientos_2->addItem(info);
        ui->listMovimientos_2->scrollToBottom();
    }
}

void MainWindow::on_btnAnadir_clicked()
{
    uiWinIngresoPacientes->setListgenero({"Femenino", "Masculino", "No binario", "No responde"}); //Agrega a la comboBox del formulario la lista con los géneros

    if (uiWinIngresoPacientes->exec() == QDialog::Accepted) { //En caso que se presione el botón aceptar realiza lo siguiente

        Paciente IngresoPacientesSelect = uiWinIngresoPacientes->getIngresoPacientes();//Guarda en una variable los datos del paciente que devuelve la función
        pacientes.enqueue(IngresoPacientesSelect);//Carga la cola con el paciente

        ui->listMovimientos_1->clear();
        ui->listMovimientos_1->addItem("Pacientes en espera: ");

        QQueue<Paciente> copiaCola = pacientes;//Realiza una copia de la cola que contiene los pacientes
        //Muestra en la lista un string que contiene los datos de los elementos de la cola
        while (!copiaCola.isEmpty()) {
            Paciente p = copiaCola.dequeue();
            QString info = p.nombre + " (DNI: " + p.dni + " - " + QString::number(p.edad) + " años)";
            ui->listMovimientos_1->addItem(info);
        }
    }
}

//Cierra el programa luego de presionar el botón salir
void MainWindow::on_btnSalir_clicked()
{
    this->close();
}
