#include "connectiondialog.h"
#include "ui_connectiondialog.h"

ConnectionDialog::ConnectionDialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ConnectionDialog)
{
    ui->setupUi(this);
}

ConnectionDialog::~ConnectionDialog()
{
    delete ui;
}

void ConnectionDialog::on_pushButton_clicked()
{
    db =QSqlDatabase::addDatabase("QODBC");

    db.setDatabaseName("DRIVER={SQL Server};SERVER="
     +ui->lineEdit->text()+
     ";DATABASE="+ui->lineEdit_2->text()+";");

    db.setUserName(ui->lineEdit_3->text());
     db.setPassword(ui->lineEdit_4->text());

     msg = new QMessageBox();

      if (db.open()) //попытка подключения к БД
      {
      msg->setText("Соединение установлено"); //
      }
      else
      {
      msg->setText("Соединение НЕ установлено"); //

      }
     msg->show();
     close();

}

