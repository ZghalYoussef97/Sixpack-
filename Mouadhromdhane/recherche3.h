#ifndef RECHERCHE3_H
#define RECHERCHE3_H

#include <QDialog>

namespace Ui {
class recherche3;
}

class recherche3 : public QDialog
{
    Q_OBJECT

public:
    explicit recherche3(QWidget *parent = nullptr);
    ~recherche3();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::recherche3 *ui;
};

#endif // RECHERCHE3_H
