#include "CLpersonnel.h"

CLpersonnel::CLpersonnel()
{
}

void CLpersonnel::creer(String^_nom, String^_prenom, String^_superieur, String^_hireDate, String^_adresse, String^ _ville, String^ _cp, String^ adresse_ip, String^ utilisateur, String^ MDP)
{
    CL_CAD obj;
    obj.connect(adresse_ip, utilisateur, MDP);
    obj.disconnect();
    String^ queryString = "INSERT INTO BDDProjet.Personnel(nom_personnel, prenom_personnel, superieur, hireDate) VALUES ('"+_nom+"', '"+_prenom+"', '"+_superieur+"', '"+_hireDate+"');";
    obj.sendSQL(queryString);

    queryString = "SELECT MAX(id_personnel) FROM Personnel;";
    String^ id_personnel = obj.receiveSQLString(queryString);

    queryString = "INSERT INTO BDDProjet.Adresse(adresse, ville, cp, id_personnel) VALUES ('" + _adresse + "', '" + _ville + "', '" + _cp + "', '" + id_personnel + "');";
    obj.sendSQL(queryString);
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
    CL_CAD obj;
    obj.connect(adresse_ip, utilisateur, MDP);
    obj.disconnect();


    if (_nom == "" && _prenom == "")
    {
        String^ queryString = "SELECT Personnel.id_personnel, nom_personnel, prenom_personnel, superieur, hireDate, adresse, ville, cp FROM Personnel INNER JOIN Adresse WHERE Personnel.id_personnel = Adresse.id_personnel; ";
        DataTable^ listePersonnel = obj.receiveSQLTable(queryString);
        return listePersonnel;
    }
    else if (_prenom == "")
    {
        String^ queryString = "SELECT Client.id_client, nom_client, prenom_client, birthDate, adresse, ville, cp FROM Client INNER JOIN Adresse WHERE nom_client = '" + _nom + "' AND (Client.id_client = Adresse.id_client OR Client.id_Client = Adresse.id_client_ADR_LIVRAISON); ";
        DataTable^ listePersonnel = obj.receiveSQLTable(queryString);
        return listePersonnel;
    }
    else if (_nom == "")
    {
        String^ queryString = "SELECT Client.id_client, nom_client, prenom_client, birthDate, adresse, ville, cp FROM Client INNER JOIN Adresse WHERE prenom_client = '" + _prenom + "' AND (Client.id_client = Adresse.id_client OR Client.id_Client = Adresse.id_client_ADR_LIVRAISON); ";
        DataTable^ listePersonnel = obj.receiveSQLTable(queryString);
        return listePersonnel;
    }
    else
    {
        String^ queryString = "SELECT Client.id_client, nom_client, prenom_client, birthDate, adresse, ville, cp FROM Client INNER JOIN Adresse WHERE nom_client = '" + _nom + "' AND prenom_client = '" + _prenom + "'AND (Client.id_client = Adresse.id_client OR Client.id_Client = Adresse.id_client_ADR_LIVRAISON); ";
        DataTable^ listePersonnel = obj.receiveSQLTable(queryString);
        return listePersonnel;
    }
}
