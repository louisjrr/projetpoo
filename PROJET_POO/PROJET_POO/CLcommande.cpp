#include "CLcommande.h"
#include <iostream>
using namespace std;

CLcommande::CLcommande()
{

}

String^ CLcommande::reference(String^ _prenom, String^ _nom, String^ _anneCommande, String^ ville)
{
    _prenom = _prenom->Substring(0,2);
    return _prenom;
}

void CLcommande::passerCommande()
{
    throw gcnew System::NotImplementedException();
}
