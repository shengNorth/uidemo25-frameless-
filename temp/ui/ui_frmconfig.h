/********************************************************************************
** Form generated from reading UI file 'frmconfig.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMCONFIG_H
#define UI_FRMCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_frmConfig
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widgetLeft;
    QVBoxLayout *verticalLayout;
    QPushButton *btnConfigSystem;
    QPushButton *btnConfigPort;
    QPushButton *btnConfigDevice;
    QPushButton *btnConfigNode;
    QPushButton *btnConfigMap;
    QPushButton *btnConfigPosition;
    QPushButton *btnConfigUser;
    QPushButton *btnConfigDebug;
    QSpacerItem *verticalSpacer;
    QStackedWidget *stackedWidget;

    void setupUi(QWidget *frmConfig)
    {
        if (frmConfig->objectName().isEmpty())
            frmConfig->setObjectName(QString::fromUtf8("frmConfig"));
        frmConfig->resize(400, 300);
        horizontalLayout = new QHBoxLayout(frmConfig);
        horizontalLayout->setSpacing(1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 1, 0, 0);
        widgetLeft = new QWidget(frmConfig);
        widgetLeft->setObjectName(QString::fromUtf8("widgetLeft"));
        widgetLeft->setMinimumSize(QSize(135, 0));
        widgetLeft->setAutoFillBackground(true);
        verticalLayout = new QVBoxLayout(widgetLeft);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        btnConfigSystem = new QPushButton(widgetLeft);
        btnConfigSystem->setObjectName(QString::fromUtf8("btnConfigSystem"));

        verticalLayout->addWidget(btnConfigSystem);

        btnConfigPort = new QPushButton(widgetLeft);
        btnConfigPort->setObjectName(QString::fromUtf8("btnConfigPort"));

        verticalLayout->addWidget(btnConfigPort);

        btnConfigDevice = new QPushButton(widgetLeft);
        btnConfigDevice->setObjectName(QString::fromUtf8("btnConfigDevice"));

        verticalLayout->addWidget(btnConfigDevice);

        btnConfigNode = new QPushButton(widgetLeft);
        btnConfigNode->setObjectName(QString::fromUtf8("btnConfigNode"));

        verticalLayout->addWidget(btnConfigNode);

        btnConfigMap = new QPushButton(widgetLeft);
        btnConfigMap->setObjectName(QString::fromUtf8("btnConfigMap"));

        verticalLayout->addWidget(btnConfigMap);

        btnConfigPosition = new QPushButton(widgetLeft);
        btnConfigPosition->setObjectName(QString::fromUtf8("btnConfigPosition"));

        verticalLayout->addWidget(btnConfigPosition);

        btnConfigUser = new QPushButton(widgetLeft);
        btnConfigUser->setObjectName(QString::fromUtf8("btnConfigUser"));

        verticalLayout->addWidget(btnConfigUser);

        btnConfigDebug = new QPushButton(widgetLeft);
        btnConfigDebug->setObjectName(QString::fromUtf8("btnConfigDebug"));

        verticalLayout->addWidget(btnConfigDebug);

        verticalSpacer = new QSpacerItem(20, 414, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addWidget(widgetLeft);

        stackedWidget = new QStackedWidget(frmConfig);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));

        horizontalLayout->addWidget(stackedWidget);


        retranslateUi(frmConfig);

        QMetaObject::connectSlotsByName(frmConfig);
    } // setupUi

    void retranslateUi(QWidget *frmConfig)
    {
        frmConfig->setWindowTitle(QApplication::translate("frmConfig", "Form", nullptr));
        btnConfigSystem->setText(QString());
        btnConfigPort->setText(QString());
        btnConfigDevice->setText(QString());
        btnConfigNode->setText(QString());
        btnConfigMap->setText(QString());
        btnConfigPosition->setText(QString());
        btnConfigUser->setText(QString());
        btnConfigDebug->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class frmConfig: public Ui_frmConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMCONFIG_H
