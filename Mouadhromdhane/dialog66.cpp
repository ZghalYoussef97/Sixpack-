#include "dialog66.h"
#include "ui_dialog66.h"
#include "dialog6.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QSqlQueryModel>
QDate Dialog66::getdate()
{
    return ui->dateEdit->date() ;
}
Dialog66::Dialog66(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog66)
{
    ui->setupUi(this);
    QString titre = "Entrez La Date";
    this->setWindowTitle(titre);
}

Dialog66::~Dialog66()
{
    delete ui;
}

void Dialog66::on_pushButton_clicked()
{
    QDate id=getdate();
    QSqlQuery qry;
    qry.prepare("INSERT INTO A (ID) VALUES(:ID)");
    qry.bindValue(":ID",id);
    qry.exec();



    Dialog6 Dialog6;
    Dialog6.setModal(true);
    Dialog6.exec();
    ui->dateEdit->setDate(getdate() );
}
