#ifndef DEPENSES_H
#define DEPENSES_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>


class depenses
{
public:
     QSqlQueryModel * afficher();
     QSqlQueryModel * afficher1();
     QSqlQueryModel * afficher2();
     QSqlQueryModel * afficher3();

    bool supprimer(QString);
private:

};

#endif // DEPENSES_H
