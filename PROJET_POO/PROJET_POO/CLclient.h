#pragma once
#include "CL_CAD.h"


ref class CLclient
{
public:
    CLclient(void);
    void creer(String^, String^, String^, String^, String^, String^, String^, String^, String^, String^ ip, String^ user, String^ mdp);

    DataTable^ recherchmodifier(String^, String^, String^ ip, String^ user, String^ mdp);
    DataTable^ recherchSupprimer(String^ _nom, String^ _prenom, String^ ip, String^ user, String^ mdp);
    DataTable^ afficher(String^, String^, String^ ip, String^ user, String^ mdp);
    DataTable^ afficherModifier(String^ ip, String^ user, String^ mdp);
    DataTable^ afficherSupprimer(String^ ip, String^ user, String^ mdp);

    void modifierNom(String^ id, String^ nom, String^ prenom, String^ ip, String^ user, String^ mdp);
    void modifierNaiss(String^ id, String^ Naiss, String^ ip, String^ user, String^ mdp);
    void modifierADRLiv(String^ id, String^ adresse, String^ ville, String^ cp, String^ ip, String^ user, String^ mdp);
    void modifierADRFact(String^ id, String^ adresse, String^ ville, String^ cp, String^ ip, String^ user, String^ mdp);

    void supprimer(String^ id, String^ ip, String^ user, String^ mdp);
private:
    String^ birthDate;
    String^ firstDate;
    String^ nomClient;
    String^ prenomClient;
    String^ adresseLivClient;
    String^ adresseFacClient;

};


