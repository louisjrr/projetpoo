#include "CLpersonnel.h"

CLpersonnel::CLpersonnel()
{
    throw gcnew System::NotImplementedException();
}

void CLpersonnel::creer(String^_nom, String^_prenom, String^_superieur, String^_hireDate, String^_adresse)
{
    String^ queryString = "INSERT INTO BDDProjet.Personnel(nom_personnel, prenom_personnel, superieur, hireDate) VALUES ('"+_nom+"', '"+_prenom+"', '"+_superieur+"', '"+_hireDate+"');";
}
