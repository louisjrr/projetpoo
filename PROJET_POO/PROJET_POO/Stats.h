#pragma once
#include "CL_CAD.h"

ref class Stats
{
private :

public:

	DataTable^ underSeuil(String^ ip, String^ user, String^ mdp);
	String^ sommeStockCommercial(String^ ip, String^ user, String^ mdp);
	String^ sommeStockAchat(String^ ip, String^ user, String^ mdp);


};

