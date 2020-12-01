#pragma once
#include "CLobjet.h"

ref class CLclient :
    public CLobjet
{
public:
    CLclient(void);
    void creer(int, String^, String^, String^, String^, String^, String^, int);
private:
    static int numClient;
    String^ birthDate;
    String^ firstDate;
};

