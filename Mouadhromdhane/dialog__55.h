#ifndef DIALOG__55_H
#define DIALOG__55_H

#include <QDialog>

namespace Ui {
class Dialog__55;
}

class Dialog__55 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog__55(QWidget *parent = nullptr);
    ~Dialog__55();

    QDate getdate();
private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialog__55 *ui;
};

#endif // DIALOG__55_H
