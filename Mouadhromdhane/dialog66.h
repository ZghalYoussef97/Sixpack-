#ifndef DIALOG66_H
#define DIALOG66_H

#include <QDialog>

namespace Ui {
class Dialog66;
}

class Dialog66 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog66(QWidget *parent = nullptr);
    ~Dialog66();

    QDate getdate();
private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialog66 *ui;
};

#endif // DIALOG66_H
