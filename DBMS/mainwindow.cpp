#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "modfydialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->tableView,
    SIGNAL(customContextMenuRequested(QPoint)),
    SLOT(CustomMenuReq(QPoint)));
    fl = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_action_triggered()
{
    dlg = new ConnectionDialog();
    dlg->show();
}


void MainWindow::on_reload_clicked()
{
    fl = 1;

    qmodel = new QSqlQueryModel();
    qmodel->setQuery("SELECT * FROM product");

    ui->tableView->setModel(qmodel);
}


void MainWindow::on_add_clicked()
{
    adlg = new AddDialog();
    adlg->show();
}


void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
    int temp_ID;
    temp_ID = ui->tableView->model()->data(ui->tableView->
    model()->index(index.row(),0)).toInt(); //в одну строку
        QSqlQuery *query = new QSqlQuery();
        query->prepare("SELECT name, cat_ID FROM product WHERE ID = :ID");
        query->bindValue(":ID",temp_ID);

        ui->lineEdit->setText(QString::number(temp_ID));
        if (query->exec())
        {
            query->next();
            ui->lineEdit_2->setText(query->value(0).toString());
            ui->lineEdit_3->setText(query->value(1).toString());
        }
}


void MainWindow::on_delete_2_clicked()
{
    QSqlQuery *query = new QSqlQuery();
        query->prepare("DELETE FROM product WHERE ID = :ID");
        query->bindValue(":ID",ui->lineEdit->text());
        query->exec();
    //очищаем поля ввода
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
    //вызов обраотчика кнопки «Обновить»
        MainWindow::on_reload_clicked();
}


void MainWindow::on_change_clicked()
{
    QSqlQuery *query = new QSqlQuery();
       query->prepare("UPDATE product SET name = :name, "
                      "cat_ID = :cat_ID WHERE ID = :ID");
       query->bindValue(":ID",ui->lineEdit->text());
       query->bindValue(":name",ui->lineEdit_2->text());
       query->bindValue(":cat_ID",ui->lineEdit_3->text());
       query->exec();
       ui->lineEdit->setText("");
       ui->lineEdit_2->setText("");
       ui->lineEdit_3->setText("");
       MainWindow::on_reload_clicked();
}

void MainWindow::CustomMenuReq(QPoint pos)
{
    if (fl == 1)
    {
        QModelIndex index = ui->tableView->indexAt(pos);
        GlobID = ui->tableView->model()->data(ui->tableView->model()->index(index.row(),0)).toInt();
    //Создаём меню и два действия
        QMenu *menu = new QMenu(this);
        QAction *ModRec = new QAction("Изменить...", this);
        QAction *DelRec = new QAction("Удалить", this);
//Соединяем действие с соответствующим сигналом и слотом

//(который нужно создать позже)
        connect(ModRec, SIGNAL(triggered()), this, SLOT(ModRecAction()));
        connect(DelRec, SIGNAL(triggered()), this, SLOT(DelRecAction()));

//Добавление действий, созданных ранее
        menu->addAction(ModRec);
        menu->addAction(DelRec);

        menu->popup(ui->tableView->viewport()->mapToGlobal(pos));
    }
}

void MainWindow::DelRecAction()
{
    QSqlQuery *query = new QSqlQuery();
    query->prepare("DELETE FROM product WHERE ID = :ID");
    query->bindValue(":ID",GlobID);
    query->exec();
    MainWindow::on_delete_2_clicked();
}

void MainWindow::ModRecAction()
{
    mdlg = new ModfyDialog();
    connect(this,SIGNAL(sendID(int)),mdlg, SLOT(sendingID(int)));
    emit sendID(GlobID);
    mdlg->show();
    disconnect(this,SIGNAL(sendID(int)),mdlg,
    SLOT(sendingID(int)));
}

