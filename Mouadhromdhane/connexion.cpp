#include "connexion.h"
#include <QDebug>
#include <QSqlError>
Connexion::Connexion()
{}


bool Connexion::ouvrirConnexion()
{
bool test = false;
db =QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("database");
db.setUserName("mouadh");
db.setPassword("esprit20");
if (db.open())
    test=true;
else
    qDebug()<<"Problem DB Opening"<< db.lastError();
return test;
}
void Connexion::fermerConnexion()
{
db.close();
}
