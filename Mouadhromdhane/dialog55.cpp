#include "dialog55.h"
#include "ui_dialog55.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QSqlQueryModel>
#include <QtDebug>
#include "dialog5.h"
QDate Dialog55::getdate()
{
    return ui->dateEdit->date() ;
}
Dialog55::Dialog55(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog55)
{
    ui->setupUi(this);
    QString titre = "Entrez La Date";
    this->setWindowTitle(titre);
    QDate date = QDate::currentDate();
    ui->dateEdit->setDate(date);
}

Dialog55::~Dialog55()
{
    delete ui;
}

void Dialog55::on_pushButton_clicked()
{

    QDate id=getdate();
    QSqlQuery qry;
    qry.prepare("INSERT INTO A (ID) VALUES(:ID)");
    qry.bindValue(":ID",id);
    qry.exec();

    qDebug()<<getdate();

    Dialog5 Dialog4;
    Dialog4.setModal(true);
    Dialog4.exec();
    ui->dateEdit->setDate(getdate() );
}
