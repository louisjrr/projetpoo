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

DataTable^ CLarticle::afficherArticleAjout(String^ ip, String^ user, String^ mdp)
{
    CL_CAD obj;
    obj.connect(ip, user, mdp);
    obj.disconnect();

    String^ queryString = "SELECT designation, nom_categorie, prixHT, stock, seuil, TVA from Article INNER JOIN Categorie WHERE Article.id_categorie = Categorie.id_categorie; ";
    return obj.receiveSQLTable(queryString);

}

DataTable^ CLarticle::afficherCategAjout(String^ ip, String^ user, String^ mdp)
{

    CL_CAD obj;
    obj.connect(ip, user, mdp);
    obj.disconnect();

    String^ queryString = "SELECT nom_categorie from Categorie; ";
    return obj.receiveSQLTable(queryString);

}
/*
void CLarticle::modifier(String^, double, int, int, double, String^ adresse_ip, String^ utilisateur, String^ MDP)
{
    throw gcnew System::NotImplementedException();
}

void CLarticle::suprimer(String^, double, int, int, double, String^ adresse_ip, String^ utilisateur, String^ MDP)
{
    throw gcnew System::NotImplementedException();
}

void CLarticle::afficher(String^, double, int, int, double, String^ adresse_ip, String^ utilisateur, String^ MDP)
{
    throw gcnew System::NotImplementedException();
}
*/