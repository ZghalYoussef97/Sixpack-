#include "dialog.h"
#include "ui_dialog.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QSqlQueryModel>
#include "dialog1.h"
#include "dialog2.h"
#include "dialog3.h"
#include "dialog55.h"
#include "dialog5.h"
#include "dialog6.h"
#include "dialog44.h"
#include "dialog66.h"
#include "recherche1.h"
#include "recherche2.h"
#include "recherche3.h"
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QString titre = "Options Avancées";
    this->setWindowTitle(titre);

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_radioButton_clicked()
{
    Dialog2 Dialog2;
    Dialog2.setModal(true);
    Dialog2.exec();

}

void Dialog::on_radioButton_2_clicked()
{
    Dialog3 Dialog3;
    Dialog3.setModal(true);
    Dialog3.exec();
}

void Dialog::on_radioButton_5_clicked()
{
    Dialog44 Dialog44;
    Dialog44.setModal(true);
    Dialog44.exec();

}

void Dialog::on_radioButton_3_clicked()
{
    Dialog55 Dialog55;
    Dialog55.setModal(true);
    Dialog55.exec();
}

void Dialog::on_radioButton_4_clicked()
{
    Dialog66 Dialog66;
    Dialog66.setModal(true);
    Dialog66.exec();
}

void Dialog::on_radioButton_12_clicked()
{
    Dialog1 Dialog1;
    Dialog1.setModal(true);
    Dialog1.exec();
}

void Dialog::on_radioButton_11_clicked()
{
    recherche1 recherche1;
    recherche1.setModal(true);
    recherche1.exec();

}

void Dialog::on_radioButton_10_clicked()
{
    recherche2 recherche2;
    recherche2.setModal(true);
    recherche2.exec();

}

void Dialog::on_radioButton_9_clicked()
{
    recherche3 recherche3;
    recherche3.setModal(true);
    recherche3.exec();
}
