/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *btnAnadir;
    QPushButton *btnSiguiente;
    QPushButton *btnAtender;
    QListWidget *listMovimientos_1;
    QHBoxLayout *horizontalLayout_2;
    QListWidget *listMovimientos_2;
    QPushButton *btnSalir;
    QPushButton *btnAtendidos;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(899, 418);
        MainWindow->setMouseTracking(false);
        MainWindow->setTabletTracking(false);
        MainWindow->setAcceptDrops(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(30, 10, 791, 64));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(50, 100, 731, 261));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        btnAnadir = new QPushButton(horizontalLayoutWidget_3);
        btnAnadir->setObjectName("btnAnadir");

        verticalLayout->addWidget(btnAnadir);

        btnSiguiente = new QPushButton(horizontalLayoutWidget_3);
        btnSiguiente->setObjectName("btnSiguiente");

        verticalLayout->addWidget(btnSiguiente);

        btnAtender = new QPushButton(horizontalLayoutWidget_3);
        btnAtender->setObjectName("btnAtender");

        verticalLayout->addWidget(btnAtender);


        horizontalLayout->addLayout(verticalLayout);

        listMovimientos_1 = new QListWidget(horizontalLayoutWidget_3);
        listMovimientos_1->setObjectName("listMovimientos_1");

        horizontalLayout->addWidget(listMovimientos_1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        listMovimientos_2 = new QListWidget(horizontalLayoutWidget_3);
        listMovimientos_2->setObjectName("listMovimientos_2");

        horizontalLayout_2->addWidget(listMovimientos_2);

        btnSalir = new QPushButton(horizontalLayoutWidget_3);
        btnSalir->setObjectName("btnSalir");

        horizontalLayout_2->addWidget(btnSalir);

        btnAtendidos = new QPushButton(horizontalLayoutWidget_3);
        btnAtendidos->setObjectName("btnAtendidos");

        horizontalLayout_2->addWidget(btnAtendidos);


        horizontalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Gesti\303\263n de guardia", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Usuario", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "grupo4", nullptr));
        btnAnadir->setText(QCoreApplication::translate("MainWindow", "A\303\261adir", nullptr));
        btnSiguiente->setText(QCoreApplication::translate("MainWindow", "Siguiente", nullptr));
        btnAtender->setText(QCoreApplication::translate("MainWindow", "Atender", nullptr));
        btnSalir->setText(QCoreApplication::translate("MainWindow", "Salir", nullptr));
        btnAtendidos->setText(QCoreApplication::translate("MainWindow", "Atendidos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
