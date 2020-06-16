#ifndef DIALOG__5_H
#define DIALOG__5_H

#include <QDialog>

namespace Ui {
class Dialog__5;
}

class Dialog__5 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog__5(QWidget *parent = nullptr);
    ~Dialog__5();

private:
    Ui::Dialog__5 *ui;
};

#endif // DIALOG__5_H
