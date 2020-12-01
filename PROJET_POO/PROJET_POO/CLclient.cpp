#include "CLclient.h"
#include "CL_CAD.h"


CLclient::CLclient()
{
}

void CLclient::creer(String^ _nom, String^ _prenom, String^ _birthDate, String^ _adresseLiv, String^ _villeLiv, int _cpLiv, String^ _adresseFac, String^ _villeFac, int _cpFac)
{
    CL_CAD obj;
    String^ queryString = "INSERT INTO BDDProjet.Client (nom_client, prenom_client, birthDate) VALUES (\"" + _nom + "\", \"" + _prenom + "\", \"" + _birthDate + "\");" ;
    obj.sendSQL(queryString);
}
   /* queryString = "SELECT MAX(id_client) FROM Client;";
    obj.sendSQL(queryString);
    DataSet^ id_client;
    queryString = "INSERT INTO BDDProjet.Adresse(adresse, ville, cp, id_client) VALUES ('" + _adresseLiv + "', '" + _villeLiv + "', '" + _cpLiv + "', '" + id_client + "');";
    obj.sendSQL(queryString);
    queryString = "INSERT INTO BDDProjet.Adresse(adresse, ville, cp, id_client) VALUES ('" + _adresseFac + "', '" + _villeFac + "', '" + _cpFac + "', '" + id_client + "');";
    obj.sendSQL(queryString);
}*/
void CLclient::afficher(String^, String^, String^, String^, String^, String^)
{
    
}

//}
/*
void CLclient::modifier()
{
    throw gcnew System::NotImplementedException();
}

void CLclient::supprimer()
{
    throw gcnew System::NotImplementedException();
}
*/
