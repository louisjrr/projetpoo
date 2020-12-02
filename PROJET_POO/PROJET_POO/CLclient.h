#pragma once
#include "CL_CAD.h"

ref class CLclient
{
public:
    CLclient(void);
    void creer(String^, String^, String^, String^, String^, String^, String^, String^, String^, String^, String^,String^);
    void modifier(String^, String^, String^, String^, String^, String^, String^, String^, String^, String^, String^, String^);
    void supprimer(String^, String^, String^, String^, String^, String^, String^, String^, String^, String^, String^, String^);
    void afficher(String^, String^, String^, String^, String^, String^, String^, String^, String^, String^, String^, String^);
private:
    String^ birthDate;
    String^ firstDate;
    String^ nomClient;
    String^ prenomClient;
    String^ adresseLivClient;
    String^ adresseFacClient;
};

