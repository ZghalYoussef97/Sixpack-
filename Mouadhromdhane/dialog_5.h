#ifndef DIALOG_5_H
#define DIALOG_5_H

#include <QDialog>

namespace Ui {
class Dialog_5;
}

class Dialog_5 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_5(QWidget *parent = nullptr);
    ~Dialog_5();

private:
    Ui::Dialog_5 *ui;
};

#endif // DIALOG_5_H
