#ifndef AUTRES_H
#define AUTRES_H

#include <QDialog>

namespace Ui {
class autres;
}

class autres : public QDialog
{
    Q_OBJECT

public:
    explicit autres(QWidget *parent = nullptr);
    ~autres();

private slots:
    void on_radioButton_12_clicked();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_5_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_4_clicked();

private:
    Ui::autres *ui;
};

#endif // AUTRES_H
