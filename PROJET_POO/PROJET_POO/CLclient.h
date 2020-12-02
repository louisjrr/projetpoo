#pragma once
#include "CL_CAD.h"

ref class CLclient
{
public:
    CLclient(void);
    void creer(String^, String^, String^, String^, String^, int, String^, String^, int);
    //void modifier();
    //void supprimer();
    void afficher(String^, String^, String^, String^, String^, String^);
private:
    String^ birthDate;
    String^ firstDate;
    String^ nomClient;
    String^ prenomClient;
    String^ adresseLivClient;
    String^ adresseFacClient;
};

