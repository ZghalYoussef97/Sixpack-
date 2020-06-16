#ifndef DIALOG_66_H
#define DIALOG_66_H

#include <QDialog>

namespace Ui {
class Dialog_66;
}

class Dialog_66 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_66(QWidget *parent = nullptr);
    ~Dialog_66();

    QDate getdate();
private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialog_66 *ui;
};

#endif // DIALOG_66_H
