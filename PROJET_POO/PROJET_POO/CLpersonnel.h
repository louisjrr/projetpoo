#pragma once
#include "CL_CAD.h"
ref class CLpersonnel
{
public:
    CLpersonnel(void);
    void creer(String^, String^, String^, String^, String^);
private:
    String^ superieur;
    String^ hireDate;
};

