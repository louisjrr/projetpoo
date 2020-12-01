#pragma once
#include "CLobjet.h"

ref class CLclient : public CLobjet
{
public:
    CLclient(void);
    void creer(String^, String^, String^, String^, String^, int, String^, String^, int);
    //void modifier();
    //void supprimer();
    //void afficher();
private:
    String^ birthDate;
    String^ firstDate;
};

