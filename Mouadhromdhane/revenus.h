#ifndef REVENUS_H
#define REVENUS_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
class revenus
{
public:
    revenus();

    QSqlQueryModel * afficher();
    QSqlQueryModel * afficher1();
    QSqlQueryModel * afficher2();
    QSqlQueryModel * afficher3();
    bool supprimer(QString);
private:
    QString carbur,elec,comm,salaire,maint,fournit,maininf,entret;
    int id;
};


#endif // REVENUS_H
