/********************************************************************************
** Form generated from reading UI file 'printgraf.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINTGRAF_H
#define UI_PRINTGRAF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_printGraf
{
public:
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QCustomPlot *widget;

    void setupUi(QWidget *printGraf)
    {
        if (printGraf->objectName().isEmpty())
            printGraf->setObjectName(QString::fromUtf8("printGraf"));
        printGraf->resize(565, 404);
        horizontalLayout = new QHBoxLayout(printGraf);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget = new QCustomPlot(printGraf);
        widget->setObjectName(QString::fromUtf8("widget"));

        gridLayout->addWidget(widget, 0, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        retranslateUi(printGraf);

        QMetaObject::connectSlotsByName(printGraf);
    } // setupUi

    void retranslateUi(QWidget *printGraf)
    {
        printGraf->setWindowTitle(QApplication::translate("printGraf", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class printGraf: public Ui_printGraf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINTGRAF_H
