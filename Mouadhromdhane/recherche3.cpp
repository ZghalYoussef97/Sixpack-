#include "recherche3.h"
#include "ui_recherche3.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QSqlQueryModel>
recherche3::recherche3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::recherche3)
{
    ui->setupUi(this);
    QString titre = "Recherche(Une Année)";
    this->setWindowTitle(titre);
}

recherche3::~recherche3()
{
    delete ui;
}

void recherche3::on_pushButton_2_clicked()
{
     QDate id= ui->dateEdit->date();
     QSqlQueryModel *model= new QSqlQueryModel();
     QSqlQuery qry;
     qry.prepare("SELECT * FROM GESTIONDEP WHERE (extract(YEAR from DATE_ENR))  = extract(YEAR from :ID);");
     qry.bindValue(":ID",id);
     qry.exec();
     model->setQuery(qry);
     model->setHeaderData(0, Qt::Horizontal, QObject::tr("Type"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("valeur"));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("Date"));
             ui->tableView->setModel(model);
             QSqlQuery qry3;
             qry3.prepare("SELECT sum(VALEUR) FROM GESTIONDEP WHERE (extract(YEAR from DATE_ENR))  = extract(YEAR from :ID);");
             qry3.bindValue(":ID",id);
             qry3.exec();
             qry3.first();
             QString tot =qry3.value(0).toString();
             ui->lineEdit->setText(tot);
}
