/********************************************************************************
** Form generated from reading UI file 'modfydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODFYDIALOG_H
#define UI_MODFYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModfyDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *change_accept;

    void setupUi(QWidget *ModfyDialog)
    {
        if (ModfyDialog->objectName().isEmpty())
            ModfyDialog->setObjectName(QString::fromUtf8("ModfyDialog"));
        ModfyDialog->resize(326, 164);
        verticalLayout = new QVBoxLayout(ModfyDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(ModfyDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(ModfyDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        label_2 = new QLabel(ModfyDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        lineEdit_2 = new QLineEdit(ModfyDialog);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout->addWidget(lineEdit_2);

        change_accept = new QPushButton(ModfyDialog);
        change_accept->setObjectName(QString::fromUtf8("change_accept"));

        verticalLayout->addWidget(change_accept);


        retranslateUi(ModfyDialog);

        QMetaObject::connectSlotsByName(ModfyDialog);
    } // setupUi

    void retranslateUi(QWidget *ModfyDialog)
    {
        ModfyDialog->setWindowTitle(QApplication::translate("ModfyDialog", "Form", nullptr));
        label->setText(QApplication::translate("ModfyDialog", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_2->setText(QApplication::translate("ModfyDialog", "\320\232\320\260\321\202\320\265\320\263\320\276\321\200\320\270\321\217", nullptr));
        change_accept->setText(QApplication::translate("ModfyDialog", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModfyDialog: public Ui_ModfyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODFYDIALOG_H
