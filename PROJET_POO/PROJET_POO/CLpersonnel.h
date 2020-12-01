#pragma once
#include "CLobjet.h"
ref class CLpersonnel :
    public CLobjet
{
public:
    CLpersonnel(void);
    void creer(String^, String^, String^, String^, String^);
private:
    String^ superieur;
    String^ hireDate;
};

