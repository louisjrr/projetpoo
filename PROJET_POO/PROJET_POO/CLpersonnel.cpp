#include "CLpersonnel.h"
static int IDpersonnel = 0;

CLpersonnel::CLpersonnel()
{
    IDpersonnel++;
    throw gcnew System::NotImplementedException();
}

void CLpersonnel::creer(int _IDpersonnel, String^_nom, String^_prenom, String^_superieur, String^_hireDate, String^_adresse)
{
    String^ queryString = "INSERT INTO BDDProjet.Personnel(id_personnel, nom_personnel, prenom_personnel, superieur, hireDate) VALUES ('"+_IDpersonnel+"', '"+_nom+"', '"+_prenom+"', '"+_superieur+"', '"+_hireDate+"');";
}
