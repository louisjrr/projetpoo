#include "CLclient.h"
#include "CL_CAD.h"

static int numClient = 0;

CLclient::CLclient()
{
    numClient++;
}

void CLclient::creer(String^, String^, String^, String^, String^)
{
    String^ queryString = "INSERT INTO BDDProjet.client"
}

