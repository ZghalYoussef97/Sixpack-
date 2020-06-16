#ifndef RECHERCHE_3_H
#define RECHERCHE_3_H

#include <QDialog>

namespace Ui {
class recherche_3;
}

class recherche_3 : public QDialog
{
    Q_OBJECT

public:
    explicit recherche_3(QWidget *parent = nullptr);
    ~recherche_3();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::recherche_3 *ui;
};

#endif // RECHERCHE_3_H
