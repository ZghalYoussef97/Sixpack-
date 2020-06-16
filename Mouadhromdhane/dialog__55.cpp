#include "dialog__55.h"
#include "ui_dialog__55.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QSqlQueryModel>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QSqlQueryModel>
#include <QtDebug>
#include "dialog__5.h"

QDate Dialog__55::getdate()
{
    return ui->dateEdit->date() ;
}
Dialog__55::Dialog__55(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog__55)
{
    ui->setupUi(this);
}

Dialog__55::~Dialog__55()
{
    delete ui;
}

void Dialog__55::on_pushButton_clicked()
{
    QDate id=getdate();
    QSqlQuery qry;
    qry.prepare("INSERT INTO A (ID) VALUES(:ID)");
    qry.bindValue(":ID",id);
    qry.exec();



    Dialog__5 Dialog4;
    Dialog4.setModal(true);
    Dialog4.exec();
    ui->dateEdit->setDate(getdate() );
}
