#ifndef DIALOG__6_H
#define DIALOG__6_H

#include <QDialog>

namespace Ui {
class Dialog__6;
}

class Dialog__6 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog__6(QWidget *parent = nullptr);
    ~Dialog__6();

private:
    Ui::Dialog__6 *ui;
};

#endif // DIALOG__6_H
