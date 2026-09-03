/********************************************************************************
** Form generated from reading UI file 'ingresopacientes.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INGRESOPACIENTES_H
#define UI_INGRESOPACIENTES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_IngresoPacientes
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QComboBox *cboxGenero;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QPushButton *btnAceptarG;

    void setupUi(QDialog *IngresoPacientes)
    {
        if (IngresoPacientes->objectName().isEmpty())
            IngresoPacientes->setObjectName("IngresoPacientes");
        IngresoPacientes->resize(400, 300);
        gridLayout = new QGridLayout(IngresoPacientes);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(IngresoPacientes);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(IngresoPacientes);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 4);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(IngresoPacientes);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        lineEdit_2 = new QLineEdit(IngresoPacientes);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setContextMenuPolicy(Qt::ContextMenuPolicy::NoContextMenu);
        lineEdit_2->setStyleSheet(QString::fromUtf8(""));
        lineEdit_2->setMaxLength(32767);

        horizontalLayout_2->addWidget(lineEdit_2);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 4);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(IngresoPacientes);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);

        cboxGenero = new QComboBox(IngresoPacientes);
        cboxGenero->setObjectName("cboxGenero");
        cboxGenero->setContextMenuPolicy(Qt::ContextMenuPolicy::CustomContextMenu);

        horizontalLayout_3->addWidget(cboxGenero);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 4);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(IngresoPacientes);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        lineEdit_4 = new QLineEdit(IngresoPacientes);
        lineEdit_4->setObjectName("lineEdit_4");

        horizontalLayout_4->addWidget(lineEdit_4);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 4);

        verticalLayout->addLayout(horizontalLayout_4);

        btnAceptarG = new QPushButton(IngresoPacientes);
        btnAceptarG->setObjectName("btnAceptarG");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnAceptarG->sizePolicy().hasHeightForWidth());
        btnAceptarG->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(btnAceptarG);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(IngresoPacientes);

        QMetaObject::connectSlotsByName(IngresoPacientes);
    } // setupUi

    void retranslateUi(QDialog *IngresoPacientes)
    {
        IngresoPacientes->setWindowTitle(QCoreApplication::translate("IngresoPacientes", "Ingreso de Pacientes", nullptr));
        label->setText(QCoreApplication::translate("IngresoPacientes", "Nombre y Apellido", nullptr));
        lineEdit->setInputMask(QString());
        label_3->setText(QCoreApplication::translate("IngresoPacientes", "Edad", nullptr));
        lineEdit_2->setInputMask(QString());
        lineEdit_2->setPlaceholderText(QString());
        label_2->setText(QCoreApplication::translate("IngresoPacientes", "G\303\251nero", nullptr));
        label_4->setText(QCoreApplication::translate("IngresoPacientes", "DNI", nullptr));
        lineEdit_4->setInputMask(QString());
        btnAceptarG->setText(QCoreApplication::translate("IngresoPacientes", "Aceptar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IngresoPacientes: public Ui_IngresoPacientes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INGRESOPACIENTES_H
