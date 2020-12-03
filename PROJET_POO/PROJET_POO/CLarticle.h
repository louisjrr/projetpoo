#pragma once
#include "CL_CAD.h"
ref class CLarticle
{
public:
    CLarticle(void);
    void creer(String^ nom, String^ categorie, String^ prix, String^ stock, String^ seuil, String^ tva, String^ couleur, String^ ip, String^ user, String^ mdp);
    void creerCateg(String^ categorie, String^ ip, String^ user, String^ mdp);

    DataTable^ afficherCategAjout(String^ ip, String^ user, String^ mdp);
    DataTable^ afficherArticle(String^ ip, String^ user, String^ mdp);

    DataTable^ recherch(String^, String^ ip, String^ user, String^ mdp);


    void modifierDesignation(String^ id, String^ designation, String^ id_categorie, String^ ip, String^ user, String^ mdp);
    void modifierPrix(String^ id, String^ prix, String^ TVA, String^ ip, String^ user, String^ mdp);
    void modifierStockSeuil(String^ id, String^ stock, String^ seuil, String^ ip, String^ user, String^ mdp);
    
    void supprimer(String^ id, String^ ip, String^ user, String^ mdp);
    
private:
    double prixHT;
    String^ designation;
    int stock;
    int seuil;
    double TVA;
};

