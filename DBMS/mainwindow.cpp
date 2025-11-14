#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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
    tmodel = new QSqlTableModel();
    tmodel->setTable("product");
    tmodel->select();
    ui->tableView->setModel(tmodel);
}

