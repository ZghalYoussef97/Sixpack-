#include "dialog_44.h"
#include "ui_dialog_44.h"
#include "dialog_4.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QSqlQueryModel>
QDate Dialog_44::getdate()
{
    return ui->dateEdit->date() ;
}
Dialog_44::Dialog_44(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_44)
{
    ui->setupUi(this);
    QString titre = "Entrez La Date";
    this->setWindowTitle(titre);
}

Dialog_44::~Dialog_44()
{
    delete ui;
}

void Dialog_44::on_pushButton_clicked()
{
    QDate id=getdate();
    QSqlQuery qry;
    qry.prepare("INSERT INTO A (ID) VALUES(:ID)");
    qry.bindValue(":ID",id);
    qry.exec();



    Dialog_4 Dialog4;
    Dialog4.setModal(true);
    Dialog4.exec();
ui->dateEdit->setDate(getdate() );
}
