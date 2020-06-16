#ifndef DIALOG__66_H
#define DIALOG__66_H

#include <QDialog>

namespace Ui {
class Dialog__66;
}

class Dialog__66 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog__66(QWidget *parent = nullptr);
    ~Dialog__66();

    QDate getdate();
private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialog__66 *ui;
};

#endif // DIALOG__66_H
