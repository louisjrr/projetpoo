#include "CLarticle.h"

static int reference = 0;

CLarticle::CLarticle()
{
    reference++;
}

void CLarticle::creer(int, double, String^, int, int, double)
{
    String^ queryString = "INSERT INTO BDDProjet.Article(id_article, designation, prixHT, stock, seuil, tva) VALUES (" + ", " + ", " + ", " + ", " + ", "+");"; 
}
