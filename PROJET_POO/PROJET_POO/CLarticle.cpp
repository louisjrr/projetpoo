#include "CLarticle.h"

static int reference = 0;

CLarticle::CLarticle()
{
    reference++;
}

void CLarticle::creer(String^ _designation, double _prixHT, int _stock, int _seuil, double _tva)
{
    String^ queryString = "INSERT INTO BDDProjet.Article(id_article, designation, prixHT, stock, seuil, tva, id_categorie) VALUES (" + ", " + ", " + ", " + ", " + ", "+");"; 
}
