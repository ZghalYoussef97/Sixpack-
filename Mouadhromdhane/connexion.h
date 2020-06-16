#ifndef CONNXION_H
#define CONNXION_H
#include <QSqlDatabase>



class Connexion
{
private:
    QSqlDatabase db;
public:
    Connexion();
    bool ouvrirConnexion();
    void fermerConnexion();
};

#endif // CONNXION_H
