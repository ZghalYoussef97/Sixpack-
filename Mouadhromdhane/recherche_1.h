#ifndef RECHERCHE_1_H
#define RECHERCHE_1_H

#include <QDialog>

namespace Ui {
class recherche_1;
}

class recherche_1 : public QDialog
{
    Q_OBJECT

public:
    explicit recherche_1(QWidget *parent = nullptr);
    ~recherche_1();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::recherche_1 *ui;
};

#endif // RECHERCHE_1_H
