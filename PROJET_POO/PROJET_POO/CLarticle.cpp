#include "CLarticle.h"


CLarticle::CLarticle()
{

}

void CLarticle::creer(String^ _designation, double _prixHT, int _stock, int _seuil, double _tva, String^ adresse_ip, String^ utilisateur, String^ MDP)
{
    CL_CAD obj;
    obj.connect(adresse_ip, utilisateur, MDP);
    obj.disconnect();
    String^ queryString = "INSERT INTO BDDProjet.Article(designation, prixHT, stock, seuil, tva,) VALUES ('"+_designation+ "', '" +_prixHT+ "', '" +_stock+ "', '" +_seuil+ "', '" +_tva+ "');";
    obj.sendSQL(queryString);

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
