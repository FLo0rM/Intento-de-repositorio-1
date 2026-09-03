#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ingresopacientes.h"
#include "paciente.h"
#include <QMainWindow>
#include <QQueue>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

    void setUserLogin(QString);

    void updateEspera();
    void updateAtendido();
    void lastAtendido();

private slots:
    void on_btnAnadir_clicked();

    void on_btnSiguiente_clicked();

    void on_btnAtender_clicked();

    void on_btnAtendidos_clicked();

    void addMovimientos(QString msj);

    void on_btnSalir_clicked();

private:
    Ui::MainWindow *ui;
    IngresoPacientes* uiWinIngresoPacientes;

    QQueue<Paciente> pacientes;
    QQueue<Paciente> atendidos;

    QList<QString> movimientos; // listado de movimientos en GUI
};
#endif // MAINWINDOW_H