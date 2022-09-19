/********************************************************************************
** Form generated from reading UI file 'frmmain.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMMAIN_H
#define UI_FRMMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "bottomwidget.h"

QT_BEGIN_NAMESPACE

class Ui_frmMain
{
public:
    QVBoxLayout *verticalLayout_3;
    QWidget *widgetMain;
    QVBoxLayout *verticalLayout;
    QWidget *widgetTop;
    QGridLayout *gridLayout;
    QWidget *widgetBtn;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnViewDevice;
    QPushButton *btnViewMap;
    QPushButton *btnViewData;
    QPushButton *btnData;
    QPushButton *btnConfig;
    QWidget *widgetMenu;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnMenu_Min;
    QPushButton *btnMenu_Max;
    QPushButton *btnMenu_Close;
    QWidget *widgetLogo;
    QGridLayout *gridLayout_2;
    QLabel *labLogoEn;
    QLabel *labLogoCn;
    QLabel *labLogoBg;
    QStackedWidget *stackedWidget;
    BottomWidget *bottomWidget;

    void setupUi(QWidget *frmMain)
    {
        if (frmMain->objectName().isEmpty())
            frmMain->setObjectName(QString::fromUtf8("frmMain"));
        frmMain->resize(1000, 720);
        verticalLayout_3 = new QVBoxLayout(frmMain);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        widgetMain = new QWidget(frmMain);
        widgetMain->setObjectName(QString::fromUtf8("widgetMain"));
        verticalLayout = new QVBoxLayout(widgetMain);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(1, 1, 1, 1);
        widgetTop = new QWidget(widgetMain);
        widgetTop->setObjectName(QString::fromUtf8("widgetTop"));
        widgetTop->setMinimumSize(QSize(0, 80));
        widgetTop->setMaximumSize(QSize(16777215, 80));
        gridLayout = new QGridLayout(widgetTop);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widgetBtn = new QWidget(widgetTop);
        widgetBtn->setObjectName(QString::fromUtf8("widgetBtn"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widgetBtn->sizePolicy().hasHeightForWidth());
        widgetBtn->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(widgetBtn);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 5, -1, 10);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        btnViewDevice = new QPushButton(widgetBtn);
        btnViewDevice->setObjectName(QString::fromUtf8("btnViewDevice"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnViewDevice->sizePolicy().hasHeightForWidth());
        btnViewDevice->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(btnViewDevice);

        btnViewMap = new QPushButton(widgetBtn);
        btnViewMap->setObjectName(QString::fromUtf8("btnViewMap"));
        sizePolicy1.setHeightForWidth(btnViewMap->sizePolicy().hasHeightForWidth());
        btnViewMap->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(btnViewMap);

        btnViewData = new QPushButton(widgetBtn);
        btnViewData->setObjectName(QString::fromUtf8("btnViewData"));
        sizePolicy1.setHeightForWidth(btnViewData->sizePolicy().hasHeightForWidth());
        btnViewData->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(btnViewData);

        btnData = new QPushButton(widgetBtn);
        btnData->setObjectName(QString::fromUtf8("btnData"));
        sizePolicy1.setHeightForWidth(btnData->sizePolicy().hasHeightForWidth());
        btnData->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(btnData);

        btnConfig = new QPushButton(widgetBtn);
        btnConfig->setObjectName(QString::fromUtf8("btnConfig"));
        sizePolicy1.setHeightForWidth(btnConfig->sizePolicy().hasHeightForWidth());
        btnConfig->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(btnConfig);


        gridLayout->addWidget(widgetBtn, 1, 1, 1, 1);

        widgetMenu = new QWidget(widgetTop);
        widgetMenu->setObjectName(QString::fromUtf8("widgetMenu"));
        widgetMenu->setMinimumSize(QSize(0, 25));
        widgetMenu->setMaximumSize(QSize(16777215, 25));
        horizontalLayout = new QHBoxLayout(widgetMenu);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnMenu_Min = new QPushButton(widgetMenu);
        btnMenu_Min->setObjectName(QString::fromUtf8("btnMenu_Min"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnMenu_Min->sizePolicy().hasHeightForWidth());
        btnMenu_Min->setSizePolicy(sizePolicy2);
        btnMenu_Min->setMinimumSize(QSize(30, 0));
        btnMenu_Min->setMaximumSize(QSize(30, 16777215));

        horizontalLayout->addWidget(btnMenu_Min);

        btnMenu_Max = new QPushButton(widgetMenu);
        btnMenu_Max->setObjectName(QString::fromUtf8("btnMenu_Max"));
        sizePolicy2.setHeightForWidth(btnMenu_Max->sizePolicy().hasHeightForWidth());
        btnMenu_Max->setSizePolicy(sizePolicy2);
        btnMenu_Max->setMinimumSize(QSize(30, 0));
        btnMenu_Max->setMaximumSize(QSize(30, 16777215));

        horizontalLayout->addWidget(btnMenu_Max);

        btnMenu_Close = new QPushButton(widgetMenu);
        btnMenu_Close->setObjectName(QString::fromUtf8("btnMenu_Close"));
        sizePolicy2.setHeightForWidth(btnMenu_Close->sizePolicy().hasHeightForWidth());
        btnMenu_Close->setSizePolicy(sizePolicy2);
        btnMenu_Close->setMinimumSize(QSize(30, 0));
        btnMenu_Close->setMaximumSize(QSize(30, 16777215));

        horizontalLayout->addWidget(btnMenu_Close);


        gridLayout->addWidget(widgetMenu, 0, 1, 1, 1);

        widgetLogo = new QWidget(widgetTop);
        widgetLogo->setObjectName(QString::fromUtf8("widgetLogo"));
        widgetLogo->setMinimumSize(QSize(300, 0));
        gridLayout_2 = new QGridLayout(widgetLogo);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, -1, -1, -1);
        labLogoEn = new QLabel(widgetLogo);
        labLogoEn->setObjectName(QString::fromUtf8("labLogoEn"));
        labLogoEn->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_2->addWidget(labLogoEn, 1, 1, 1, 1);

        labLogoCn = new QLabel(widgetLogo);
        labLogoCn->setObjectName(QString::fromUtf8("labLogoCn"));

        gridLayout_2->addWidget(labLogoCn, 0, 1, 1, 1);

        labLogoBg = new QLabel(widgetLogo);
        labLogoBg->setObjectName(QString::fromUtf8("labLogoBg"));
        labLogoBg->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(labLogoBg, 0, 0, 2, 1);


        gridLayout->addWidget(widgetLogo, 0, 0, 2, 1);


        verticalLayout->addWidget(widgetTop);

        stackedWidget = new QStackedWidget(widgetMain);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));

        verticalLayout->addWidget(stackedWidget);


        verticalLayout_3->addWidget(widgetMain);

        bottomWidget = new BottomWidget(frmMain);
        bottomWidget->setObjectName(QString::fromUtf8("bottomWidget"));

        verticalLayout_3->addWidget(bottomWidget);

        QWidget::setTabOrder(btnViewDevice, btnViewMap);
        QWidget::setTabOrder(btnViewMap, btnViewData);
        QWidget::setTabOrder(btnViewData, btnData);
        QWidget::setTabOrder(btnData, btnConfig);
        QWidget::setTabOrder(btnConfig, btnMenu_Min);
        QWidget::setTabOrder(btnMenu_Min, btnMenu_Max);
        QWidget::setTabOrder(btnMenu_Max, btnMenu_Close);

        retranslateUi(frmMain);

        QMetaObject::connectSlotsByName(frmMain);
    } // setupUi

    void retranslateUi(QWidget *frmMain)
    {
        frmMain->setWindowTitle(QApplication::translate("frmMain", "Form", nullptr));
        btnViewDevice->setText(QString());
        btnViewMap->setText(QString());
        btnViewData->setText(QString());
        btnData->setText(QString());
        btnConfig->setText(QString());
        btnMenu_Min->setText(QString());
        btnMenu_Max->setText(QString());
        btnMenu_Close->setText(QString());
        labLogoEn->setText(QString());
        labLogoCn->setText(QString());
        labLogoBg->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class frmMain: public Ui_frmMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMMAIN_H
