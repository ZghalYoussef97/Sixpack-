#include "dialog_6.h"
#include "ui_dialog_6.h"
#include <QDebug>
#include<QtCharts>
#include<QBarSeries>
#include<QBarSet>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QSqlQueryModel>
Dialog_6::Dialog_6(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_6)
{
    ui->setupUi(this);
    QString titre2 = "Charte(Une Année)";
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

                 QBarSet *set0 = new QBarSet("COMMITIONS_TRANSACTIONS");
                 QBarSet *set1 = new QBarSet("LIVRAISONS");
                 QBarSet *set2 = new QBarSet("SERVICES_EN_LIGNE");
                 QBarSet *set3 = new QBarSet("TRANSACTION_POSTALE");


                 QSqlQuery qry_1;
                 qry_1.prepare("SELECT sum(VALEUR) FROM GESTIONREV WHERE (extract(YEAR from ID))  = extract(YEAR from :ID) AND TYPE= 'COMMITIONS_TRANSACTIONS';");
                 qry_1.bindValue(":ID",dd);
                 qry_1.exec();
                 qry_1.first();
                 int car=qry_1.value(0).toInt();
                 qDebug()<<car;
                 QSqlQuery qry_2;
                 qry_2.prepare("SELECT sum(VALEUR) FROM GESTIONREV WHERE (extract(YEAR from ID))  = extract(YEAR from :ID) AND TYPE= 'LIVRAISONS';");
                 qry_2.bindValue(":ID",dd);
                 qry_2.exec();
                 qry_2.first();
                 int ele=qry_2.value(0).toInt();
                 qDebug()<<ele;
                 QSqlQuery qry_3;
                 qry_3.prepare("SELECT sum(VALEUR) FROM GESTIONREV WHERE (extract(YEAR from ID))  = extract(YEAR from :ID) AND TYPE= 'SERVICES_EN_LIGNE';");
                 qry_3.bindValue(":ID",dd);
                 qry_3.exec();
                 qry_3.first();
                 int com=qry_3.value(0).toInt();
                 qDebug()<<com;
                 QSqlQuery qry_4;
                 qry_4.prepare("SELECT sum(VALEUR) FROM GESTIONREV WHERE (extract(YEAR from ID))  = extract(YEAR from :ID) AND TYPE= 'TRANSACTION_POSTALE';");
                 qry_4.bindValue(":ID",dd);
                 qry_4.exec();
                 qry_4.first();
                 int sal=qry_4.value(0).toInt();
                 qDebug()<<sal;


                 // Assign values for each bar
                 *set0 << car << 0 << 0 << 0 ;
                 *set1 << 0 << ele << 0 << 0 ;
                 *set2 << 0 << 0 << com << 0 ;
                 *set3 << 0 << 0 << 0 << sal ;

                 // Add all sets of data to the chart as a whole
                 // 1. Bar Chart
                 QBarSeries *series = new QBarSeries();

                 // 2. Stacked bar chart
                 // QHorizontalStackedBarSeries *series = new QHorizontalStackedBarSeries();
                 series->append(set0);
                 series->append(set1);
                 series->append(set2);
                 series->append(set3);



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
                 categories << "COMMITIONS_TRANSACTIONS" << "LIVRAISONS" << "SERVICES_EN_LIGNE" << "TRANSACTION_POSTALE" ;
                 /*
    ui->comboBox_3->addItem("COMMITIONS_TRANSACTIONS");
    ui->comboBox_3->addItem("LIVRAISONS");
    ui->comboBox_3->addItem("SERVICES_EN_LIGNE");
    ui->comboBox_3->addItem("TRANSACTION_POSTALE");
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

Dialog_6::~Dialog_6()
{
    delete ui;
}
