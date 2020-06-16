#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "depenses.h"
#include "revenus.h"
#include <QMessageBox>
#include <QSqlTableModel>
#include <QStandardItemModel>
#include <QItemSelectionModel>
#include <QTableView>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QtSql>
#include <Qt>
#include <QSqlQueryModel>
#include <connexion.h>
#include <QDate>
#include <QPrinter>
#include <QPrintDialog>
#include <QTextDocument>
#include <dialog.h>
#include <dialog_.h>
#include <dialog4.h>
#include <dialog44.h>
#include "autres.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->comboBox->addItem("...");
    ui->comboBox->addItem("CARBURANT");
    ui->comboBox->addItem("ELECTRECITE");
    ui->comboBox->addItem("COMMUNICATION");
    ui->comboBox->addItem("Salaires");
    ui->comboBox->addItem("MAINTENANCEINFO");
    ui->comboBox->addItem("FOURNITUREINFO");
    ui->comboBox->addItem("MAINTENANCE");
    ui->comboBox->addItem("ENTRETIENV");
    ui->comboBox->addItem("Loyer");
    ui->comboBox_2->addItem("CARBURANT");
    ui->comboBox_2->addItem("ELECTRECITE");
    ui->comboBox_2->addItem("COMMUNICATION");
    ui->comboBox_2->addItem("Salaires");
    ui->comboBox_2->addItem("MAINTENANCEINFO");
    ui->comboBox_2->addItem("FOURNITUREINFO");
    ui->comboBox_2->addItem("MAINTENANCE");
    ui->comboBox_2->addItem("ENTRETIENV");
    ui->comboBox_2->addItem("Loyer");
    ui->comboBox_2->addItem("autres");
    ui->comboBox_2->addItem("TOUS");
    ui->comboBox_5->addItem("CARBURANT");
    ui->comboBox_5->addItem("ELECTRECITE");
    ui->comboBox_5->addItem("COMMUNICATION");
    ui->comboBox_5->addItem("Salaires");
    ui->comboBox_5->addItem("MAINTENANCEINFO");
    ui->comboBox_5->addItem("FOURNITUREINFO");
    ui->comboBox_5->addItem("MAINTENANCE");
    ui->comboBox_5->addItem("ENTRETIENV");
    ui->comboBox_5->addItem("Loyer");
    ui->comboBox_5->addItem("autres");
    ui->comboBox_3->addItem("COMMITIONS_TRANSACTIONS");
    ui->comboBox_3->addItem("LIVRAISONS");
    ui->comboBox_3->addItem("SERVICES_EN_LIGNE");
    ui->comboBox_3->addItem("TRANSACTION_POSTALE");
    ui->comboBox_4->addItem("COMMITIONS_TRANSACTIONS");
    ui->comboBox_4->addItem("LIVRAISONS");
    ui->comboBox_4->addItem("SERVICES_EN_LIGNE");
    ui->comboBox_4->addItem("TRANSACTION_POSTALE");
    ui->comboBox_4->addItem("TOUS");
    ui->comboBox_6->addItem("COMMITIONS_TRANSACTIONS");
    ui->comboBox_6->addItem("LIVRAISONS");
    ui->comboBox_6->addItem("SERVICES_EN_LIGNE");
    ui->comboBox_6->addItem("TRANSACTION_POSTALE");
    ui->comboBox_7->addItem("...");
    ui->comboBox_7->addItem("Date croissante");
    ui->comboBox_7->addItem("Date decroissante");
    ui->comboBox_7->addItem("valeurs croissante");
    ui->comboBox_7->addItem("valeurs decroissante");
    ui->comboBox_8->addItem("...");
    ui->comboBox_8->addItem("Date croissante");
    ui->comboBox_8->addItem("Date decroissante");
    ui->comboBox_8->addItem("valeurs croissante");
    ui->comboBox_8->addItem("valeurs decroissante");
}

MainWindow::~MainWindow()
{
    delete ui;
}


QSqlQueryModel * depenses::afficher()
{
QSqlQueryModel *model= new QSqlQueryModel();

model->setQuery("SELECT * FROM GESTIONDEP;");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("Type"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("valeur"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("Date"));

model->setQuery("select * from GESTIONDEP order by DATE_ENR DeSC ");
return model;
}
QSqlQueryModel * depenses::afficher1()
{
QSqlQueryModel *model= new QSqlQueryModel();

model->setQuery("SELECT * FROM GESTIONDEP;");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("Type"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("valeur"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("Date"));

model->setQuery("select * from GESTIONDEP order by DATE_ENR ASC ");
return model;
}
QSqlQueryModel * depenses::afficher2()
{
QSqlQueryModel *model= new QSqlQueryModel();

model->setQuery("SELECT * FROM GESTIONDEP;");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("Type"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("valeur"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("Date"));

model->setQuery("select * from GESTIONDEP order by VALEUR ASC ");
return model;
}
QSqlQueryModel * depenses::afficher3()
{
QSqlQueryModel *model= new QSqlQueryModel();

model->setQuery("SELECT * FROM GESTIONDEP;");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("Type"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("valeur"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("Date"));

model->setQuery("select * from GESTIONDEP order by VALEUR DeSC ");
return model;
}
QSqlQueryModel * revenus::afficher()
{
QSqlQueryModel *model= new QSqlQueryModel();
model->setQuery("SELECT * FROM GESTIONREV;");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("Type"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("valeur"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("Date"));
model->setQuery("select * from GESTIONREV order by ID DeSC ");
return model;
}
QSqlQueryModel * revenus::afficher1()
{
QSqlQueryModel *model= new QSqlQueryModel();
model->setQuery("SELECT * FROM GESTIONREV;");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("Type"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("valeur"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("Date"));
model->setQuery("select * from GESTIONREV order by ID ASC ");
return model;
}

QSqlQueryModel * revenus::afficher2()
{
QSqlQueryModel *model= new QSqlQueryModel();
model->setQuery("select * from GESTIONREV order by VALEUR ASC ");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("Type"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("valeur"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("Date"));

return model;
}
QSqlQueryModel * revenus::afficher3()
{
QSqlQueryModel *model= new QSqlQueryModel();
model->setQuery("SELECT * FROM GESTIONREV;");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("Type"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("valeur"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("Date"));
model->setQuery("select * from GESTIONREV order by VALEUR DeSC ");
return model;
}
void MainWindow::on_pushButton_clicked()
{
    QString id = ui->lineEdit->text();
    QDate Date=ui->dateEdit->date();
   QString cur=ui->comboBox->currentText();
   QSqlQuery qry;
   qry.prepare("INSERT INTO GESTIONDEP(DATE_ENR,VALEUR,TYPE) VALUES(:Date,:ID,:TYPE)");
   qry.bindValue(":ID",id);
   qry.bindValue(":Date",Date);
   qry.bindValue(":TYPE",cur);
   qry.exec();
    ui->tableView->setModel(tmpetudiant.afficher());
     ui->tableView->setColumnWidth(0,150);
     ui->tableView->setColumnWidth(1,150);
     ui->tableView->setColumnWidth(2,150);

}


void MainWindow::on_pushButton_2_clicked()
{
    QSqlQuery qry;
    QDate id= ui->dateEdit_2->date();
    QString cur2=ui->comboBox_2->currentText();
    if (cur2=="TOUS")
    {
        qry.prepare("DELETE FROM GESTIONDEP  WHERE DATE_ENR=:id" );
        qry.bindValue(":id",id);
    }
    else
    {
    qry.prepare("DELETE FROM GESTIONDEP  WHERE DATE_ENR=:id AND TYPE= :cur2" );
    qry.bindValue(":id",id);
    qry.bindValue(":cur2",cur2);
    }
    qry.exec();
    ui->lineEdit_6->setText(cur2+" SUPPRIME" );
    ui->tableView->setModel(tmpetudiant.afficher());
    ui->tableView->setColumnWidth(2,150);
    ui->tableView->setColumnWidth(4,150);
    ui->tableView->setColumnWidth(5,150);
    ui->tableView->setColumnWidth(6,150);
    }



// int id = ui->lineEdit->text().toInt();
// QString nom=ui->lineEdit_2->text();
// QString prenom=ui->lineEdit_3->text();
// depenses e(id,cur1,cur2,cur3,cur4,cur5,cur6,cur7,cur8);
// bool test= e.ajouter();
// ui->tabletudiant->setModel(tmpetudiant.afficher());


void MainWindow::on_pushButton_8_clicked()
{
    QString id = ui->lineEdit_2->text();
    QDate Date = ui->dateEdit_5->date();
   QString cur=ui->comboBox_5->currentText();
   QSqlQuery qry;

   qry.prepare("UPDATE GESTIONDEP SET VALEUR=:ID WHERE DATE_ENR=:Date AND TYPE= :cur;");
   qry.bindValue(":ID",id);
   qry.bindValue(":Date",Date);
   qry.bindValue(":cur",cur);
   qry.exec();
   ui->tableView->setModel(tmpetudiant.afficher());
   ui->tableView->setColumnWidth(2,150);
   ui->tableView->setColumnWidth(4,150);
   ui->tableView->setColumnWidth(5,150);
   ui->tableView->setColumnWidth(6,150);

}


void MainWindow::on_pushButton_3_clicked()
{
    QString id = ui->lineEdit_3->text();
    QDate Date = ui->dateEdit_3->date();
   QString cur=ui->comboBox_3->currentText();
   QSqlQuery qry;
   qry.prepare("INSERT INTO GESTIONREV (ID,VALEUR,TYPE) VALUES(:Date,:ID,:TYPE)");
   qry.bindValue(":ID",id);
   qry.bindValue(":Date",Date);
   qry.bindValue(":TYPE",cur);
   qry.exec();
   ui->tableView_3->setModel(tmpetudiant2.afficher());
   ui->tableView_3->setColumnWidth(0,220);
   ui->tableView_3->setColumnWidth(2,150);
   ui->tableView_3->setColumnWidth(3,200);
   ui->tableView_3->setSortingEnabled(true);

}
void MainWindow::on_pushButton_4_clicked()
{
    QSqlQuery qry;
    QDate id= ui->dateEdit_4->date();
    QString cur2=ui->comboBox_4->currentText();
    if (cur2=="TOUS")
    {
        qry.prepare("DELETE FROM GESTIONREV  WHERE ID=:id" );
        qry.bindValue(":id",id);
    }
    else
    {
    qry.prepare("DELETE FROM GESTIONREV  WHERE ID=:id AND TYPE= :cur2" );
    qry.bindValue(":id",id);
    qry.bindValue(":cur2",cur2);
    }

    ui->tableView_3->setModel(tmpetudiant2.afficher());
    ui->tableView_3->setColumnWidth(0,220);
    ui->tableView_3->setColumnWidth(2,150);
    ui->tableView_3->setColumnWidth(3,200);
    ui->tableView_3->setSortingEnabled(true);
     qry.exec();
}

void MainWindow::on_pushButton_9_clicked()
{
    QString id = ui->lineEdit_4->text();
    QDate Date = ui->dateEdit_6->date();
   QString cur=ui->comboBox_6->currentText();
   QSqlQuery qry;
   qry.prepare("UPDATE GESTIONREV SET VALEUR=:ID WHERE ID=:Date AND TYPE=:cur;");
   qry.bindValue(":ID",id);
   qry.bindValue(":Date",Date);
   qry.bindValue(":cur",cur);
   qry.exec();
   ui->tableView_3->setModel(tmpetudiant2.afficher());
   ui->tableView_3->setColumnWidth(0,220);
   ui->tableView_3->setColumnWidth(2,150);
   ui->tableView_3->setColumnWidth(3,200);
   ui->tableView_3->setSortingEnabled(true);
}
//VALEUR=:ID WHERE DATE_ENR=:Date AND TYPE= :cur;

void MainWindow::on_pushButton_5_clicked()
{

    QString strStream;
    QTextStream out(&strStream);

    const int rowCount = ui->tableView->model()->rowCount();
    const int columnCount = ui->tableView->model()->columnCount();

    out <<  "<html>\n"
        "<head>\n"
        "<meta Content=\"Text/html; charset=Windows-1251\">\n"

        <<  "</head>\n"
        "<body bgcolor=#ffffff link=#5000A0>\n"
        "<table border=1 cellspacing=0 cellpadding=2>\n";

    // headers
    out << "<thead><tr bgcolor=#f0f0f0>";
    for (int column = 0; column < columnCount; column++)
        if (!ui->tableView->isColumnHidden(column))
            out << QString("<th>%1</th>").arg(ui->tableView->model()->headerData(column, Qt::Horizontal).toString());
    out << "</tr></thead>\n";

    // data table
    for (int row = 0; row < rowCount; row++) {
        out << "<tr>";
        for (int column = 0; column < columnCount; column++) {
            if (!ui->tableView->isColumnHidden(column)) {
                QString data = ui->tableView->model()->data(ui->tableView->model()->index(row, column)).toString().simplified();
                out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
            }
        }
        out << "</tr>\n";
    }
    out <<  "</table>\n"
        "</body>\n"
        "</html>\n";

    QTextDocument *document = new QTextDocument();
    document->setHtml(strStream);

    QPrinter printer;

    QPrintDialog *dialog = new QPrintDialog(&printer, NULL);
    if (dialog->exec() == QDialog::Accepted) {
        document->print(&printer);
    }

    delete document;
}


 void MainWindow::on_pushButton_6_clicked()
{
     ui->tableView->setModel(tmpetudiant.afficher());
     ui->tableView->setColumnWidth(0,150);
     ui->tableView->setColumnWidth(1,150);
     ui->tableView->setColumnWidth(2,150);


}

void MainWindow::on_pushButton_11_clicked()
{
    QString id=ui->comboBox_7->currentText();
    if (id=="Date croissante")
       { ui->tableView->setModel(tmpetudiant.afficher1());
        ui->tableView->setColumnWidth(0,150);
        ui->tableView->setColumnWidth(1,150);
        ui->tableView->setColumnWidth(2,150);

    }
    else if  (id=="valeurs croissante")
     {   ui->tableView->setModel(tmpetudiant.afficher2());
        ui->tableView->setColumnWidth(0,150);
        ui->tableView->setColumnWidth(1,150);
        ui->tableView->setColumnWidth(2,150);


    }

    else if (id=="valeurs decroissante")
{
    ui->tableView->setModel(tmpetudiant.afficher3());
    ui->tableView->setColumnWidth(0,150);
    ui->tableView->setColumnWidth(1,150);
    ui->tableView->setColumnWidth(2,150);

}
    else
    {
        ui->tableView->setModel(tmpetudiant.afficher());
        ui->tableView->setColumnWidth(0,150);
        ui->tableView->setColumnWidth(1,150);
        ui->tableView->setColumnWidth(2,150);

    }
  }
void MainWindow::on_pushButton_7_clicked()
{

}
void MainWindow::on_pushButton_10_clicked()
{

}

void MainWindow::on_pushButton_12_clicked()
{
    Dialog Dialog;
    Dialog.setModal(true);
    Dialog.exec();
}

void MainWindow::on_pushButton_15_clicked()
{
    ui->tableView_3->setModel(tmpetudiant2.afficher());
    ui->tableView_3->setColumnWidth(0,150);
    ui->tableView_3->setColumnWidth(1,150);
    ui->tableView_3->setColumnWidth(2,150);

}

void MainWindow::on_pushButton_13_clicked()
{
    QString id=ui->comboBox_8->currentText();
    if (id=="Date croissante")
       { ui->tableView_3->setModel(tmpetudiant2.afficher1());
        ui->tableView_3->setColumnWidth(0,150);
        ui->tableView_3->setColumnWidth(1,150);
        ui->tableView_3->setColumnWidth(2,150);
    }
    else if  (id=="valeurs croissante")
     {   ui->tableView_3->setModel(tmpetudiant2.afficher2());
        ui->tableView_3->setColumnWidth(0,150);
        ui->tableView_3->setColumnWidth(1,150);
        ui->tableView_3->setColumnWidth(2,150);


    }

    else if (id=="valeurs decroissante")
{
    ui->tableView_3->setModel(tmpetudiant2.afficher3());
            ui->tableView_3->setColumnWidth(0,150);
            ui->tableView_3->setColumnWidth(1,150);
            ui->tableView_3->setColumnWidth(2,150);

}
    else
    {
        ui->tableView_3->setModel(tmpetudiant2.afficher());
                ui->tableView_3->setColumnWidth(0,150);

    }
}

void MainWindow::on_pushButton_17_clicked()
{
    QString strStream;
    QTextStream out(&strStream);

    const int rowCount = ui->tableView_3->model()->rowCount();
    const int columnCount = ui->tableView_3->model()->columnCount();

    out <<  "<html>\n"
        "<head>\n"
        "<meta Content=\"Text/html; charset=Windows-1251\">\n"

        <<  "</head>\n"
        "<body bgcolor=#ffffff link=#5000A0>\n"
        "<table border=1 cellspacing=0 cellpadding=2>\n";

    // headers
    out << "<thead><tr bgcolor=#f0f0f0>";
    for (int column = 0; column < columnCount; column++)
        if (!ui->tableView_3->isColumnHidden(column))
            out << QString("<th>%1</th>").arg(ui->tableView_3->model()->headerData(column, Qt::Horizontal).toString());
    out << "</tr></thead>\n";

    // data table
    for (int row = 0; row < rowCount; row++) {
        out << "<tr>";
        for (int column = 0; column < columnCount; column++) {
            if (!ui->tableView_3->isColumnHidden(column)) {
                QString data = ui->tableView_3->model()->data(ui->tableView_3->model()->index(row, column)).toString().simplified();
                out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
            }
        }
        out << "</tr>\n";
    }
    out <<  "</table>\n"
        "</body>\n"
        "</html>\n";

    QTextDocument *document = new QTextDocument();
    document->setHtml(strStream);

    QPrinter printer;

    QPrintDialog *dialog = new QPrintDialog(&printer, NULL);
    if (dialog->exec() == QDialog::Accepted) {
        document->print(&printer);
}
}


void MainWindow::on_pushButton_14_clicked()
{
    Dialog_ Dialog_;
    Dialog_.setModal(true);
    Dialog_.exec();
}

void MainWindow::on_pushButton_21_clicked()
{
    autres autres;
    autres.setModal(true);
    autres.exec();
}

void MainWindow::on_pushButton_20_clicked()
{
    autres autres;
    autres.setModal(true);
    autres.exec();
}
