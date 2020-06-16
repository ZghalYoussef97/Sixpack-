#ifndef RECHERCHE1_H
#define RECHERCHE1_H

#include <QDialog>

namespace Ui {
class recherche1;
}

class recherche1 : public QDialog
{
    Q_OBJECT

public:
    explicit recherche1(QWidget *parent = nullptr);
    ~recherche1();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::recherche1 *ui;
};

#endif // RECHERCHE1_H
