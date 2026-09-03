#ifndef PACIENTE_H
#define PACIENTE_H

#include <QString>
#include <QDateTime>

struct Paciente {
    QString nombre;
    int edad = 0;
    QChar genero;      // 'F', 'M', 'X', etc.
    QString dni;
    QDateTime horaIngreso;

    QString resumen() const {
        return QString("%1, %2 | DNI: %3 | Edad: %4 | Género: %5")
            .arg(nombre, dni)
            .arg(edad)
            .arg(genero);
    }
};

#endif // PACIENTE_H