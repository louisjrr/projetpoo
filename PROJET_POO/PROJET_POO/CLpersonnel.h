#pragma once
#include "CL_CAD.h"
ref class CLpersonnel
{
public:
    CLpersonnel(void);
    void creer(String^, String^, String^, String^, String^, String^, String^, String^, String^, String^);
    void modifier(String^, String^, String^, String^, String^, String^, String^, String^, String^, String^);
    void supprimer(String^ id, String^, String^, String^, String^, String^, String^, String^, String^, String^, String^);
    DataTable^ afficher(String^, String^, String^, String^, String^);

};

