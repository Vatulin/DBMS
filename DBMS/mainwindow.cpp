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
    qmodel = new QSqlTableModel();
     qmodel->setQuery("SELECT * FROM product");
     ui->tableView->setModel(qmodel);
}


void MainWindow::on_add_clicked()
{
    adlg = new AddDialog();
    adlg->show();
}

