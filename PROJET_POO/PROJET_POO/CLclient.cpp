#include "CLclient.h"
#include "CL_CAD.h"

static int numClient = 0;

CLclient::CLclient()
{
    numClient++;
}

void CLclient::creer(int _numClient, String^ _nom, String^ _prenom, String^ _birthDate, String^ _firstDate, String^ _adresse, String^ _ville, int _cp)
{
    String^ queryString = "INSERT INTO BDDProjet.Article(id_client, nom_client, prenom_client, birthDate, firstBuyDate) VALUES ( '" +_numClient+ "', '"+ _nom+ "', '" + _prenom+ "', '" + _birthDate+ "', '" + _firstDate+ "');";
}

