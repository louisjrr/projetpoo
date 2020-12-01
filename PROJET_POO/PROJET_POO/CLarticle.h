#pragma once
#include "CLobjet.h"
ref class CLarticle :
    public CLobjet
{
public:
    CLarticle(void);
    void creer(int, String^, double, int, int, double, int);
private:
    static int reference;
    static int IDcategorie;
    double prixHT;
    String^ designation;
    int stock;
    int seuil;
    double TVA;
};

