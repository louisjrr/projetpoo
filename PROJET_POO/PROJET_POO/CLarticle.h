#pragma once
#include "CLobjet.h"
ref class CLarticle :
    public CLobjet
{
public:
    CLarticle(void);
    void creer(int, double, String^, int, int, double);
private:
    static int reference;
    double prixHT;
    String^ designation;
    int stock;
    int seuil;
    double TVA;
};

