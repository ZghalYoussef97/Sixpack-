#ifndef DIALOG__1_H
#define DIALOG__1_H

#include <QDialog>

namespace Ui {
class Dialog__1;
}

class Dialog__1 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog__1(QWidget *parent = nullptr);
    ~Dialog__1();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::Dialog__1 *ui;
};

#endif // DIALOG__1_H
