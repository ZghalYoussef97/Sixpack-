#ifndef DIALOG44_H
#define DIALOG44_H
#include <QDialog>
#include <QDate>

namespace Ui {
class Dialog44;
}

class Dialog44 : public QDialog
{
    Q_OBJECT

public:
    QDate Date;
    QString Name;
    QDate getdate();
    explicit Dialog44(QWidget *parent = nullptr);
    ~Dialog44();

QString getname();

private slots:
    void on_pushButton_clicked();

private:

    Ui::Dialog44 *ui;

};

#endif // DIALOG44_H
