#ifndef EQUIPEMENT_H
#define EQUIPEMENT_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include "connexion.h"

class equipement
{
    public:
    QString type;
    int dispo;

    equipement();
    equipement(QString,QString,int);
    equipement(QString,int);
    QString get_idequip();
    QSqlQueryModel * afficherEquip();
    bool ajouterEquip();
    bool supprimerEquip(QString idequip);
bool modifierEquip(QString idequip);
    QSqlQueryModel *afficheridequip();

    private:
    QString idequip;
};
#endif // EQUIPEMENT_H
