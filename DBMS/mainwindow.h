#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "connectiondialog.h"
#include "adddialog.h"
#include "ui_connectiondialog.h"
#include <QSqlQueryModel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_action_triggered();

    void on_reload_clicked();

    void on_add_clicked();

private:
    Ui::MainWindow *ui;
    ConnectionDialog *dlg;
    QSqlQueryModel *qmodel;
    AddDialog *adlg;
};
#endif // MAINWINDOW_H
