#ifndef DIALOG__H
#define DIALOG__H

#include <QDialog>

namespace Ui {
class Dialog_;
}

class Dialog_ : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_(QWidget *parent = nullptr);
    ~Dialog_();

private slots:
    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_5_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_4_clicked();

    void on_radioButton_11_clicked();

    void on_radioButton_10_clicked();

    void on_radioButton_9_clicked();

    void on_radioButton_12_clicked();

private:
    Ui::Dialog_ *ui;
};

#endif // DIALOG__H
