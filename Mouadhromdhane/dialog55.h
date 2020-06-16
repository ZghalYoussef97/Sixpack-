#ifndef DIALOG55_H
#define DIALOG55_H

#include <QDialog>

namespace Ui {
class Dialog55;
}

class Dialog55 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog55(QWidget *parent = nullptr);
    ~Dialog55();

    QDate getdate();
private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialog55 *ui;
};

#endif // DIALOG55_H
