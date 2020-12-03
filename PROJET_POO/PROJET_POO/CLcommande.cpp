#include "CLcommande.h"
#include <iostream>
#include "CL_CAD.h"
using namespace std;

CLcommande::CLcommande()
{

}

String^ CLcommande::reference(String^ id_commande, String^ adresse_ip, String^ utilisateur, String^ MDP)
{
    CL_CAD obj;
    obj.connect(adresse_ip, utilisateur, MDP);
    obj.disconnect();

    String^ queryString = "SELECT id_client FROM Client INNER JOIN Commande WHERE Commande.id_commande = '"+id_commande+"'";
    String^ id_client = obj.receiveSQLString(queryString);

    queryString = "SELECT prenom_client FROM Client WHERE id_client = '" + id_client + ";";
    String^ _prenom = obj.receiveSQLString(queryString);

    queryString = "SELECT nom_client FROM Client WHERE id_client = '" + id_client + ";";
    String^ _nom = obj.receiveSQLString(queryString);

    queryString = "SELECT datePaiement FROM Commande WHERE id_client = '" + id_client + ";";
    String^ _anneeCommande = obj.receiveSQLString(queryString);

    queryString = "SELECT ville FROM Client INNER JOIN Adresse WHERE Adresse.id_client_ADR_LIVRAISON = '" + id_client + ";";
    String^ _ville = obj.receiveSQLString(queryString);

    _prenom = _prenom->Substring(0,2);
    _nom = _nom->Substring(0, 2);
    _anneeCommande = _anneeCommande->Substring(0, 2);
    _ville = _ville->Substring(0, 3);
    String^ ref = _prenom + _nom + _anneeCommande + _ville;
    return ref;
}

void CLcommande::passerCommande(String^nom_client, String^ prenom_client, String^ designation, int qte, String^ dateLivraison, String^ dateEmission, String^ datePaiement, String^ dateSolde, String^ MoyenDePaiement, String^ adresse_ip, String^ utilisateur, String^ MDP)
{
    CL_CAD obj;
    obj.connect(adresse_ip, utilisateur, MDP);
    obj.disconnect();

    String^ queryString = "SELECT id_client FROM Client WHERE nom_client = '" + nom_client + "' AND prenom_client = '" + prenom_client + "';";
    String^ id_client = obj.receiveSQLString(queryString);

    queryString = "SELECT id_article FROM Article WHERE designation = '" + designation + "';";
    String^ id_article = obj.receiveSQLString(queryString);

    queryString = "SELECT prixHT FROM Article WHERE id_article = '"+id_article+"'";
    String^ prixHT = obj.receiveSQLString(queryString);

    double totalHT = Convert::ToDouble(prixHT) * qte;

    queryString = "SELECT tva FROM Article WHERE id_article = '" + id_article + "'";;
    String^ tva = obj.receiveSQLString(queryString);

    double totalTVA = Convert::ToDouble(tva) * qte;

    double totalTTC = totalHT / totalTVA;

    queryString = "INSERT INTO BBDProjet.Commande(dateLivraison, dateEmission, datePaiement, dateSolde, totalHT, totalTVA, totalTTC, id_client) VALUES ('"+ dateLivraison + "', '" + dateEmission + "', '" + datePaiement + "', '" + dateSolde + "', '" + totalHT + "', '" + totalTVA + "', '" +totalTTC+"', '"+id_client+"'); ";
    obj.sendSQL(queryString);

    queryString = "SELECT MAX(id_commande) FROM Commande;";
    String^ id_commande = obj.receiveSQLString(queryString);

    queryString = "INSERT INTO BDDProjet.COMPOSER(id_article, id_commande, quantite) VALUES ('" + id_article + "', '" + id_commande + "', '" + qte + "');";
    obj.sendSQL(queryString);

    queryString = "INSERT INTO BDDProjet.MoyenDePaiement(nom_mdp) VALUE ('" + MoyenDePaiement + "');";
    obj.sendSQL(queryString);

    queryString = "SELECT MAX(id_mdp) FROM MoyenDePaiement;";
    String^ id_MoyenDePaiement = obj.receiveSQLString(queryString);

    queryString = "INSERT INTO BDDProjet.Paiement(montant, id_commande, id_mdp) VALUES ('" + totalTTC + "', '" + id_commande + "', '" + id_MoyenDePaiement + "');";
    obj.sendSQL(queryString);
}