#include "autres.h"
#include "ui_autres.h"
#include "dialog__1.h"
#include "dialog__2.h"
#include "dialog__3.h"
#include "dialog__44.h"
#include "dialog__55.h"
#include "dialog__66.h"
autres::autres(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::autres)
{
    ui->setupUi(this);
    QString titre = "Options avancées: Depenses/Revenus";
    this->setWindowTitle(titre);
}

autres::~autres()
{
    delete ui;
}

void autres::on_radioButton_12_clicked()
{
  Dialog__1 dialog ;
  dialog.setModal(true);
  dialog.exec();
}

void autres::on_radioButton_clicked()
{
    Dialog__2 dialog ;
    dialog.setModal(true);
    dialog.exec();
}

void autres::on_radioButton_2_clicked()
{
    Dialog__3 dialog ;
    dialog.setModal(true);
    dialog.exec();
}


void autres::on_radioButton_5_clicked()
{
    Dialog__44 dialog ;
    dialog.setModal(true);
    dialog.exec();
}

void autres::on_radioButton_3_clicked()
{
    Dialog__55 dialog ;
    dialog.setModal(true);
    dialog.exec();
}

void autres::on_radioButton_4_clicked()
{
    Dialog__66 dialog ;
    dialog.setModal(true);
    dialog.exec();
}
