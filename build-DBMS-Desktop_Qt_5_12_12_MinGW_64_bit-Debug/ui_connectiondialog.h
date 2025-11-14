/********************************************************************************
** Form generated from reading UI file 'connectiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTIONDIALOG_H
#define UI_CONNECTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConnectionDialog
{
public:
    QLabel *server_address_label;
    QLineEdit *lineEdit;
    QLabel *BD_Name;
    QLineEdit *lineEdit_2;
    QLabel *Login;
    QLineEdit *lineEdit_3;
    QLabel *Login_2;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton;

    void setupUi(QWidget *ConnectionDialog)
    {
        if (ConnectionDialog->objectName().isEmpty())
            ConnectionDialog->setObjectName(QString::fromUtf8("ConnectionDialog"));
        ConnectionDialog->resize(355, 323);
        server_address_label = new QLabel(ConnectionDialog);
        server_address_label->setObjectName(QString::fromUtf8("server_address_label"));
        server_address_label->setGeometry(QRect(10, -10, 121, 51));
        QFont font;
        font.setPointSize(10);
        server_address_label->setFont(font);
        lineEdit = new QLineEdit(ConnectionDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 30, 331, 22));
        BD_Name = new QLabel(ConnectionDialog);
        BD_Name->setObjectName(QString::fromUtf8("BD_Name"));
        BD_Name->setGeometry(QRect(10, 60, 161, 51));
        BD_Name->setFont(font);
        lineEdit_2 = new QLineEdit(ConnectionDialog);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(10, 100, 331, 22));
        Login = new QLabel(ConnectionDialog);
        Login->setObjectName(QString::fromUtf8("Login"));
        Login->setGeometry(QRect(10, 130, 161, 51));
        Login->setFont(font);
        lineEdit_3 = new QLineEdit(ConnectionDialog);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(10, 170, 331, 22));
        Login_2 = new QLabel(ConnectionDialog);
        Login_2->setObjectName(QString::fromUtf8("Login_2"));
        Login_2->setGeometry(QRect(10, 200, 161, 51));
        Login_2->setFont(font);
        lineEdit_4 = new QLineEdit(ConnectionDialog);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(10, 240, 331, 22));
        pushButton = new QPushButton(ConnectionDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 280, 331, 28));

        retranslateUi(ConnectionDialog);

        QMetaObject::connectSlotsByName(ConnectionDialog);
    } // setupUi

    void retranslateUi(QWidget *ConnectionDialog)
    {
        ConnectionDialog->setWindowTitle(QApplication::translate("ConnectionDialog", "Form", nullptr));
        server_address_label->setText(QApplication::translate("ConnectionDialog", "\320\220\320\264\321\200\320\265\321\201 \321\201\320\265\321\200\320\262\320\265\321\200\320\260", nullptr));
        lineEdit->setText(QApplication::translate("ConnectionDialog", "DESKTOP-UBG39OS\\SQLEXPRESS", nullptr));
        lineEdit->setPlaceholderText(QString());
        BD_Name->setText(QApplication::translate("ConnectionDialog", "<html><head/><body><p>\320\230\320\274\321\217 \320\261\320\260\320\267\321\213 \320\264\320\260\320\275\320\275\321\213\321\205</p></body></html>", nullptr));
        lineEdit_2->setText(QApplication::translate("ConnectionDialog", "qtcourse", nullptr));
        lineEdit_2->setPlaceholderText(QString());
        Login->setText(QApplication::translate("ConnectionDialog", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        Login_2->setText(QApplication::translate("ConnectionDialog", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        pushButton->setText(QApplication::translate("ConnectionDialog", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\270\321\202\321\214\321\201\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConnectionDialog: public Ui_ConnectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTIONDIALOG_H
