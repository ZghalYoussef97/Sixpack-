#ifndef DIALOG__4_H
#define DIALOG__4_H

#include <QDialog>

namespace Ui {
class Dialog__4;
}

class Dialog__4 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog__4(QWidget *parent = nullptr);
    ~Dialog__4();

private:
    Ui::Dialog__4 *ui;
};

#endif // DIALOG__4_H
