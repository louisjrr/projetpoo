#include "CLpersonnel.h"

CLpersonnel::CLpersonnel()
{
}

void CLpersonnel::creer(String^_nom, String^_prenom, String^_superieur, String^_hireDate, String^_adresse, String^ ville, int cp, String^ adresse_ip, String^ utilisateur, String^ MDP)
{
    CL_CAD obj1;
    obj1.connect(adresse_ip, utilisateur, MDP);
    obj1.disconnect();
    String^ queryString = "INSERT INTO BDDProjet.Personnel(nom_personnel, prenom_personnel, superieur, hireDate) VALUES ('"+_nom+"', '"+_prenom+"', '"+_superieur+"', '"+_hireDate+"');";
    obj1.sendSQL(queryString);
}

void CLpersonnel::modifier(String^ _nom, String^ _prenom, String^ _superieur, String^ _hireDate, String^ _adresse, String^ ville, int cp, String^ adresse_ip, String^ utilisateur, String^ MDP)
{
    throw gcnew System::NotImplementedException();
}

void CLpersonnel::supprimer(String^ _nom, String^ _prenom, String^ _superieur, String^ _hireDate, String^ _adresse, String^ ville, int cp, String^ adresse_ip, String^ utilisateur, String^ MDP)
{
    throw gcnew System::NotImplementedException();
}

void CLpersonnel::afficher(String^ _nom, String^ _prenom, String^ _superieur, String^ _hireDate, String^ _adresse, String^ ville, int cp, String^ adresse_ip, String^ utilisateur, String^ MDP)
{
    throw gcnew System::NotImplementedException();
}
