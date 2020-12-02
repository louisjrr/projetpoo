#pragma once
#include "CL_CAD.h"
ref class CLarticle
{
public:
    CLarticle(void);
    void creer(String^, double, int, int, double, String^, String^, String^);
    void modifier(String^, double, int, int, double, String^, String^, String^);
    void suprimer(String^, double, int, int, double, String^, String^, String^);
    void afficher(String^, double, int, int, double, String^, String^, String^);
private:
    double prixHT;
    String^ designation;
    int stock;
    int seuil;
    double TVA;
};

