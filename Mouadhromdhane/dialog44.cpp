#include "dialog44.h"
#include "ui_dialog44.h"
#include "dialog4.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QSqlQueryModel>
#include<QTextEdit>
#include<QDebug>
QDate Dialog44::getdate()
{
    return ui->dateEdit->date() ;
}
Dialog44::Dialog44(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog44)
{

    ui->setupUi(this);
    QString titre = "Entrez La Date";
    this->setWindowTitle(titre);

}

Dialog44::~Dialog44()
{
    delete ui;
}

void Dialog44::on_pushButton_clicked()
{
    QDate id=getdate();
    QSqlQuery qry;
    qry.prepare("INSERT INTO A (ID) VALUES(:ID)");
    qry.bindValue(":ID",id);
    qry.exec();

    qDebug()<<getdate();

    Dialog4 Dialog4;
    Dialog4.setModal(true);
    Dialog4.exec();
ui->dateEdit->setDate(getdate() );
}

