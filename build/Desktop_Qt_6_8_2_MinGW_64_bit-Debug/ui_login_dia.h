/********************************************************************************
** Form generated from reading UI file 'login_dia.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_DIA_H
#define UI_LOGIN_DIA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_login_screen
{
public:
    QLabel *label;

    void setupUi(QDialog *login_screen)
    {
        if (login_screen->objectName().isEmpty())
            login_screen->setObjectName("login_screen");
        login_screen->resize(400, 300);
        label = new QLabel(login_screen);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 70, 251, 151));
        label->setStyleSheet(QString::fromUtf8("font-size : 30px;\n"
""));

        retranslateUi(login_screen);

        QMetaObject::connectSlotsByName(login_screen);
    } // setupUi

    void retranslateUi(QDialog *login_screen)
    {
        login_screen->setWindowTitle(QCoreApplication::translate("login_screen", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("login_screen", "logged in Screen", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login_screen: public Ui_login_screen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_DIA_H
