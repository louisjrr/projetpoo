#pragma once
#include "CL_CAD.h"
ref class CLarticle
{
public:
    CLarticle(void);
    void creer(String^ nom, String^ categorie, String^ prix, String^ stock, String^ seuil, String^ tva, String^ ip, String^ user, String^ mdp);
    void creerCateg(String^ categorie, String^ ip, String^ user, String^ mdp);

    /*
    DataTable^ recherchmodifier(String^, String^, String^ ip, String^ user, String^ mdp);
    DataTable^ recherchSupprimer(String^ _nom, String^ _prenom, String^ ip, String^ user, String^ mdp);
    DataTable^ afficher(String^, String^, String^ ip, String^ user, String^ mdp);
    DataTable^ afficherModifier(String^ ip, String^ user, String^ mdp);
    DataTable^ afficherSupprimer(String^ ip, String^ user, String^ mdp);

    void modifierNom(String^ id, String^ nom, String^ ip, String^ user, String^ mdp);
    void modifierCateg(String^ id, String^ categorie, String^ ip, String^ user, String^ mdp);
    void modifierPrix(String^ id, String^ prix, String^ TVA, String^ ip, String^ user, String^ mdp);
    void modifierStockSeuil(String^ id, String^ stock, String^ seuil, String^ ip, String^ user, String^ mdp);

    void supprimer(String^ id, String^ ip, String^ user, String^ mdp);
    */
private:
    double prixHT;
    String^ designation;
    int stock;
    int seuil;
    double TVA;
};

