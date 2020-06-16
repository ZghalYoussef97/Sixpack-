#ifndef DIALOG__2_H
#define DIALOG__2_H

#include <QDialog>

namespace Ui {
class Dialog__2;
}

class Dialog__2 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog__2(QWidget *parent = nullptr);
    ~Dialog__2();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::Dialog__2 *ui;
};

#endif // DIALOG__2_H
