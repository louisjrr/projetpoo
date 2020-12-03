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

void CLpersonnel::modifier(String^ _nom, String^ _prenom, String^ _superieur, String^ _hireDate, String^ _adresse, String^ ville, String^ cp, String^ adresse_ip, String^ utilisateur, String^ MDP)
{
    throw gcnew System::NotImplementedException();
}

void CLpersonnel::supprimer(String^ _nom, String^ _prenom, String^ _superieur, String^ _hireDate, String^ _adresse, String^ ville, String^ cp, String^ adresse_ip, String^ utilisateur, String^ MDP)
{
    CL_CAD obj;
    obj.connect(adresse_ip, utilisateur, MDP);
    obj.disconnect();

    //String^ queryString = "DELETE FROM Adresse WHERE '" + id + "' = id_Personnel OR '" + id + "' = id_client_ADR_LIVRAISON;";
    //obj.sendSQL(queryString);

    //queryString = "DELETE FROM Client WHERE '" + id + "' = id_Client;";
    //obj.sendSQL(queryString);
}

DataTable^ CLpersonnel::afficher(String^ _nom, String^ _prenom, String^ adresse_ip, String^ utilisateur, String^ MDP)
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
    else if (_prenom == "")//sa marche pas pb SYNTAX
    {
        String^ queryString = "SELECT Personnel.id_personnel, nom_personnel, prenom_personnel, superieur, hireDate, adresse, ville, cp FROM Personnel INNER JOIN Adresse WHERE nom_personnel = '" + _nom + "' AND (Personnel.id_personnel = Adresse.id_personnel; ";
        DataTable^ listePersonnel = obj.receiveSQLTable(queryString);
        return listePersonnel;
    }
    else if (_nom == "")//sa marche pas pb SYNTAX
    {
        String^ queryString = "SELECT Personnel.id_personnel, nom_personnel, prenom_personnel, superieur, hireDate, adresse, ville, cp FROM Personnel INNER JOIN Adresse WHERE prenom_personnel = '" + _prenom + "' AND(Personnel.id_personnel = Adresse.id_personnel; ";
        DataTable^ listePersonnel = obj.receiveSQLTable(queryString);
        return listePersonnel;
    }
    else
    {
        String^ queryString = "SELECT Personnel.id_personnel, nom_personnel, prenom_personnel, superieur, hireDate, adresse, ville, cp FROM Personnel INNER JOIN Adresse WHERE nom_personnel = '" +_nom+ "' AND prenom_personnel = '" + _prenom + "' AND (Personnel.id_personnel = Adresse.id_personnel; ";
        DataTable^ listePersonnel = obj.receiveSQLTable(queryString);
        return listePersonnel;
    }
}
