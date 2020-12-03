#include "CLarticle.h"


CLarticle::CLarticle()
{

}

void CLarticle::creer(String^ nom, String^ categorie, String^ prix, String^ stock, String^ seuil, String^ tva, String^ ip, String^ user, String^ mdp)
{
    CL_CAD obj;
    obj.connect(ip, user, mdp);
    obj.disconnect();

    String^ queryString = "INSERT INTO BDDProjet.Article(designation, id_categorie, prixHT, stock, seuil, tva) VALUES ('"+nom+ "', '"+categorie+"', '" +prix+ "', '" +stock+ "', '" +seuil+ "', '" +tva+ "');";
    obj.sendSQL(queryString);

}

void CLarticle::creerCateg(String^ nom, String^ ip, String^ user, String^ mdp)
{
    CL_CAD obj;
    obj.connect(ip, user, mdp);
    obj.disconnect();

    String^ queryString = "INSERT INTO BDDProjet.Categorie(nom_categorie) VALUES ('" + nom + "');";
    obj.sendSQL(queryString);

}

DataTable^ CLarticle::afficherArticle(String^ ip, String^ user, String^ mdp)
{
    CL_CAD obj;
    obj.connect(ip, user, mdp);
    obj.disconnect();

    String^ queryString = "SELECT id_article, designation, nom_categorie, prixHT, stock, seuil, tva as 'TVA%' from Article INNER JOIN Categorie WHERE Article.id_categorie = Categorie.id_categorie; ";
    return obj.receiveSQLTable(queryString);

}

DataTable^ CLarticle::afficherCategAjout(String^ ip, String^ user, String^ mdp)
{

    CL_CAD obj;
    obj.connect(ip, user, mdp);
    obj.disconnect();

    String^ queryString = "SELECT id_categorie, nom_categorie from Categorie; ";
    return obj.receiveSQLTable(queryString);

}

void CLarticle::modifierDesignation(String^ id, String^ designation, String^ id_categorie, String^ ip, String^ user, String^ mdp)
{
    CL_CAD obj;
    obj.connect(ip, user, mdp);
    obj.disconnect();

    String^ queryString = "UPDATE Article SET designation = '" + designation + "', id_categorie = '" + id_categorie + "' WHERE id_article = '" + id + "';  ";
    obj.sendSQL(queryString);
}

void CLarticle::modifierPrix(String^ id, String^ prix, String^ TVA, String^ ip, String^ user, String^ mdp)
{
    CL_CAD obj;
    obj.connect(ip, user, mdp);
    obj.disconnect();

    String^ queryString = "UPDATE Article SET prixHT = '" + prix + "', tva = '" + TVA + "' WHERE id_article = '" + id + "';  ";
    obj.sendSQL(queryString);

}

void CLarticle::modifierStockSeuil(String^ id, String^ stock, String^ seuil, String^ ip, String^ user, String^ mdp)
{
    CL_CAD obj;
    obj.connect(ip, user, mdp);
    obj.disconnect();

    String^ queryString = "UPDATE Article SET stock = '" + stock + "', seuil = '" + seuil + "' WHERE id_article = '" + id + "';  ";
    obj.sendSQL(queryString);

}



void CLarticle::supprimer(String^ id, String^ adresse_ip, String^ utilisateur, String^ MDP)
{
    CL_CAD obj;
    obj.connect(adresse_ip, utilisateur, MDP);
    obj.disconnect();

    String^ queryString = "DELETE FROM Article WHERE '" + id + "' = id_article;";
    obj.sendSQL(queryString);

}

DataTable^ CLarticle::recherch(String^ nom, String^ ip, String^ user, String^ mdp)
{
    CL_CAD obj;
    obj.connect(ip, user, mdp);
    obj.disconnect();

    if (nom != "") {
        String^ queryString = "SELECT id_article, designation, nom_categorie, prixHT, stock, seuil, TVA from Article INNER JOIN Categorie WHERE Article.id_categorie = Categorie.id_categorie AND designation = '" + nom + "'; ";
        return obj.receiveSQLTable(queryString);
    }

    else
    {
        String^ queryString = "SELECT id_article, designation, nom_categorie, prixHT, stock, seuil, TVA from Article INNER JOIN Categorie WHERE Article.id_categorie = Categorie.id_categorie; ";
        return obj.receiveSQLTable(queryString);
    }
}
