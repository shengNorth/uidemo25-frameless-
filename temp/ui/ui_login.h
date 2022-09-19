/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *user_name;
    QLabel *label_2;
    QLineEdit *password;
    QLabel *label_3;
    QPushButton *btnres;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(874, 404);
        login->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        widget = new QWidget(login);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(70, 160, 461, 161));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        user_name = new QLineEdit(widget);
        user_name->setObjectName(QString::fromUtf8("user_name"));

        gridLayout->addWidget(user_name, 0, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        password = new QLineEdit(widget);
        password->setObjectName(QString::fromUtf8("password"));
        password->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(password, 1, 1, 1, 1);

        label_3 = new QLabel(login);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(270, 60, 591, 71));
        label_3->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        btnres = new QPushButton(login);
        btnres->setObjectName(QString::fromUtf8("btnres"));
        btnres->setGeometry(QRect(600, 180, 171, 121));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/denglu1.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnres->setIcon(icon);
        label_4 = new QLabel(login);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 0, 311, 51));
        label_4->setStyleSheet(QString::fromUtf8("\n"
"font: 9pt \"Berlin Sans FB\";"));
        label_5 = new QLabel(login);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 50, 251, 91));
        label_5->setStyleSheet(QString::fromUtf8("font: 22pt \"\345\215\216\346\226\207\347\220\245\347\217\200\";"));

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Form", nullptr));
        label->setText(QApplication::translate("login", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        user_name->setText(QApplication::translate("login", "admin", nullptr));
        label_2->setText(QApplication::translate("login", "<html><head/><body><p align=\"right\">\345\257\206\347\240\201\357\274\232</p></body></html>", nullptr));
        password->setText(QApplication::translate("login", "123456", nullptr));
        label_3->setText(QString());
        btnres->setText(QApplication::translate("login", "\347\231\273\345\275\225", nullptr));
#ifndef QT_NO_SHORTCUT
        btnres->setShortcut(QApplication::translate("login", "Return", nullptr));
#endif // QT_NO_SHORTCUT
        label_4->setText(QApplication::translate("login", "<html><head/><body><p><span style=\" font-size:22pt;\">User Login</span></p></body></html>", nullptr));
        label_5->setText(QApplication::translate("login", "<html><head/><body><p><span style=\" font-size:28pt; font-weight:600;\">\347\224\250 \346\210\267 \347\231\273 \345\275\225</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
