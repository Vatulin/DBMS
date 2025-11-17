#include "modfydialog.h"
#include "ui_modfydialog.h"
#include <QSqlQuery>

ModfyDialog::ModfyDialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ModfyDialog)
{
    ui->setupUi(this);
    ui->label_3->setScaledContents(true);
    QSqlQuery *queryCombo = new QSqlQuery();
    queryCombo->exec("SELECT name FROM category");
    while (queryCombo->next())
    {
        ui->comboBox->addItem(queryCombo->value(0).toString());
    }
}

ModfyDialog::~ModfyDialog()
{
    delete ui;
}

void ModfyDialog::on_change_accept_clicked()
{
    QSqlQuery *query = new QSqlQuery();
    query->prepare("UPDATE product SET name = :name, catID = :category, prodDate = :date WHERE ID = :ID");
    query->bindValue(":ID", tempID);
    query->bindValue(":name",ui->lineEdit->text());
    query->bindValue(":category",ui->comboBox->currentIndex()+1);
    query->bindValue(":date", ui->dateEdit->text());
    ui->dateEdit->setDate(QDate::currentDate());
    if(query->exec())
    {
        close();
    }
}

void ModfyDialog::sendingID(int aa)
{
  tempID = aa;
  QSqlQuery *query = new QSqlQuery();
  query->prepare("SELECT name, catID, ImagePath FROM product WHERE ID = ?");
  query->bindValue(0, aa);
  if (query->exec())
  {
      query->next();
      ui->lineEdit->setText(query->value(0).toString());
      ui->comboBox->setCurrentIndex(query->value(1).toInt()-1);
  }
}

