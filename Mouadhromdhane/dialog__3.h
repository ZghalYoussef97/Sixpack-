#ifndef DIALOG__3_H
#define DIALOG__3_H

#include <QDialog>

namespace Ui {
class Dialog__3;
}

class Dialog__3 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog__3(QWidget *parent = nullptr);
    ~Dialog__3();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialog__3 *ui;
};

#endif // DIALOG__3_H
