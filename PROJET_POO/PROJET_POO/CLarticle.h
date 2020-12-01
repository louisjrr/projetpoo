#pragma once
#include "CLobjet.h"
ref class CLarticle :
    public CLobjet
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

