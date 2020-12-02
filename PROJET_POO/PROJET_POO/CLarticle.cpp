#include "CLarticle.h"

static int reference = 0;

CLarticle::CLarticle()
{
    reference++;
}

void CLarticle::creer(String^ _designation, double _prixHT, int _stock, int _seuil, double _tva, String^ adresse_ip, String^ utilisateur, String^ MDP)
{
    CL_CAD obj2;
    obj2.connect(adresse_ip, utilisateur, MDP);
    obj2.disconnect();
    String^ queryString = "INSERT INTO BDDProjet.Article(designation, prixHT, stock, seuil, tva,) VALUES ('"+_designation+ "', '" +_prixHT+ "', '" +_stock+ "', '" +_seuil+ "', '" +_tva+ "');";
    obj2.sendSQL(queryString);
}

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
