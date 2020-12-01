#include "CLclient.h"
#include "CL_CAD.h"


CLclient::CLclient()
{
}

void CLclient::creer(String^ _nom, String^ _prenom, String^ _birthDate, String^ _firstDate, String^ _adresse, String^ _ville, int _cp)
{
    CL_CAD obj;
    String^ queryString = "INSERT INTO BDDProjet.Client(nom_client, prenom_client, birthDate, firstBuyDate) VALUES ('"+ _nom+ "', '" + _prenom+ "', '" + _birthDate+ "', '" + _firstDate+ "');";
    obj.sendSQL(queryString);
    String^ queryString = "SELECT MAX(id_client) FROM Client;";
    obj.sendSQL(queryString);
    DataSet^ id_client;
    String^ queryString = "INSERT INTO BDDProjet.Adresse(adresse, ville, cp, id_client, id_client) VALUES ('" + _adresse + "', '" + _ville + "', '" + _cp + "', '" + id_client + "');";
    obj.sendSQL(queryString);
}

void CLclient::modifier()
{
    throw gcnew System::NotImplementedException();
}

void CLclient::supprimer()
{
    throw gcnew System::NotImplementedException();
}
