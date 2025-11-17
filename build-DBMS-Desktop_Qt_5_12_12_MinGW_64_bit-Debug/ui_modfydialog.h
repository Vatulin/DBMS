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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModfyDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QToolButton *toolButton;
    QLabel *label_2;
    QComboBox *comboBox;
    QLabel *label_4;
    QDateEdit *dateEdit;
    QPushButton *change_accept;

    void setupUi(QWidget *ModfyDialog)
    {
        if (ModfyDialog->objectName().isEmpty())
            ModfyDialog->setObjectName(QString::fromUtf8("ModfyDialog"));
        ModfyDialog->resize(326, 270);
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

        label_3 = new QLabel(ModfyDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFrameShape(QFrame::StyledPanel);

        verticalLayout->addWidget(label_3);

        toolButton = new QToolButton(ModfyDialog);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));

        verticalLayout->addWidget(toolButton);

        label_2 = new QLabel(ModfyDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        comboBox = new QComboBox(ModfyDialog);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        verticalLayout->addWidget(comboBox);

        label_4 = new QLabel(ModfyDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        dateEdit = new QDateEdit(ModfyDialog);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        verticalLayout->addWidget(dateEdit);

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
        label_3->setText(QString());
        toolButton->setText(QApplication::translate("ModfyDialog", "...", nullptr));
        label_2->setText(QApplication::translate("ModfyDialog", "\320\232\320\260\321\202\320\265\320\263\320\276\321\200\320\270\321\217", nullptr));
        label_4->setText(QApplication::translate("ModfyDialog", "\320\224\320\260\321\202\320\260 \320\277\320\276\321\201\321\202\321\203\320\277\320\273\320\265\320\275\320\270\321\217", nullptr));
        change_accept->setText(QApplication::translate("ModfyDialog", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModfyDialog: public Ui_ModfyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODFYDIALOG_H
