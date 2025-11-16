#ifndef PRINTDIALOG_H
#define PRINTDIALOG_H

#include <QWidget>

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
