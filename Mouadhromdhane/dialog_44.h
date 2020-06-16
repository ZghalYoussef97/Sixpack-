#ifndef DIALOG_44_H
#define DIALOG_44_H

#include <QDialog>

namespace Ui {
class Dialog_44;
}

class Dialog_44 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_44(QWidget *parent = nullptr);
    ~Dialog_44();

    QDate getdate();
private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialog_44 *ui;
};

#endif // DIALOG_44_H
