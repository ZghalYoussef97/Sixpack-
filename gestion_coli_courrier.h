#ifndef GESTION_COLI_COURRIER_H
#define GESTION_COLI_COURRIER_H

#include <QMainWindow>
#include "connexion.h"
#include "coli.h"
#include "equipement.h"
#include "smtp.h"
#include "livraison.h"
QT_BEGIN_NAMESPACE
namespace Ui { class Gestion_Coli_Courrier; }
QT_END_NAMESPACE

class Gestion_Coli_Courrier : public QMainWindow
{
    Q_OBJECT

public:
    Gestion_Coli_Courrier(QWidget *parent = nullptr);
    ~Gestion_Coli_Courrier();
private slots:

    //affichage et refresh
    void gestion_tabs();


    //crud

    void on_ajoutercoli_clicked();
        void on_modifiercoli_clicked();
    void on_suppcoli_clicked();


    void on_ajouterequip_clicked();
        void on_modifierequip_clicked();
    void on_supp_equip_clicked();


    void on_ajouterliv_clicked();
    void on_supp_liv_clicked();
 void on_pushButton_9_clicked();




//metiers

 void on_tri_coli_clicked();

 void on_recherche_textChanged(const QString &arg1);

 void on_stat1_clicked();

 void on_EXCEL1_clicked();

 //mailing
    void sendMail();
    void mailSent(QString);
    void browse();


private:
    Ui::Gestion_Coli_Courrier *ui;
    coli tmpcoli;

    QStringList files;

    equipement tmpequip;
    livraison tmpliv;


};
#endif // GESTION_COLI_COURRIER_H
