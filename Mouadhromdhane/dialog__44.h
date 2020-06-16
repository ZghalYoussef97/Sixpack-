#ifndef DIALOG__44_H
#define DIALOG__44_H

#include <QDialog>

namespace Ui {
class Dialog__44;
}

class Dialog__44 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog__44(QWidget *parent = nullptr);
    ~Dialog__44();

    QDate getdate();
private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialog__44 *ui;
};

#endif // DIALOG__44_H
