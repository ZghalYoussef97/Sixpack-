#include "dialog__66.h"
#include "ui_dialog__66.h"
#include "dialog__6.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QSqlQueryModel>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QSqlQueryModel>
#include <QtDebug>

QDate Dialog__66::getdate()
{
    return ui->dateEdit->date() ;
}
Dialog__66::Dialog__66(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog__66)
{
    ui->setupUi(this);
}

Dialog__66::~Dialog__66()
{
    delete ui;
}

void Dialog__66::on_pushButton_clicked()
{
    QDate id=getdate();
    QSqlQuery qry;
    qry.prepare("INSERT INTO A (ID) VALUES(:ID)");
    qry.bindValue(":ID",id);
    qry.exec();


   Dialog__6 Dialog ;
   Dialog.setModal(true);
   Dialog.exec();
   ui->dateEdit->setDate(getdate() );
}
