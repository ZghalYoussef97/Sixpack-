#include "dialog__6.h"
#include "ui_dialog__6.h"
#include<QtCharts>
#include<QBarSeries>
#include<QBarSet>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QSqlQueryModel>


Dialog__6::Dialog__6(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog__6)
{
    ui->setupUi(this);
    QString titre2 = "Charte(Un Jour)";
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
    QSqlQuery qry_1;
    qry_1.prepare("SELECT sum(VALEUR) FROM GESTIONREV WHERE (extract(YEAR from ID))  = extract(YEAR from :ID)");
    qry_1.bindValue(":ID",dd);
    qry_1.exec();
    qry_1.first();
    int car=qry_1.value(0).toInt();
    qDebug()<<car;
    QSqlQuery qry_2;
    qry_2.prepare("SELECT sum(VALEUR) FROM GESTIONDEP WHERE (extract(YEAR from DATE_ENR))  = extract(YEAR from :ID)");
    qry_2.bindValue(":ID",dd);
    qry_2.exec();
    qry_2.first();
    int ele=qry_2.value(0).toInt();
    *set0 << car << 0 ;
    *set1 << 0 << ele ;
    QBarSeries *series = new QBarSeries();

    // 2. Stacked bar chart
    // QHorizontalStackedBarSeries *series = new QHorizontalStackedBarSeries();
    series->append(set0);
    series->append(set1);
    QChart *chart = new QChart();

    // Add the chart
    chart->addSeries(series);
QString titre0=dd.toString();
QString titre1=("Statistiques Pour le :"+titre0);
    // Set title
    chart->setTitle(titre1);
    chart->setAnimationOptions(QChart::AllAnimations);

    // Holds the category titles
    QStringList categories;
    categories << "Les Revenus" << "Les Depenses"  ;
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

Dialog__6::~Dialog__6()
{
    delete ui;
}
