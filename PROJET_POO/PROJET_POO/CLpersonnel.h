#pragma once
#include "CL_CAD.h"
ref class CLpersonnel
{
public:
    CLpersonnel(void);
    void creer(String^, String^, String^, String^, String^, String^, int);
    void modifier(String^, String^, String^, String^, String^, String^, int);
    void supprimer(String^, String^, String^, String^, String^, String^, int);
    void afficher(String^, String^, String^, String^, String^, String^, int);
private:
    String^ superieur;
    String^ hireDate;
    String^ nomPersonnel;
    String^ prenomPersonnel;
    String^ adressePersonnel;
    String^ ville;
    int cp;
};

