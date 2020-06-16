#include "dialog5.h"
#include "ui_dialog5.h"
#include <QDebug>
#include<QtCharts>
#include<QBarSeries>
#include<QBarSet>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QSqlQueryModel>
#include <QtDebug>
Dialog5::Dialog5(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog5)
{
    ui->setupUi(this);
    QString titre2 = "Charte(Un Mois)";
    this->setWindowTitle(titre2);
    QSqlQuery qry;
    qry.prepare("SELECT ID FROM A WHERE ROWNUM <=1;");
    qry.exec();
    qry.first();
    QDate dd = qry.value(0).toDate();
    qDebug()<<dd;
    QSqlQuery qry2;
    qry2.prepare("DELETE FROM A where id is not null ;");
    qry2.exec();
    qry2.first();

                 QBarSet *set0 = new QBarSet("Carburant");

                 QBarSet *set1 = new QBarSet("Electrecite");
                 QBarSet *set2 = new QBarSet("Communication");
                 QBarSet *set3 = new QBarSet("Salaires");
                 QBarSet *set4 = new QBarSet("Maintenance informatique");
                 QBarSet *set5 = new QBarSet("Fourniture informatique");
                 QBarSet *set6 = new QBarSet("Maintenance");
                 QBarSet *set7 = new QBarSet("Entretien vehicules");
                 QBarSet *set8 = new QBarSet("Loyer");

                 QSqlQuery qry_1;
                 qry_1.prepare("SELECT sum(VALEUR) FROM GESTIONDEP WHERE (extract(month from DATE_ENR))  ="
                               " extract(month from :ID) AND (extract(YEAR from DATE_ENR))  = extract(YEAR from :ID) AND TYPE= 'CARBURANT';");
                 qry_1.bindValue(":ID",dd);
                 qry_1.exec();
                 qry_1.first();
                 int car=qry_1.value(0).toInt();
                 qDebug()<<car;
                 QSqlQuery qry_2;
                 qry_2.prepare("SELECT sum(VALEUR) FROM GESTIONDEP WHERE (extract(month from DATE_ENR))  ="
                               " extract(month from :ID) AND (extract(YEAR from DATE_ENR))  = extract(YEAR from :ID) AND TYPE= 'ELECTRECITE';");
                 qry_2.bindValue(":ID",dd);
                 qry_2.exec();
                 qry_2.first();
                 int ele=qry_2.value(0).toInt();
                 qDebug()<<ele;
                 QSqlQuery qry_3;
                 qry_3.prepare("SELECT sum(VALEUR) FROM GESTIONDEP WHERE (extract(month from DATE_ENR))  ="
                               " extract(month from :ID) AND (extract(YEAR from DATE_ENR))  = extract(YEAR from :ID) AND TYPE= 'COMMUNICATION';");
                 qry_3.bindValue(":ID",dd);
                 qry_3.exec();
                 qry_3.first();
                 int com=qry_3.value(0).toInt();
                 qDebug()<<com;
                 QSqlQuery qry_4;
                 qry_4.prepare("SELECT sum(VALEUR) FROM GESTIONDEP WHERE (extract(month from DATE_ENR))  ="
                               " extract(month from :ID) AND (extract(YEAR from DATE_ENR))  = extract(YEAR from :ID) AND TYPE= 'Salaires';");
                 qry_4.bindValue(":ID",dd);
                 qry_4.exec();
                 qry_4.first();
                 int sal=qry_4.value(0).toInt();
                 qDebug()<<sal;
                 QSqlQuery qry_5;
                 qry_5.prepare("SELECT sum(VALEUR) FROM GESTIONDEP WHERE (extract(month from DATE_ENR))  ="
                               " extract(month from :ID) AND (extract(YEAR from DATE_ENR))  = extract(YEAR from :ID) AND TYPE= 'MAINTENANCEINFO';");
                 qry_5.bindValue(":ID",dd);
                 qry_5.exec();
                 qry_5.first();
                 int minf=qry_5.value(0).toInt();
                 qDebug()<<minf;
                 QSqlQuery qry_6;
                 qry_6.prepare("SELECT sum(VALEUR) FROM GESTIONDEP WHERE (extract(month from DATE_ENR))  ="
                               " extract(month from :ID) AND (extract(YEAR from DATE_ENR))  = extract(YEAR from :ID) AND TYPE= 'FOURNITUREINFO';");
                 qry_6.bindValue(":ID",dd);
                 qry_6.exec();
                 qry_6.first();
                 int finf=qry_6.value(0).toInt();

                 QSqlQuery qry_7;
                 qry_7.prepare("SELECT sum(VALEUR) FROM GESTIONDEP WHERE (extract(month from DATE_ENR))  ="
                               " extract(month from :ID) AND (extract(YEAR from DATE_ENR))  = extract(YEAR from :ID) AND TYPE= 'MAINTENANCE';");
                 qry_7.bindValue(":ID",dd);
                 qry_7.exec();
                 qry_7.first();
                 int maint=qry_7.value(0).toInt();


                 QSqlQuery qry_8;
                 qry_8.prepare("SELECT sum(VALEUR) FROM GESTIONDEP WHERE (extract(month from DATE_ENR))  ="
                               " extract(month from :ID) AND (extract(YEAR from DATE_ENR))  = extract(YEAR from :ID) AND TYPE= 'ENTRETIENV';");
                 qry_8.bindValue(":ID",dd);
                 qry_8.exec();
                 qry_8.first();
                 int env=qry_8.value(0).toInt();
                 QSqlQuery qry_9;
                 qry_9.prepare("SELECT sum(VALEUR) FROM GESTIONDEP WHERE (extract(month from DATE_ENR))  ="
                               " extract(month from :ID) AND (extract(YEAR from DATE_ENR))  = extract(YEAR from :ID) AND TYPE= 'Loyer';");
                 qry_9.bindValue(":ID",dd);
                 qry_9.exec();
                 qry_9.first();
                 int loy=qry_9.value(0).toInt();

                 // Assign values for each bar
                 *set0 << car << 0 << 0 << 0 << 0 << 0 <<0 << 0<<0;
                 *set1 << 0 << ele << 0 << 0 << 0 << 0 <<0 << 0<<0;
                 *set2 << 0 << 0 << com << 0 << 0 << 0 <<0 << 0<<0;
                 *set3 << 0 << 0 << 0 << sal << 0 << 0 <<0 << 0<<0;
                 *set4 << 0 << 0 << 0 << 0 << minf << 0<<0 << 0<<0;
                 *set5 << 0 << 0 << 0 << 0 << 0 << finf<<0 << 0<<0;
                 *set6 << 0 << 0 << 0 << 0 << 0 << 0<<maint<< 0<<0;
                 *set7 << 0 << 0 << 0 << 0 << 0 << 0<< 0 <<env <<0;
                 *set8 << 0 << 0 << 0 << 0 << 0 << 0<< 0 << 0<<loy;
                 // Add all sets of data to the chart as a whole
                 // 1. Bar Chart
                 QBarSeries *series = new QBarSeries();

                 // 2. Stacked bar chart
                 // QHorizontalStackedBarSeries *series = new QHorizontalStackedBarSeries();
                 series->append(set0);
                 series->append(set1);
                 series->append(set2);
                 series->append(set3);
                 series->append(set4);
                 series->append(set5);
                 series->append(set6);
                 series->append(set7);
                 series->append(set8);

                 set8->setColor(Qt::green);
                 set7->setColor(Qt::blue);
                 set6->setColor(Qt::black);
                 set5->setColor(Qt::red);
                 // Used to define the bar chart to display, title
                 // legend,
                 QChart *chart = new QChart();

                 // Add the chart
                 chart->addSeries(series);
             QString titre0=dd.toString();
             QString titre=("Statistiques Pour le :"+titre0);
                 // Set title
                 chart->setTitle(titre);

                 // Define starting animation
                 // NoAnimation, GridAxisAnimations, SeriesAnimations
                 chart->setAnimationOptions(QChart::AllAnimations);

                 // Holds the category titles
                 QStringList categories;
                 categories << "CARBURANT" << "ELECTRECITE" << "COMMUNICATION" << "Salaires" << "MAINTENANCEINFO" << "FOURNITUREINFO" << "MAINTENANCE" << "ENTRETIENV" <<" Loyer" ;
                 /*
                     ui->comboBox->addItem("CARBURANT");
                     ui->comboBox->addItem("ELECTRECITE");
                     ui->comboBox->addItem("COMMUNICATION");
                     ui->comboBox->addItem("Salaires");
                     ui->comboBox->addItem("MAINTENANCEINFO");
                     ui->comboBox->addItem("FOURNITUREINFO");
                     ui->comboBox->addItem("MAINTENANCE");
                     ui->comboBox->addItem("ENTRETIENV");
                     ui->comboBox->addItem("Loyer");
                 */
                 // Adds categories to the axes
                 QBarCategoryAxis *axis = new QBarCategoryAxis();
                 axis->append(categories);
                 chart->createDefaultAxes();

                 // 1. Bar chart
                 chart->setAxisX(axis, series);

                 // 2. Stacked Bar chart
                 // chart->setAxisY(axis, series);

                 // Define where the legend is displayed
                 chart->legend()->setVisible(true);
                 chart->legend()->setAlignment(Qt::AlignBottom);

                 // Used to display the chart
                 QChartView *chartView = new QChartView(chart);
                 chartView->resize(ui->frame->size());
                 chartView->setParent(ui->frame);
}

Dialog5::~Dialog5()
{
    delete ui;
}
