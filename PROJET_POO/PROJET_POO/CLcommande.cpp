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

    String^ queryString = "SELECT id_client FROM Commande WHERE Commande.id_commande = '"+id_commande+"';";
    String^ id_client = obj.receiveSQLString(queryString);
    
    queryString = "SELECT prenom_client FROM Client WHERE id_client = '" + id_client + "';";
    String^ _prenom = obj.receiveSQLString(queryString);
    
    queryString = "SELECT nom_client FROM Client WHERE id_client = '" + id_client + "';";
    String^ _nom = obj.receiveSQLString(queryString);

    queryString = "SELECT datePaiement FROM Commande WHERE id_client = '" + id_client + "';";
    String^ _anneeCommande = obj.receiveSQLString(queryString);

    queryString = "SELECT ville FROM Client INNER JOIN Adresse WHERE Adresse.id_client_ADR_LIVRAISON = '" + id_client + "';";
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

    //double totalHT = Convert::ToDouble(prixHT) * Convert::ToInt32(qte);
    double totalHT = 4;

    queryString = "SELECT tva FROM Article WHERE id_article = '" + id_article + "'";;
    String^ tva = obj.receiveSQLString(queryString);

    double totalTVA = Convert::ToDouble(tva) * qte;

    //float totalTTC = totalHT * (100+totalTVA)/100;
    double totalTTC = 4;

    queryString = "INSERT INTO Commande(dateLivraison, dateEmission, datePaiement, dateSolde, totalHT, totalTVA, totalTTC, id_client) VALUES ('"+ dateLivraison + "', '" + dateEmission + "', '" + datePaiement + "', '" + dateSolde + "', '" +  Convert::ToDouble(totalHT) +"', '" + totalTVA + "', '" + Convert::ToDouble(totalTTC) +"', '"+id_client+"'); ";
    obj.sendSQL(queryString);

    queryString = "SELECT MAX(id_commande) FROM Commande;";
    String^ id_commande = obj.receiveSQLString(queryString);

    queryString = "INSERT INTO COMPOSER(id_article, id_commande, quantite) VALUES ('" + id_article + "', '" + id_commande + "', '" + qte + "');";
    obj.sendSQL(queryString);

    queryString = "SELECT id_mdp FROM MoyenDePaiement WHERE nom_mdp = '"+MoyenDePaiement+"';";
    String^ id_mdp = obj.receiveSQLString(queryString);


    queryString = "INSERT INTO Paiement(montant, nb_paiement, id_commande, id_mdp) VALUES ('" + totalTTC + "', 1, '" + id_commande + "', '" + id_mdp + "');";
    obj.sendSQL(queryString);
}

DataTable^ CLcommande::afficherCommande(String^ id_commande, String^ adresse_ip, String^ utilisateur, String^ MDP)
{
    CL_CAD obj;
    obj.connect(adresse_ip, utilisateur, MDP);
    obj.disconnect();

     if (id_commande == "")
     {
       String^ queryString = "SELECT Commande.id_commande, Commande.id_client, Client.nom_client, Client.prenom_client, Article.designation, COMPOSER.quantite,  Commande.totalTTC, MoyenDePaiement.nom_mdp, Commande.datePaiement, Commande.dateSolde, Commande.dateEmission, Commande.dateLivraison from Commande inner join Client on Commande.id_client = Client.id_client inner join Paiement on Paiement.id_commande = Commande.id_commande inner join MoyenDePaiement on Paiement.id_mdp = MoyenDePaiement.id_mdp inner join COMPOSER on Commande.id_commande = COMPOSER.id_commande inner join Article on COMPOSER.id_article = Article.id_article ;";
       DataTable^ listeCommande = obj.receiveSQLTable(queryString);
       return listeCommande;
     }
     else
     {
         String^ queryString = "SELECT Commande.id_commande, Commande.id_client, Client.nom_client, Client.prenom_client, Article.designation, COMPOSER.quantite,  Commande.totalTTC, MoyenDePaiement.nom_mdp, Commande.datePaiement, Commande.dateSolde, Commande.dateEmission, Commande.dateLivraison from Commande inner join Client on Commande.id_client = Client.id_client inner join Paiement on Paiement.id_commande = '"+id_commande+"' inner join MoyenDePaiement on Paiement.id_mdp = MoyenDePaiement.id_mdp inner join COMPOSER on Commande.id_commande = '"+id_commande+"' inner join Article on COMPOSER.id_article = Article.id_article ;";
         DataTable^ listeCommande = obj.receiveSQLTable(queryString);
         return listeCommande;
     }
}




