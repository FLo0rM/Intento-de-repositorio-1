#ifndef INGRESOPACIENTES_H
#define INGRESOPACIENTES_H

#include <QDialog>
#include "paciente.h"

namespace Ui {
class IngresoPacientes;
}

class IngresoPacientes : public QDialog
{
    Q_OBJECT

public:
    explicit IngresoPacientes(QWidget *parent = nullptr);
    ~IngresoPacientes();

    // Setters y Getters
    void setListgenero(QStringList list);
    Paciente getIngresoPacientes();

private slots:
    void on_btnAceptarG_clicked();

private:
    Ui::IngresoPacientes *ui;
};

#endif // INGRESOPACIENTES_H
