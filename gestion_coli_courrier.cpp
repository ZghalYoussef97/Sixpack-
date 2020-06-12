#include "gestion_coli_courrier.h"
#include "ui_gestion_coli_courrier.h"
#include "connexion.h"
#include "coli.h"
#include "stat_etat.h"
#include "equipement.h"
#include "livraison.h"
#include <QMessageBox>
#include <QDate>
#include <QDialog>

#include <QApplication>
#include <QTextEdit>
#include <QFile>
#include <QString>
#include <QTextStream>
#include <QDebug>
#include <QPainter>
#include <QtPrintSupport/QPrinter>
#include <QTextDocument>
#include <QPrintDialog>
#include "export_excel.h"
#include <QFileDialog>

Gestion_Coli_Courrier::Gestion_Coli_Courrier(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Gestion_Coli_Courrier)
{
    ui->setupUi(this);
    ui->Priorite->addItem("Haute");
    ui->Priorite->addItem("Normale");
    ui->Priorite->addItem("Basse");
    ui->Etat->addItem("En attente");
    ui->Etat->addItem("En cours de livraison");
    ui->Etat->addItem("Livre");
    ui->comboBox_3->addItem("Moto de livraison");
    ui->comboBox_3->addItem("Voiture");
    gestion_tabs();


    connect(ui->sendBtn, SIGNAL(clicked()),this, SLOT(sendMail()));
    connect(ui->browseBtn, SIGNAL(clicked()), this, SLOT(browse()));
}

Gestion_Coli_Courrier::~Gestion_Coli_Courrier()
{
    delete ui;
}


void Gestion_Coli_Courrier::gestion_tabs()
{
    ui->tableColi->setModel(tmpcoli.afficherColi());
       ui->tableView_3->setModel(tmpequip.afficherEquip());
       ui->comboBox->setModel(tmpcoli.afficheridcoli());
       ui->comboBox_2->setModel(tmpequip.afficheridequip());
       ui->tableView_4->setModel(tmpliv.afficherLiv());
}

//***********************************CRUD Coli***********************************
void Gestion_Coli_Courrier::on_ajoutercoli_clicked()
{
    int reponse=QMessageBox::question(this,"Confirmation","Voulez vous ajouter ce coli ?", QMessageBox::Yes | QMessageBox::No);
    if (reponse == QMessageBox::Yes)
       {
        QString idcoli=ui->idcoli->text();
        QString adresseem=ui->Adresseem->toPlainText();
        QString adressedest=ui->Adressedest->toPlainText();
        QString priorite=ui->Priorite->currentText();
        int poids=ui->Poids->text().toInt();
        int prix =ui->Prix->text().toInt();
        QString etat = ui->Etat->currentText();
        int avecliv;
        if (ui->Avecliv->isChecked())
        {
            avecliv=1;
        }
        else
        {
            avecliv=0;
        }
        coli c(idcoli,adresseem,adressedest,priorite,poids,prix,etat,avecliv);
        bool test= c.ajouterColi();
        if(test)
        {
        ui->tableColi->setModel(tmpcoli.afficherColi());//refresh
        QMessageBox::information(nullptr, QObject::tr("Ajouter un coli"),
        QObject::tr("coli ajouté.\n"
                "Click Cancel to exit."), QMessageBox::Cancel);
        }
        else
        {
        QMessageBox::critical(nullptr, QObject::tr("Ajouter un coli"),
        QObject::tr("Erreur !.\n"
                "Click Cancel to exit."), QMessageBox::Cancel);
        }
       }
    else if (reponse == QMessageBox::No)
       {
            QMessageBox::critical(this, "Annulation", "L'ajout de ce coli a ete annulee !");
       }

    gestion_tabs();
}

void Gestion_Coli_Courrier::on_suppcoli_clicked()
{
    int reponse = QMessageBox::question(this,"Confirmation","Voulez-vous vraiment supprimer ce coli ?", QMessageBox ::Yes | QMessageBox::No);
    if (reponse == QMessageBox::Yes)
    {
        bool res ;
        coli c;
        QString q ;
        QModelIndex index ;
        QModelIndexList selection = ui->tableColi->selectionModel()->selectedRows();
        for (int i =0;i<selection.count();i++)
        {
            index=selection.at(i);
            q=QVariant(ui->tableColi->model()->index(index.row(),0).data()).toString();
            res = c.supprimerColi(q) ;
                if (res == QDialog::Accepted)
                {
                        ui->tableColi->setModel(tmpcoli.afficherColi());
                        QMessageBox::information(nullptr, QObject::tr("Supprimer un coli"),
                        QObject::tr("coli supprimé.\n"
                        "Click Cancel to exit."), QMessageBox::Cancel);
                }
        }
    }
    else if (reponse == QMessageBox::No)
    {
        QMessageBox::critical(this, "Annulation", "La suppression de ce coli a ete annulee !");
    }

    gestion_tabs();

}


void Gestion_Coli_Courrier::on_modifiercoli_clicked()
{
    int reponse=QMessageBox::question(this,"Confirmation","Voulez vous modifier ce coli ?", QMessageBox::Yes | QMessageBox::No);
    if (reponse == QMessageBox::Yes)
       {
        QString q ;
        QModelIndex index ;
        QModelIndexList selection = ui->tableColi->selectionModel()->selectedRows();
        for (int i =0;i<selection.count();i++)
        {
            index=selection.at(i);
            q=QVariant(ui->tableColi->model()->index(index.row(),0).data()).toString();
            ui->idcoli->setText(q);
        //save
        QString idcoli=ui->idcoli->text();
        QString adresseem=ui->Adresseem->toPlainText();
        QString adressedest=ui->Adressedest->toPlainText();
        QString priorite=ui->Priorite->currentText();
        int poids=ui->Poids->text().toInt();
        int prix =ui->Prix->text().toInt();
        QString etat = ui->Etat->currentText();
        int avecliv;
        if (ui->Avecliv->isChecked())
        {
            avecliv=1;
        }
        else
        {
            avecliv=0;
        }
        coli c(adresseem,adressedest,priorite,poids,prix,etat,avecliv);
        bool test= c.modifierColi(idcoli);
        if(test)
        {
        ui->tableColi->setModel(tmpcoli.afficherColi());//refresh
        QMessageBox::information(nullptr, QObject::tr("Modifier un coli"),
        QObject::tr("coli modifié.\n"
                "Click Cancel to exit."), QMessageBox::Cancel);
        }
        else
        {
        QMessageBox::critical(nullptr, QObject::tr("Modifier un coli"),
        QObject::tr("Erreur !.\n"
                "Click Cancel to exit."), QMessageBox::Cancel);
        }
       }
    }
    else if (reponse == QMessageBox::No)
       {
            QMessageBox::critical(this, "Annulation", "La modification de ce coli a ete annulee !");
       }

    gestion_tabs();
}


//******************************** metiers *************************************

void Gestion_Coli_Courrier::on_tri_coli_clicked()
{
    QString mode;
        if (ui->checkBox_1->isChecked())
        {
            mode="DESC";
        }
        else
        {
            mode="ASC";
        }
        ui->tableColi->setModel(tmpcoli.trier(ui->comboBox_5->currentText(),mode));
}

void Gestion_Coli_Courrier::on_recherche_textChanged(const QString &arg1)
{
    ui->tableColi->setModel(tmpcoli.recherche(arg1));
}

void Gestion_Coli_Courrier::on_stat1_clicked()
{
    stat_etat stat_etat;
    stat_etat.setModal(true);
    stat_etat.exec();
}

void Gestion_Coli_Courrier::on_EXCEL1_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Excel file"), qApp->applicationDirPath (),
                                                        tr("Excel Files (*.xls)"));
        if (fileName.isEmpty())
            return;

        ExportExcelObject obj(fileName, "mydata", ui->tableColi);
        //colums to export
        obj.addField(0, "IDCOLI", "char(20)");
        obj.addField(1, "ADRESSEEM", "char(20)");
        obj.addField(2, "ADRESSEDEST", "char(20)");
        obj.addField(3, "PRIORITE", "char(20)");
        obj.addField(4, "POIDS", "char(20)");
        obj.addField(5, "PRIX", "char(20)");
        obj.addField(6, "ETAT", "char(20)");
        obj.addField(7, "AVECLIV", "char(20)");
        int retVal = obj.export2Excel();
        if( retVal > 0)
        {
            QMessageBox::information(this, tr("Done"),
                                     QString(tr("%1 records exported!")).arg(retVal)
                                     );
        }
}


//***********************************CRUD Equipement***********************************

void Gestion_Coli_Courrier::on_ajouterequip_clicked()
{
    int reponse = QMessageBox::question(this, "Confirmation","Voulez vous ajouter cet equipement ?", QMessageBox ::Yes | QMessageBox::No);
    if (reponse == QMessageBox::Yes)
    {
        QString idequip=ui->lineEdit_2->text();
        QString type=ui->comboBox_3->currentText();
        int dispo;
        if (ui->checkBox->isChecked())
        {
            dispo=1;
        }
        else
        {
            dispo=0;
        }
        equipement e(idequip,type,dispo);
        bool test= e.ajouterEquip();
        if(test)
        {
        ui->tableView_3->setModel(tmpequip.afficherEquip());//refresh
        QMessageBox::information(nullptr, QObject::tr("Ajouter un equipement"),
        QObject::tr("equipement ajouté.\n"
                     "Click Cancel to exit."), QMessageBox::Cancel);
        }
        else
        {
        QMessageBox::critical(nullptr, QObject::tr("Ajouter un equipement"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);
        }
    }
    else if (reponse == QMessageBox::No)
    {
         QMessageBox::critical(this, "Annulation", "L'ajout de cet equipement a ete annulee !");
    }

    gestion_tabs();
}



void Gestion_Coli_Courrier::on_modifierequip_clicked()
{
    int reponse = QMessageBox::question(this, "Confirmation","Voulez vous modifier cet equipement ?", QMessageBox ::Yes | QMessageBox::No);
    if (reponse == QMessageBox::Yes)
    {
        QString q ;
        QModelIndex index ;
        QModelIndexList selection = ui->tableView_3->selectionModel()->selectedRows();
        for (int i =0;i<selection.count();i++)
        {
            index=selection.at(i);
            q=QVariant(ui->tableView_3->model()->index(index.row(),0).data()).toString();
            ui->lineEdit_2->setText(q);
        //save
        QString idequip=ui->lineEdit_2->text();
        QString type=ui->comboBox_3->currentText();
        int dispo;
        if (ui->checkBox->isChecked())
        {
            dispo=1;
        }
        else
        {
            dispo=0;
        }
        equipement e(type,dispo);
        bool test= e.modifierEquip(q);
        if(test)
        {
        ui->tableView_3->setModel(tmpequip.afficherEquip());//refresh
        QMessageBox::information(nullptr, QObject::tr("modifier un equipement"),
        QObject::tr("equipement ajouté.\n"
                     "Click Cancel to exit."), QMessageBox::Cancel);
        }
        else
        {
        QMessageBox::critical(nullptr, QObject::tr("modifier un equipement"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);
        }
        }
    }
    else if (reponse == QMessageBox::No)
    {
         QMessageBox::critical(this, "Annulation", "la modification de cet equipement a ete annulee !");
    }

    gestion_tabs();
}


void Gestion_Coli_Courrier::on_supp_equip_clicked()
{
    int reponse = QMessageBox::question(this,"Confirmation","Voulez-vous vraiment supprimer cet équipement ?", QMessageBox ::Yes | QMessageBox::No);
    if (reponse == QMessageBox::Yes)
    {
    bool res ;
    equipement e;
    QString q ;
    QModelIndex index ;
    QModelIndexList selection = ui->tableView_3->selectionModel()->selectedRows();
    for (int i =0;i<selection.count();i++)
    {
        index=selection.at(i);
        q=QVariant(ui->tableView_3->model()->index(index.row(),0).data()).toString();
        res = e.supprimerEquip(q) ;
            if (res == QDialog::Accepted)
            {
                    ui->tableView_3->setModel(tmpequip.afficherEquip());
                    QMessageBox::information(nullptr, QObject::tr("Supprimer un equipement"),
                    QObject::tr("equipement supprimé.\n"
                    "Click Cancel to exit."), QMessageBox::Cancel);
            }
    }
    }
    else if (reponse == QMessageBox::No)
    {
        QMessageBox::critical(this, "Annulation", "La suppression de cet equipement a ete annulee !");
    }

    gestion_tabs();
}




//***********************************CRUD Livraison***********************************


void Gestion_Coli_Courrier::on_ajouterliv_clicked()
{
    int reponse = QMessageBox::question(this, "Confirmation","Voulez vous ajouter cette livraison ?", QMessageBox ::Yes | QMessageBox::No);
    if (reponse == QMessageBox::Yes)
    {
        QString idliv=ui->lineEdit_idliv->text();
        QString lidcoli=ui->comboBox->currentText();
        QString lidequip=ui->comboBox_2->currentText();
        QDate ldate=ui->dateTimeEdit->date();
        livraison l(idliv,lidcoli,lidequip,ldate);
        bool test= l.ajouterLiv();
        if(test)
        {
            ui->tableView_4->setModel(tmpliv.afficherLiv());//refresh
            QMessageBox::information(nullptr, QObject::tr("Ajouter une livraison"),
            QObject::tr("livraison ajouté.\n"
                     "Click Cancel to exit."), QMessageBox::Cancel);
        }
        else
        {
            QMessageBox::critical(nullptr, QObject::tr("Ajouter une livraison"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);
        }
    }
    else if (reponse == QMessageBox::No)
    {
         QMessageBox::critical(this, "Annulation", "L'ajout de cet livraison a ete annulee !");
    }

    gestion_tabs();
}

void Gestion_Coli_Courrier::on_supp_liv_clicked()
{
    int reponse = QMessageBox::question(this,"Confirmation","Voulez-vous vraiment supprimer cette livraison ?", QMessageBox ::Yes | QMessageBox::No);
    if (reponse == QMessageBox::Yes)
    {
        bool res ;
        livraison l;
        QString q ;
        QModelIndex index ;
        QModelIndexList selection = ui->tableView_4->selectionModel()->selectedRows();
        for (int i =0;i<selection.count();i++)
            {
                index=selection.at(i);
                q=QVariant(ui->tableView_4->model()->index(index.row(),0).data()).toString();
                res = l.supprimerLiv(q) ;
                if (res == QDialog::Accepted)
                {
                    ui->tableView_4->setModel(tmpliv.afficherLiv());
                    QMessageBox::information(nullptr, QObject::tr("Supprimer une livraison"),
                    QObject::tr("livraison supprimé.\n"
                    "Click Cancel to exit."), QMessageBox::Cancel);
                }
            }
    }
    else if (reponse == QMessageBox::No)
    {
        QMessageBox::critical(this, "Annulation", "La suppression de cette livraison a ete annulee !");
    }

    gestion_tabs();
}

void Gestion_Coli_Courrier::on_pushButton_9_clicked()
{
    int reponse = QMessageBox::question(this,"Confirmation","Voulez-vous vraiment modifier cette livraison ?", QMessageBox ::Yes | QMessageBox::No);
    if (reponse == QMessageBox::Yes)
    {

        QString q ;
        QModelIndex index ;
        QModelIndexList selection = ui->tableView_4->selectionModel()->selectedRows();
        for (int i =0;i<selection.count();i++)
            {
                index=selection.at(i);
                q=QVariant(ui->tableView_4->model()->index(index.row(),0).data()).toString();
                QString idliv=ui->lineEdit_idliv->text();
                QString lidcoli=ui->comboBox->currentText();
                QString lidequip=ui->comboBox_2->currentText();
                QDate ldate=ui->dateTimeEdit->date();
                livraison l(lidcoli,lidequip,ldate);
                bool test= l.modifierLiv(q);
                if(test)
                {
                    ui->tableView_4->setModel(tmpliv.afficherLiv());//refresh
                    QMessageBox::information(nullptr, QObject::tr("modifier une livraison"),
                    QObject::tr("livraison modifié.\n"
                             "Click Cancel to exit."), QMessageBox::Cancel);
                }
                else
                {
                    QMessageBox::critical(nullptr, QObject::tr("modifier une livraison"),
                          QObject::tr("Erreur !.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);
                }

            }
    }
    else if (reponse == QMessageBox::No)
    {
        QMessageBox::critical(this, "Annulation", "La modification de cette livraison a ete annulee !");
    }

    gestion_tabs();
}


//mailing

void Gestion_Coli_Courrier::browse()
{
    files.clear();

    QFileDialog dialog(this);
    dialog.setDirectory(QDir::homePath());
    dialog.setFileMode(QFileDialog::ExistingFiles);

    if (dialog.exec())
        files = dialog.selectedFiles();

    QString fileListString;
    foreach(QString file, files)
        fileListString.append( "\"" + QFileInfo(file).fileName() + "\" " );

    ui->file->setText( fileListString );

}

void Gestion_Coli_Courrier::sendMail()
{
    Smtp* smtp = new Smtp("seifeddine.saidi@esprit.tn","your password", "smtp.gmail.com");
    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));

    if( !files.isEmpty() )
        smtp->sendMail("seifeddine.saidi@esprit.tn", ui->rcpt->text() , ui->subject->text(),ui->msg->toPlainText(), files );
    else
        smtp->sendMail("seifeddine.saidi@esprit.tn", ui->rcpt->text() , ui->subject->text(),ui->msg->toPlainText());
}

void Gestion_Coli_Courrier::mailSent(QString status)
{
    if(status == "Message sent")
        QMessageBox::warning( nullptr, tr( "Qt Simple SMTP client" ), tr( "Message sent!\n\n" ) );
    ui->rcpt->clear();
    ui->subject->clear();
    ui->file->clear();
    ui->msg->clear();
}
