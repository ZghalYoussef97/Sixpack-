#include "dialog_55.h"
#include "ui_dialog_55.h"
#include "dialog_5.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QSqlQueryModel>
QDate Dialog_55::getdate()
{
    return ui->dateEdit->date() ;
}
Dialog_55::Dialog_55(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_55)
{
    ui->setupUi(this);
    QString titre = "Entrez La Date";
    this->setWindowTitle(titre);
    QDate date = QDate::currentDate();
ui->dateEdit->setDate(date);
}

Dialog_55::~Dialog_55()
{
    delete ui;
}

void Dialog_55::on_pushButton_clicked()
{
    QDate id=getdate();
    QSqlQuery qry;
    qry.prepare("INSERT INTO A (ID) VALUES(:ID)");
    qry.bindValue(":ID",id);
    qry.exec();



    Dialog_5 Dialog4;
    Dialog4.setModal(true);
    Dialog4.exec();
    ui->dateEdit->setDate(getdate() );
}
