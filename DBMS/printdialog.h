#ifndef PRINTDIALOG_H
#define PRINTDIALOG_H

#include <QWidget>
#include <QSqlQuery>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QAxObject>

namespace Ui {
class PrintDialog;
}

class PrintDialog : public QWidget
{
    Q_OBJECT

public:
    explicit PrintDialog(QWidget *parent = nullptr);
    ~PrintDialog();

private slots:
    void on_toolButton_clicked();

    void on_make_clicked();

private:
    Ui::PrintDialog *ui;
};

#endif // PRINTDIALOG_H
