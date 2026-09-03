/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *inUser;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *inPsw;
    QPushButton *btnIngresar;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(400, 319);
        Login->setStyleSheet(QString::fromUtf8("#Login{background-color: rgb(22, 142, 197);}"));
        gridLayout = new QGridLayout(Login);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_3 = new QLabel(Login);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("image: url(:/imagenes/login.png);"));

        verticalLayout->addWidget(label_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(Login);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        inUser = new QLineEdit(Login);
        inUser->setObjectName("inUser");
        inUser->setCursorMoveStyle(Qt::CursorMoveStyle::VisualMoveStyle);
        inUser->setClearButtonEnabled(true);

        horizontalLayout->addWidget(inUser);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 5);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(Login);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        inPsw = new QLineEdit(Login);
        inPsw->setObjectName("inPsw");
        inPsw->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        inPsw->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);

        horizontalLayout_2->addWidget(inPsw);

        horizontalLayout_2->setStretch(0, 2);
        horizontalLayout_2->setStretch(1, 5);

        verticalLayout->addLayout(horizontalLayout_2);

        btnIngresar = new QPushButton(Login);
        btnIngresar->setObjectName("btnIngresar");

        verticalLayout->addWidget(btnIngresar);

        verticalLayout->setStretch(0, 5);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 1);

        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Ingreso de Usuario", nullptr));
        label_3->setText(QString());
        label->setText(QCoreApplication::translate("Login", "Usuario", nullptr));
        inUser->setInputMask(QString());
        inUser->setPlaceholderText(QString());
        label_2->setText(QCoreApplication::translate("Login", "Contrase\303\261a", nullptr));
        inPsw->setInputMask(QString());
        btnIngresar->setText(QCoreApplication::translate("Login", "Ingresar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
