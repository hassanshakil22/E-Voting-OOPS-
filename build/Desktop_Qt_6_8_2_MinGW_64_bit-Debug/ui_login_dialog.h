/********************************************************************************
** Form generated from reading UI file 'login_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_DIALOG_H
#define UI_LOGIN_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Login_dialog
{
public:
    QLabel *label;

    void setupUi(QDialog *Login_dialog)
    {
        if (Login_dialog->objectName().isEmpty())
            Login_dialog->setObjectName("Login_dialog");
        Login_dialog->resize(400, 300);
        label = new QLabel(Login_dialog);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 60, 201, 181));
        label->setStyleSheet(QString::fromUtf8("font-size:20px\n"
""));

        retranslateUi(Login_dialog);

        QMetaObject::connectSlotsByName(Login_dialog);
    } // setupUi

    void retranslateUi(QDialog *Login_dialog)
    {
        Login_dialog->setWindowTitle(QCoreApplication::translate("Login_dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Login_dialog", "This is the login Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login_dialog: public Ui_Login_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_DIALOG_H
