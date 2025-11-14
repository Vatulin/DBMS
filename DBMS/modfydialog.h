#ifndef MODFYDIALOG_H
#define MODFYDIALOG_H

#include <QWidget>

namespace Ui {
class ModfyDialog;
}

class ModfyDialog : public QWidget
{
    Q_OBJECT

public:
    explicit ModfyDialog(QWidget *parent = nullptr);
    ~ModfyDialog();

    int tempID;

private slots:
    void on_change_accept_clicked();
    void sendingID(int);

private:
    Ui::ModfyDialog *ui;
};

#endif // MODFYDIALOG_H
