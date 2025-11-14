#include "modfydialog.h"
#include "ui_modfydialog.h"
#include <QSqlQuery>

ModfyDialog::ModfyDialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ModfyDialog)
{
    ui->setupUi(this);
}

ModfyDialog::~ModfyDialog()
{
    delete ui;
}

void ModfyDialog::on_change_accept_clicked()
{
    QSqlQuery *query = new QSqlQuery();
    query->prepare("UPDATE product SET name = :name,"
    "cat_ID = :cat_ID, WHERE ID = :ID");
    query->bindValue(":ID", tempID);
    query->bindValue(":name",ui->lineEdit->text());
    query->bindValue(":cat_ID",ui->lineEdit_2->text());
    if(query->exec())
    {
    close();
    }
}

void ModfyDialog::sendingID(int aa)
{
  tempID = aa;
  QSqlQuery *query = new QSqlQuery();
  query->prepare("SELECT name, cat_ID FROM product"
                 "WHERE ID = ?");
  query->bindValue(0, aa);
  if (query->exec())
  {
      query->next();
      ui->lineEdit->setText(query->value(0).toString());
      ui->lineEdit_2->setText(query->value(1).toString());
  }
}

