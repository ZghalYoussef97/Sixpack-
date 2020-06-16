#include "recherche_1.h"
#include "ui_recherche_1.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QSqlQueryModel>
recherche_1::recherche_1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::recherche_1)
{
    ui->setupUi(this);
    QString titre = "Recherche(Un Jour)";
    this->setWindowTitle(titre);
    QDate date = QDate::currentDate();
ui->dateEdit->setDate(date);
}

recherche_1::~recherche_1()
{
    delete ui;
}

void recherche_1::on_pushButton_2_clicked()
{
    QDate id= ui->dateEdit->date();

    QSqlQueryModel *model= new QSqlQueryModel();
   QSqlQuery qry;
   qry.prepare("SELECT * FROM GESTIONREV  WHERE ID =:ID;");
   qry.bindValue(":ID",id);
   qry.exec();
   model->setQuery(qry);
   model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
   model->setHeaderData(1, Qt::Horizontal, QObject::tr("Type"));
   model->setHeaderData(2, Qt::Horizontal, QObject::tr("valeur"));
   model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date"));
           ui->tableView->setModel(model);

           QSqlQuery qry3;
           qry3.prepare("SELECT SUM(VALEUR) FROM GESTIONREV WHERE ID =:ID;");
           qry3.bindValue(":ID",id);
           qry3.exec();
           qry3.first();
           QString tot =qry3.value(0).toString();
           ui->lineEdit->setText(tot);
}
