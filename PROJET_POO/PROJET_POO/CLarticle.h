#pragma once
#include "CL_CAD.h"
ref class CLarticle
{
public:
    CLarticle(void);
    void creer(String^, double, int, int, double);
    void modifier(String^, double, int, int, double);
    void suprimer(String^, double, int, int, double);
    void afficher(String^, double, int, int, double);
private:
    double prixHT;
    String^ designation;
    int stock;
    int seuil;
    double TVA;
};

