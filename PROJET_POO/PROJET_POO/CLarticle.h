#pragma once
#include "CL_CAD.h"
ref class CLarticle
{
public:
    CLarticle(void);
    void creer(String^, double, int, int, double);
private:
    double prixHT;
    String^ designation;
    int stock;
    int seuil;
    double TVA;
};

