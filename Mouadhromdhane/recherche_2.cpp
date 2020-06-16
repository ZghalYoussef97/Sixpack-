#include "recherche_2.h"
#include "ui_recherche_2.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QSqlQueryModel>
recherche_2::recherche_2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::recherche_2)
{
    ui->setupUi(this);
    QString titre = "Recherche(Un Mois)";
    this->setWindowTitle(titre);
    QDate date = QDate::currentDate();
ui->dateEdit->setDate(date);
}

recherche_2::~recherche_2()
{
    delete ui;
}

void recherche_2::on_pushButton_2_clicked()
{
    QDate id= ui->dateEdit->date();
    QSqlQueryModel *model= new QSqlQueryModel();
    QSqlQuery qry;
    qry.prepare("SELECT * FROM GESTIONREV WHERE (extract(month from ID))  = extract(month from :ID) AND (extract(YEAR from ID))  = extract(YEAR from :ID);");
    qry.bindValue(":ID",id);
    qry.exec();
    model->setQuery(qry);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Type"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("valeur"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date"));
                ui->tableView->setModel(model);
                QSqlQuery qry3;
                qry3.prepare("SELECT sum(VALEUR) FROM GESTIONREV WHERE (extract(month from ID))  = extract(month from :ID) AND (extract(YEAR from ID))  = extract(YEAR from :ID);");
                qry3.bindValue(":ID",id);
                qry3.exec();
                qry3.first();
                QString tot =qry3.value(0).toString();
                ui->lineEdit->setText(tot);
}
