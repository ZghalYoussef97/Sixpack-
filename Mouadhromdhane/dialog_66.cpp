#include "dialog_66.h"
#include "ui_dialog_66.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QSqlQueryModel>
#include "dialog_6.h"
#include<QDebug>
QDate Dialog_66::getdate()
{
    return ui->dateEdit->date() ;
}
Dialog_66::Dialog_66(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_66)
{
    ui->setupUi(this);
    QString titre = "Entrez La Date";
    this->setWindowTitle(titre);
    QDate date = QDate::currentDate();
ui->dateEdit->setDate(date);
}

Dialog_66::~Dialog_66()
{
    delete ui;
}

void Dialog_66::on_pushButton_clicked()
{

    QDate id=getdate();
    QSqlQuery qry;
    qry.prepare("INSERT INTO A (ID) VALUES(:ID)");
    qry.bindValue(":ID",id);
    qry.exec();

    qDebug()<<id;

    Dialog_6 Dialog4;
    Dialog4.setModal(true);
    Dialog4.exec();
    ui->dateEdit->setDate(getdate() );
}
