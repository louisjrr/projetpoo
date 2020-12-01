#pragma once
#include "CLobjet.h"
ref class CLpersonnel :
    public CLobjet
{
public:
    CLpersonnel(void);
    void creer(int, String^, String^, String^, String^, String^);
private:
    static int IDpersonnel;
    String^ superieur;
    String^ hireDate;
};

