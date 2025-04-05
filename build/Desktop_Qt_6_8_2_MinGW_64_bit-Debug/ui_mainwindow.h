/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QKeySequenceEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label;
    QSlider *horizontalSlider;
    QProgressBar *progressBar;
    QPushButton *warn_btn;
    QPushButton *btn_2;
    QPushButton *btn_3;
    QPushButton *login_dialog;
    QPushButton *login_win;
    QComboBox *usertypeBox;
    QLineEdit *nameField;
    QLineEdit *passField;
    QSpinBox *ageField;
    QDoubleSpinBox *doubleSpinBox;
    QTimeEdit *timeEdit;
    QDateEdit *dateEdit;
    QScrollBar *horizontalScrollBar;
    QKeySequenceEdit *keySequenceEdit;
    QPushButton *fetchButton;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *nameLabel;
    QLabel *passLabel;
    QLabel *ageLabel;
    QLabel *timeLabel;
    QLabel *userTypelabel;
    QLabel *dateLabel;
    QLabel *scrollLabel;
    QLabel *shortcutLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1322, 690);
        MainWindow->setCursor(QCursor(Qt::CursorShape::BusyCursor));
        MainWindow->setStyleSheet(QString::fromUtf8("font-size : 20px"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 10, 251, 321));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setGeometry(QRect(520, 20, 251, 81));
        horizontalSlider->setOrientation(Qt::Orientation::Horizontal);
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(780, 10, 221, 91));
        progressBar->setValue(24);
        warn_btn = new QPushButton(centralwidget);
        warn_btn->setObjectName("warn_btn");
        warn_btn->setGeometry(QRect(500, 120, 211, 91));
        warn_btn->setCursor(QCursor(Qt::CursorShape::BusyCursor));
        warn_btn->setStyleSheet(QString::fromUtf8("color : Blue"));
        btn_2 = new QPushButton(centralwidget);
        btn_2->setObjectName("btn_2");
        btn_2->setGeometry(QRect(720, 120, 211, 91));
        btn_2->setCursor(QCursor(Qt::CursorShape::BusyCursor));
        btn_2->setStyleSheet(QString::fromUtf8("color : Blue"));
        btn_3 = new QPushButton(centralwidget);
        btn_3->setObjectName("btn_3");
        btn_3->setGeometry(QRect(1020, 20, 211, 91));
        btn_3->setCursor(QCursor(Qt::CursorShape::BusyCursor));
        btn_3->setStyleSheet(QString::fromUtf8("color : Blue;\n"
"font-size : 30px;\n"
""));
        login_dialog = new QPushButton(centralwidget);
        login_dialog->setObjectName("login_dialog");
        login_dialog->setGeometry(QRect(950, 130, 131, 61));
        login_win = new QPushButton(centralwidget);
        login_win->setObjectName("login_win");
        login_win->setGeometry(QRect(1090, 130, 131, 61));
        login_win->setStyleSheet(QString::fromUtf8("font size: 20px"));
        usertypeBox = new QComboBox(centralwidget);
        usertypeBox->addItem(QString());
        usertypeBox->addItem(QString());
        usertypeBox->addItem(QString());
        usertypeBox->addItem(QString());
        usertypeBox->addItem(QString());
        usertypeBox->setObjectName("usertypeBox");
        usertypeBox->setGeometry(QRect(290, 50, 151, 51));
        nameField = new QLineEdit(centralwidget);
        nameField->setObjectName("nameField");
        nameField->setGeometry(QRect(280, 250, 201, 41));
        passField = new QLineEdit(centralwidget);
        passField->setObjectName("passField");
        passField->setGeometry(QRect(280, 300, 201, 41));
        passField->setEchoMode(QLineEdit::EchoMode::Password);
        ageField = new QSpinBox(centralwidget);
        ageField->setObjectName("ageField");
        ageField->setGeometry(QRect(270, 350, 111, 41));
        doubleSpinBox = new QDoubleSpinBox(centralwidget);
        doubleSpinBox->setObjectName("doubleSpinBox");
        doubleSpinBox->setGeometry(QRect(390, 350, 131, 61));
        timeEdit = new QTimeEdit(centralwidget);
        timeEdit->setObjectName("timeEdit");
        timeEdit->setGeometry(QRect(270, 420, 241, 31));
        dateEdit = new QDateEdit(centralwidget);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(270, 470, 171, 31));
        horizontalScrollBar = new QScrollBar(centralwidget);
        horizontalScrollBar->setObjectName("horizontalScrollBar");
        horizontalScrollBar->setGeometry(QRect(530, 240, 291, 20));
        horizontalScrollBar->setOrientation(Qt::Orientation::Horizontal);
        keySequenceEdit = new QKeySequenceEdit(centralwidget);
        keySequenceEdit->setObjectName("keySequenceEdit");
        keySequenceEdit->setGeometry(QRect(520, 480, 113, 26));
        fetchButton = new QPushButton(centralwidget);
        fetchButton->setObjectName("fetchButton");
        fetchButton->setGeometry(QRect(340, 530, 211, 29));
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(750, 280, 531, 281));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        nameLabel = new QLabel(verticalLayoutWidget_2);
        nameLabel->setObjectName("nameLabel");
        nameLabel->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        nameLabel->setWordWrap(false);

        verticalLayout_2->addWidget(nameLabel);

        passLabel = new QLabel(verticalLayoutWidget_2);
        passLabel->setObjectName("passLabel");
        passLabel->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        passLabel->setWordWrap(false);

        verticalLayout_2->addWidget(passLabel);

        ageLabel = new QLabel(verticalLayoutWidget_2);
        ageLabel->setObjectName("ageLabel");

        verticalLayout_2->addWidget(ageLabel);

        timeLabel = new QLabel(verticalLayoutWidget_2);
        timeLabel->setObjectName("timeLabel");
        timeLabel->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        timeLabel->setWordWrap(false);

        verticalLayout_2->addWidget(timeLabel);

        userTypelabel = new QLabel(verticalLayoutWidget_2);
        userTypelabel->setObjectName("userTypelabel");
        userTypelabel->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        userTypelabel->setWordWrap(false);

        verticalLayout_2->addWidget(userTypelabel);

        dateLabel = new QLabel(verticalLayoutWidget_2);
        dateLabel->setObjectName("dateLabel");

        verticalLayout_2->addWidget(dateLabel);

        scrollLabel = new QLabel(verticalLayoutWidget_2);
        scrollLabel->setObjectName("scrollLabel");

        verticalLayout_2->addWidget(scrollLabel);

        shortcutLabel = new QLabel(verticalLayoutWidget_2);
        shortcutLabel->setObjectName("shortcutLabel");

        verticalLayout_2->addWidget(shortcutLabel);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1322, 33));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Hassan !", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "IS a ", nullptr));
        warn_btn->setText(QCoreApplication::translate("MainWindow", "Warning", nullptr));
        btn_2->setText(QCoreApplication::translate("MainWindow", "Warning", nullptr));
        btn_3->setText(QCoreApplication::translate("MainWindow", "Custom Btn", nullptr));
        login_dialog->setText(QCoreApplication::translate("MainWindow", "login dialog", nullptr));
        login_win->setText(QCoreApplication::translate("MainWindow", "login window", nullptr));
        usertypeBox->setItemText(0, QCoreApplication::translate("MainWindow", "user", nullptr));
        usertypeBox->setItemText(1, QCoreApplication::translate("MainWindow", "admin", nullptr));
        usertypeBox->setItemText(2, QCoreApplication::translate("MainWindow", "voter", nullptr));
        usertypeBox->setItemText(3, QCoreApplication::translate("MainWindow", "candidage", nullptr));
        usertypeBox->setItemText(4, QCoreApplication::translate("MainWindow", "PM", nullptr));

        nameField->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter your name", nullptr));
        passField->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter your password", nullptr));
        fetchButton->setText(QCoreApplication::translate("MainWindow", "fetch", nullptr));
        nameLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        passLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        ageLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        timeLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        userTypelabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        dateLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        scrollLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        shortcutLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
