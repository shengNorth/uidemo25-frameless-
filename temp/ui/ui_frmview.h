/********************************************************************************
** Form generated from reading UI file 'frmview.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMVIEW_H
#define UI_FRMVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_frmView
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;

    void setupUi(QWidget *frmView)
    {
        if (frmView->objectName().isEmpty())
            frmView->setObjectName(QString::fromUtf8("frmView"));
        frmView->resize(400, 300);
        verticalLayout = new QVBoxLayout(frmView);
        verticalLayout->setSpacing(1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 1, 0, 0);
        stackedWidget = new QStackedWidget(frmView);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));

        verticalLayout->addWidget(stackedWidget);


        retranslateUi(frmView);

        stackedWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(frmView);
    } // setupUi

    void retranslateUi(QWidget *frmView)
    {
        frmView->setWindowTitle(QApplication::translate("frmView", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class frmView: public Ui_frmView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMVIEW_H
