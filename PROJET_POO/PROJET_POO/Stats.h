#pragma once
#include "CL_CAD.h"

ref class Stats
{
private :

public:

	DataTable^ underSeuil(String^ ip, String^ user, String^ mdp);
	String^ sommeStockCommercial(String^ ip, String^ user, String^ mdp);
	String^ sommeStockAchat(String^ ip, String^ user, String^ mdp);
	String^ simulCom(String^ Marge, String^ ip, String^ user, String^ mdp);
	String^ simulAchat(String^ Marge, String^ TVA, String^ ip, String^ user, String^ mdp);
	String^ sommeClient(String^ id, String^ ip, String^ user, String^ mdp);
	String^ moyennePanier(String^ ip, String^ user, String^ mdp);

};

