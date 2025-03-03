#include "CLclient.h"
#include "CL_CAD.h"
#include "MyForm.h"


CLclient::CLclient()
{
}

// tentative d'utilisation d'accesseur et de mutateur pour recuperer les identifiants de connexion
/*
void CL_CAD::setIP(String^ ip)
{
    adresse_ip = ip;
}

void CL_CAD::setUtilisateur(String^ user)
{
    utilisateur = user;
}

void CL_CAD::setMDP(String^ mdp)
{
    MDP = mdp;
}

String^ CL_CAD::getIP()
{
    return adresse_ip;
}
*/
//

void CLclient::creer(String^ _nom, String^ _prenom, String^ _birthDate, String^ _adresseLiv, String^ _villeLiv, String^ _cpLiv, String^ _adresseFac, String^ _villeFac, String^ _cpFac, String^ adresse_ip, String^ utilisateur, String^ MDP)
{
    CL_CAD obj;
    obj.connect(adresse_ip, utilisateur, MDP);
    obj.disconnect();

    String^ queryString = "INSERT INTO BDDProjet.Client (nom_client, prenom_client, birthDate) VALUES (\"" + _nom + "\", \"" + _prenom + "\", \"" + _birthDate + "\");";
    obj.sendSQL(queryString);


    queryString = "SELECT MAX(id_client) FROM Client;";
    String^ id_client = obj.receiveSQLString(queryString);


    queryString = "INSERT INTO BDDProjet.Adresse(adresse, ville, cp, id_client_ADR_LIVRAISON) VALUES ('" + _adresseLiv + "', '" + _villeLiv + "', '" + _cpLiv + "', '" + id_client + "');";
    obj.sendSQL(queryString);
    queryString = "INSERT INTO BDDProjet.Adresse(adresse, ville, cp, id_client) VALUES ('" + _adresseFac + "', '" + _villeFac + "', '" + _cpFac + "', '" + id_client + "');";
    obj.sendSQL(queryString);
}
DataTable^ CLclient::afficher(String^ _nom, String^ _prenom, String^ adresse_ip, String^ utilisateur, String^ MDP)
{
    CL_CAD obj;
    obj.connect(adresse_ip, utilisateur, MDP);
    obj.disconnect();


    if( _nom == "" && _prenom == "")
    {
        String^ queryString = "SELECT Client.id_client, nom_client, prenom_client, birthDate, adresse, ville, cp FROM Client INNER JOIN Adresse WHERE Client.id_client = Adresse.id_client OR Client.id_Client = Adresse.id_client_ADR_LIVRAISON ; ";
        DataTable^ listeClient = obj.receiveSQLTable(queryString);
        return listeClient;
    }
    else if(_prenom == "")
    {
        String^ queryString = "SELECT Client.id_client, nom_client, prenom_client, birthDate, adresse, ville, cp FROM Client INNER JOIN Adresse WHERE nom_client = '" + _nom + "' AND (Client.id_client = Adresse.id_client OR Client.id_Client = Adresse.id_client_ADR_LIVRAISON); ";
        DataTable^ listeClient = obj.receiveSQLTable(queryString);
        return listeClient;
    }
    else if (_nom == "")
    {
        String^ queryString = "SELECT Client.id_client, nom_client, prenom_client, birthDate, adresse, ville, cp FROM Client INNER JOIN Adresse WHERE prenom_client = '" + _prenom + "' AND (Client.id_client = Adresse.id_client OR Client.id_Client = Adresse.id_client_ADR_LIVRAISON); ";
        DataTable^ listeClient = obj.receiveSQLTable(queryString);
        return listeClient;
    }
    else
    {
        String^ queryString = "SELECT Client.id_client, nom_client, prenom_client, birthDate, adresse, ville, cp FROM Client INNER JOIN Adresse WHERE nom_client = '" + _nom + "' AND prenom_client = '" + _prenom + "'AND (Client.id_client = Adresse.id_client OR Client.id_Client = Adresse.id_client_ADR_LIVRAISON); ";
        DataTable^ listeClient = obj.receiveSQLTable(queryString);
        return listeClient;
    }

}

DataTable^ CLclient::afficherModifier(String^ ip, String^ user, String^ mdp)
{
    CL_CAD obj;
    obj.connect(ip, user, mdp);
    obj.disconnect();

    String^ queryString = "SELECT Client.id_client, nom_client, prenom_client, birthDate, adresse, ville, cp FROM Client INNER JOIN Adresse WHERE Client.id_client = Adresse.id_client OR Client.id_Client = Adresse.id_client_ADR_LIVRAISON ; ";
    return obj.receiveSQLTable(queryString);
}

DataTable^ CLclient::recherchmodifier(String^ _nom, String^ _prenom, String^ adresse_ip, String^ utilisateur, String^ MDP)
{
    CL_CAD obj;
    obj.connect(adresse_ip, utilisateur, MDP);
    obj.disconnect();

    String^ queryString = "SELECT Client.id_client, nom_client, prenom_client, birthDate, adresse, ville, cp FROM Client INNER JOIN Adresse WHERE nom_client = '" + _nom + "' AND prenom_client = '" + _prenom + "' AND( Client.id_client = Adresse.id_client_ADR_LIVRAISON OR Client.id_client = Adresse.id_client); ";
    return obj.receiveSQLTable(queryString);

}

void CLclient::modifierNom(String^ id, String^ nom, String^ prenom, String^ ip, String^ user, String^ mdp)
{
    CL_CAD obj;
    obj.connect(ip, user, mdp);
    obj.disconnect();

    String^ queryString = "UPDATE Client SET nom_client = '" + nom + "', prenom_client = '" + prenom + "' WHERE id_client = '" + id + "';  ";
    obj.sendSQL(queryString);

}

void CLclient::modifierNaiss(String^ id, String^ Naiss, String^ ip, String^ user, String^ mdp)
{
    CL_CAD obj;
    obj.connect(ip, user, mdp);
    obj.disconnect();

    String^ queryString = "UPDATE Client SET birthDate = '" + Naiss + "' WHERE id_client = '" + id + "';  ";
    obj.sendSQL(queryString);


}

void CLclient::modifierADRLiv(String^ id, String^ adresse, String^ ville, String^ cp, String^ ip, String^ user, String^ mdp)
{
    CL_CAD obj;
    obj.connect(ip, user, mdp);
    obj.disconnect();

    String^ queryString = "UPDATE Adresse SET adresse = '" + adresse + "', ville = '" + ville + "', cp = '" + cp + "' WHERE id_client_ADR_LIVRAISON = '" + id + "';  ";
    obj.sendSQL(queryString);

}

void CLclient::modifierADRFact(String^ id, String^ adresse, String^ ville, String^ cp, String^ ip, String^ user, String^ mdp)
{
    CL_CAD obj;
    obj.connect(ip, user, mdp);
    obj.disconnect();

    String^ queryString = "UPDATE Adresse SET adresse = '" + adresse + "', ville = '" + ville + "', cp = '" + cp + "' WHERE id_client = '" + id + "';  ";
    obj.sendSQL(queryString);

}

void CLclient::supprimer(String^ id, String^ adresse_ip, String^ utilisateur, String^ MDP)
{
    CL_CAD obj;
    obj.connect(adresse_ip, utilisateur, MDP);
    obj.disconnect();

    String^ queryString = "DELETE FROM Adresse WHERE '" + id + "' = id_Client OR '" + id + "' = id_client_ADR_LIVRAISON;";
    obj.sendSQL(queryString);

    queryString = "DELETE FROM Client WHERE '" + id + "' = id_Client;";
    obj.sendSQL(queryString);
}

DataTable^ CLclient::recherchSupprimer(String^ _nom, String^ _prenom, String^ ip, String^ user, String^ mdp) {

    CL_CAD obj;
    obj.connect(ip, user, mdp);
    obj.disconnect();

    String^ queryString = "SELECT Client.id_client, nom_client, prenom_client, birthDate, adresse, ville, cp FROM Client INNER JOIN Adresse WHERE nom_client = '" + _nom + "' AND prenom_client = '" + _prenom + "' AND( Client.id_client = Adresse.id_client_ADR_LIVRAISON OR Client.id_client = Adresse.id_client); ";
    return obj.receiveSQLTable(queryString);
}

DataTable^ CLclient::afficherSupprimer(String^ ip, String^ user, String^ mdp)
{
    CL_CAD obj;
    obj.connect(ip, user, mdp);
    obj.disconnect();

    String^ queryString = "SELECT Client.id_client, nom_client, prenom_client, birthDate, adresse, ville, cp FROM Client INNER JOIN Adresse WHERE Client.id_client = Adresse.id_client OR Client.id_Client = Adresse.id_client_ADR_LIVRAISON ; ";
    return obj.receiveSQLTable(queryString);


}