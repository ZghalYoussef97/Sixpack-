#include "mainwindow2.h"
#include <QApplication>
#include <QMessageBox>
#include "connexion.h"
#include <QObject>

int main(int argc, char *argv[])
{    QApplication a(argc, argv);
     MainWindow2 w;
     w.setWindowTitle("Gestion des Depenses et les Gains");
     Connexion c;
     bool test=c.ouvrirConnexion();
     if(test)
     {
         w.show();
    QMessageBox::information(nullptr, QObject::tr("Connexion avec la base de données"),

                 QObject::tr("Connexion réussie "));
     }
     return a.exec();
 }
