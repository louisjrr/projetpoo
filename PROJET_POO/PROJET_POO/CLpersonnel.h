#pragma once
#include "CL_CAD.h"
ref class CLpersonnel
{
public:
    CLpersonnel(void);
    void creer(String^, String^, String^, String^, String^, String^, String^, String^, String^, String^);
    void modifier(String^, String^, String^, String^, String^, String^, int, String^, String^, String^);
    void supprimer(String^, String^, String^, String^, String^, String^, int, String^, String^, String^);
    void afficher(String^, String^, String^, String^, String^, String^, int, String^, String^, String^);
private:
    String^ superieur;
    String^ hireDate;
    String^ nomPersonnel;
    String^ prenomPersonnel;
    String^ adressePersonnel;
    String^ ville;
    int cp;
};

