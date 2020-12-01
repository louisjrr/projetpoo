#pragma once
#include "CLobjet.h"

ref class CLclient :
    public CLobjet
{
public:
    CLclient(void);
    void creer(String^, String^, String^, String^, String^);
private:
    static int numClient;
    String^ birthDate;
    String^ firstDate;
};

