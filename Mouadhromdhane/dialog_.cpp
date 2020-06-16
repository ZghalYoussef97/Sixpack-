#include "dialog_.h"
#include "ui_dialog_.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QSqlQueryModel>
#include "dialog_1.h"
#include "dialog_2.h"
#include "dialog_3.h"
#include "dialog_55.h"
#include "dialog_5.h"
#include "dialog_6.h"
#include "dialog_44.h"
#include "dialog_66.h"
#include "recherche_1.h"
#include "recherche_2.h"
#include "recherche_3.h"
Dialog_::Dialog_(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_)
{
    ui->setupUi(this);
    QString titre = "Options";
    this->setWindowTitle(titre);
}

Dialog_::~Dialog_()
{
    delete ui;
}

void Dialog_::on_radioButton_clicked()
{
    Dialog_2 Dialog2;
    Dialog2.setModal(true);
    Dialog2.exec();
}

void Dialog_::on_radioButton_2_clicked()
{
    Dialog_3 Dialog3;
    Dialog3.setModal(true);
    Dialog3.exec();
}

void Dialog_::on_radioButton_5_clicked()
{
    Dialog_44 Dialog44;
    Dialog44.setModal(true);
    Dialog44.exec();
}

void Dialog_::on_radioButton_3_clicked()
{
    Dialog_55 Dialog55;
    Dialog55.setModal(true);
    Dialog55.exec();
}

void Dialog_::on_radioButton_4_clicked()
{
    Dialog_66 Dialog66;
    Dialog66.setModal(true);
    Dialog66.exec();
}

void Dialog_::on_radioButton_11_clicked()
{
    recherche_1 recherche1;
    recherche1.setModal(true);
    recherche1.exec();
}

void Dialog_::on_radioButton_10_clicked()
{
    recherche_2 recherche2;
    recherche2.setModal(true);
    recherche2.exec();
}

void Dialog_::on_radioButton_9_clicked()
{
    recherche_3 recherche3;
    recherche3.setModal(true);
    recherche3.exec();
}

void Dialog_::on_radioButton_12_clicked()
{
    Dialog_1 Dialog1;
    Dialog1.setModal(true);
    Dialog1.exec();
}
