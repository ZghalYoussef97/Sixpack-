#ifndef RECHERCHE_2_H
#define RECHERCHE_2_H

#include <QDialog>

namespace Ui {
class recherche_2;
}

class recherche_2 : public QDialog
{
    Q_OBJECT

public:
    explicit recherche_2(QWidget *parent = nullptr);
    ~recherche_2();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::recherche_2 *ui;
};

#endif // RECHERCHE_2_H
