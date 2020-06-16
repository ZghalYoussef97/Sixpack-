#include "recherche_3.h"
#include "ui_recherche_3.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QSqlQueryModel>
recherche_3::recherche_3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::recherche_3)
{
    ui->setupUi(this);
    QString titre = "Recherche(Une Année)";
    this->setWindowTitle(titre);
    QDate date = QDate::currentDate();
ui->dateEdit->setDate(date);
}

recherche_3::~recherche_3()
{
    delete ui;
}

void recherche_3::on_pushButton_2_clicked()
{
    QDate id= ui->dateEdit->date();
    QSqlQueryModel *model= new QSqlQueryModel();
    QSqlQuery qry;
    qry.prepare("SELECT * FROM GESTIONREV WHERE (extract(YEAR from ID))  = extract(YEAR from :ID);");
    qry.bindValue(":ID",id);
    qry.exec();
    model->setQuery(qry);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Type"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("valeur"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date"));
            ui->tableView->setModel(model);
            QSqlQuery qry3;
            qry3.prepare("SELECT sum(VALEUR) FROM GESTIONREV WHERE (extract(YEAR from ID))  = extract(YEAR from :ID);");
            qry3.bindValue(":ID",id);
            qry3.exec();
            qry3.first();
            QString tot =qry3.value(0).toString();
            ui->lineEdit->setText(tot);
}
