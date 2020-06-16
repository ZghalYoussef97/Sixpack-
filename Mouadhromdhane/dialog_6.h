#ifndef DIALOG_6_H
#define DIALOG_6_H

#include <QDialog>

namespace Ui {
class Dialog_6;
}

class Dialog_6 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_6(QWidget *parent = nullptr);
    ~Dialog_6();

private:
    Ui::Dialog_6 *ui;
};

#endif // DIALOG_6_H
