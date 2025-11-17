#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "connectiondialog.h"
#include "adddialog.h"
#include "ui_connectiondialog.h"
#include <QSqlQueryModel>
#include "modfydialog.h"
#include "ui_modfydialog.h"
#include "printdialog.h"
#include "ui_printdialog.h"
#include <QPrinter>
#include <QTextDocument>
#include <QFileDialog>
#include <QString> 
#include "printgraf.h"
#include "ui_printgraf.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    int GlobID;
    int fl;

private slots:
    void on_action_triggered();

    void on_reload_clicked();

    void on_add_clicked();

    void on_tableView_clicked(const QModelIndex &index);

    void on_delete_2_clicked();

    void on_change_clicked();

    void CustomMenuReq(QPoint);

    void DelRecAction();

    void ModRecAction();

    void on_export_2_clicked();

    void on_export_3_clicked();

    void on_toolButton_clicked();

    void on_action_2_triggered();

signals:
    void sendID(int);

private:
    Ui::MainWindow *ui;
    ConnectionDialog *dlg;
    QSqlQueryModel *qmodel;
    AddDialog *adlg;
    ModfyDialog *mdlg;
    PrintDialog *pdlg;
    QString Img;
    printGraf *pg;
};
#endif // MAINWINDOW_H
