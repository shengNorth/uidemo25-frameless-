/********************************************************************************
** Form generated from reading UI file 'frmdata.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMDATA_H
#define UI_FRMDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_frmData
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widgetLeft;
    QVBoxLayout *verticalLayout;
    QPushButton *btnDataNode;
    QPushButton *btnDataAlarm;
    QPushButton *btnDataUser;
    QSpacerItem *verticalSpacer;
    QStackedWidget *stackedWidget;

    void setupUi(QWidget *frmData)
    {
        if (frmData->objectName().isEmpty())
            frmData->setObjectName(QString::fromUtf8("frmData"));
        frmData->resize(400, 300);
        horizontalLayout = new QHBoxLayout(frmData);
        horizontalLayout->setSpacing(1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 1, 0, 0);
        widgetLeft = new QWidget(frmData);
        widgetLeft->setObjectName(QString::fromUtf8("widgetLeft"));
        widgetLeft->setMinimumSize(QSize(135, 0));
        widgetLeft->setAutoFillBackground(true);
        verticalLayout = new QVBoxLayout(widgetLeft);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        btnDataNode = new QPushButton(widgetLeft);
        btnDataNode->setObjectName(QString::fromUtf8("btnDataNode"));

        verticalLayout->addWidget(btnDataNode);

        btnDataAlarm = new QPushButton(widgetLeft);
        btnDataAlarm->setObjectName(QString::fromUtf8("btnDataAlarm"));

        verticalLayout->addWidget(btnDataAlarm);

        btnDataUser = new QPushButton(widgetLeft);
        btnDataUser->setObjectName(QString::fromUtf8("btnDataUser"));

        verticalLayout->addWidget(btnDataUser);

        verticalSpacer = new QSpacerItem(20, 414, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addWidget(widgetLeft);

        stackedWidget = new QStackedWidget(frmData);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));

        horizontalLayout->addWidget(stackedWidget);


        retranslateUi(frmData);

        stackedWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(frmData);
    } // setupUi

    void retranslateUi(QWidget *frmData)
    {
        frmData->setWindowTitle(QApplication::translate("frmData", "Form", nullptr));
        btnDataNode->setText(QString());
        btnDataAlarm->setText(QString());
        btnDataUser->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class frmData: public Ui_frmData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMDATA_H
