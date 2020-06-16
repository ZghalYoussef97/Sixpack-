#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include "connexion.h"
#include <QObject>

int main(int argc, char *argv[])
{    QApplication a(argc, argv);
     MainWindow w;
     w.setWindowTitle("Gestion des Depenses et les Gains");
     Connexion c;
     bool test=c.ouvrirConnexion();
     if(test)
     {
         w.show();
    QMessageBox::information(nullptr, QObject::tr("database Status"),

                 QObject::tr("Connection successfull "));
     }
     return a.exec();
 }
