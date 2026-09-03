#include "mainwindow.h"
#include <QApplication>
#include "login.h"
#include <QFont> //Libreria para modificar la tipografía

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // Configurar la tipografía global para toda la aplicación
    QFont fuente("Arial", 12);
    QApplication::setFont(fuente);

    MainWindow w;
    Login l;

    if (l.exec() == QDialog::Accepted) {
        w.show();
        return a.exec();
    }

    return 0;
}
