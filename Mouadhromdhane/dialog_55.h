#ifndef DIALOG_55_H
#define DIALOG_55_H

#include <QDialog>

namespace Ui {
class Dialog_55;
}

class Dialog_55 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_55(QWidget *parent = nullptr);
    ~Dialog_55();

    QDate getdate();
private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialog_55 *ui;
};

#endif // DIALOG_55_H
