#include "CLpersonnel.h"

CLpersonnel::CLpersonnel()
{
    throw gcnew System::NotImplementedException();
}

void CLpersonnel::creer(String^_nom, String^_prenom, String^_superieur, String^_hireDate, String^_adresse, String^ ville, int cp)
{
    String^ queryString = "INSERT INTO BDDProjet.Personnel(nom_personnel, prenom_personnel, superieur, hireDate) VALUES ('"+_nom+"', '"+_prenom+"', '"+_superieur+"', '"+_hireDate+"');";
}

void CLpersonnel::modifier(String^ _nom, String^ _prenom, String^ _superieur, String^ _hireDate, String^ _adresse, String^ ville, int cp)
{
    throw gcnew System::NotImplementedException();
}

void CLpersonnel::supprimer(String^ _nom, String^ _prenom, String^ _superieur, String^ _hireDate, String^ _adresse, String^ ville, int cp)
{
    throw gcnew System::NotImplementedException();
}

void CLpersonnel::afficher(String^ _nom, String^ _prenom, String^ _superieur, String^ _hireDate, String^ _adresse, String^ ville, int cp)
{
    throw gcnew System::NotImplementedException();
}
