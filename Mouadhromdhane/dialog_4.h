#ifndef DIALOG_4_H
#define DIALOG_4_H

#include <QDialog>

namespace Ui {
class Dialog_4;
}

class Dialog_4 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_4(QWidget *parent = nullptr);
    ~Dialog_4();

private:
    Ui::Dialog_4 *ui;
};

#endif // DIALOG_4_H
