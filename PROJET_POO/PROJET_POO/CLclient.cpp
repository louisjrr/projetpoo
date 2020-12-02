#include "CLclient.h"
#include "CL_CAD.h"
#include "MyForm.h"


CLclient::CLclient()
{
}

void CLclient::creer(String^ _nom, String^ _prenom, String^ _birthDate, String^ _adresseLiv, String^ _villeLiv, int _cpLiv, String^ _adresseFac, String^ _villeFac, int _cpFac, String^ adresse_ip, String^ utilisateur, String^ MDP)
{
    CL_CAD obj;
    obj.connect(adresse_ip, utilisateur, MDP);
    obj.disconnect();
    
    String^ queryString = "INSERT INTO BDDProjet.Client (nom_client, prenom_client, birthDate) VALUES (\"" + _nom + "\", \"" + _prenom + "\", \"" + _birthDate + "\");" ;
    obj.sendSQL(queryString);
    

    queryString = "SELECT MAX(id_client) FROM Client;";
    String^ id_client = obj.receiveSQL(queryString);

    
    queryString = "INSERT INTO BDDProjet.Adresse(adresse, ville, cp, id_client_ADR_LIVRAISON) VALUES ('" + _adresseLiv + "', '" + _villeLiv + "', '" + _cpLiv + "', '" + id_client + "');";
    obj.sendSQL(queryString);
    queryString = "INSERT INTO BDDProjet.Adresse(adresse, ville, cp, id_client) VALUES ('" + _adresseFac + "', '" + _villeFac + "', '" + _cpFac + "', '" + id_client + "');";
    obj.sendSQL(queryString);
}*/
void CLclient::afficher(String^_nom, String^_prenom, String^_birthDate, String^ _adresseLiv, String^ _villeLiv, int _cpLiv, String^ _adresseFac, String^ _villeFac, int _cpFac, String^ adresse_ip, String^ utilisateur, String^ MDP)
{
    
}

//}

void CLclient::modifier(String^ _nom, String^ _prenom, String^ _birthDate, String^ _adresseLiv, String^ _villeLiv, int _cpLiv, String^ _adresseFac, String^ _villeFac, int _cpFac, String^ adresse_ip, String^ utilisateur, String^ MDP)
{
    throw gcnew System::NotImplementedException();
}

void CLclient::supprimer(String^ _nom, String^ _prenom, String^ _birthDate, String^ _adresseLiv, String^ _villeLiv, int _cpLiv, String^ _adresseFac, String^ _villeFac, int _cpFac, String^ adresse_ip, String^ utilisateur, String^ MDP)
{
    throw gcnew System::NotImplementedException();
}

