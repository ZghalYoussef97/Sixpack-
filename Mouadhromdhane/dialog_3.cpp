#include "dialog_3.h"
#include "ui_dialog_3.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QSqlQueryModel>
Dialog_3::Dialog_3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_3)
{
    ui->setupUi(this);
    QString titre = "Comparaisons Par Ans";
    this->setWindowTitle(titre);
}

Dialog_3::~Dialog_3()
{
    delete ui;
}

void Dialog_3::on_pushButton_clicked()
{
    QDate id= ui->dateEdit->date();
        QDate id2= ui->dateEdit_2->date();


    QSqlQueryModel *model= new QSqlQueryModel();
    QSqlQuery qry;
    qry.prepare("SELECT * FROM GESTIONREV WHERE (extract(YEAR from ID))  = extract(YEAR from :ID);");
    qry.bindValue(":ID",id);
    qry.exec();
    model->setQuery(qry);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Type"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("valeur"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Date"));
            ui->tableView->setModel(model);
    QSqlQueryModel *model2= new QSqlQueryModel();
    QSqlQuery qry2;
    qry2.prepare("SELECT * FROM GESTIONREV WHERE (extract(YEAR from ID))  = extract(YEAR from :ID2);");
    qry2.bindValue(":ID2",id2);
    qry2.exec();
    model2->setQuery(qry2);
    model2->setHeaderData(0, Qt::Horizontal, QObject::tr("Type"));
    model2->setHeaderData(1, Qt::Horizontal, QObject::tr("valeur"));
    model2->setHeaderData(2, Qt::Horizontal, QObject::tr("Date"));
            ui->tableView_2->setModel(model2);


    QSqlQuery qry3;
    qry3.prepare("SELECT sum(VALEUR) FROM GESTIONREV WHERE (extract(YEAR from ID))  = extract(YEAR from :ID);");
    qry3.bindValue(":ID",id);
    qry3.exec();
    qry3.first();
    QString tot =qry3.value(0).toString();
    ui->lineEdit->setText(tot);

    QSqlQuery qry4;
    qry4.prepare("SELECT sum(VALEUR) FROM GESTIONREV WHERE (extract(YEAR from ID))  = extract(YEAR from :ID2);");
    qry4.bindValue(":ID2",id2);
    qry4.exec();
    qry4.first();
    QString tot2 =qry4.value(0).toString();
    ui->lineEdit_2->setText(tot2);
    int tt=tot.toInt();
    int tt2=tot2.toInt();
    int diff=(tt-tt2);
    QString Diff = QString::number(diff);
    ui->lineEdit_3->setText(Diff);
}
