#include "dialog__44.h"
#include "ui_dialog__44.h"
#include "dialog__4.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QSqlQueryModel>
#include <QDebug>
#include<QtCharts>
#include<QBarSeries>
#include<QBarSet>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QSqlQueryModel>
#include <QtDebug>

QDate Dialog__44::getdate()
{
    return ui->dateEdit->date() ;
}
Dialog__44::Dialog__44(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog__44)
{
    ui->setupUi(this);
}

Dialog__44::~Dialog__44()
{
    delete ui;
}

void Dialog__44::on_pushButton_clicked()
{
    QDate id=getdate();
    QSqlQuery qry;
    qry.prepare("INSERT INTO A (ID) VALUES(:ID)");
    qry.bindValue(":ID",id);
    qry.exec();
    Dialog__4 dialog ;
    dialog.setModal(true);
    dialog.exec();
}
