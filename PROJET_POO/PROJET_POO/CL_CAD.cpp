#include "CL_CAD.h"

void CL_CAD::getIP(String^ ip)
{
	adresse_ip = ip;
}

void CL_CAD::getUtilisateur(String^ user)
{
	utilisateur = user;
}

void CL_CAD::getMDP(String^ mdp)
{
	MDP = mdp;
}

void CL_CAD::connect() {

	connectionString = "Data source=" + adresse_ip + "; port=3306; username=" + utilisateur + "; password=" + MDP + "; database=BDDProjet;";
	connectionBDD = gcnew MySqlConnection(connectionString);
	connectionBDD->Open();
}

bool CL_CAD::testConnect() {
	return connectionBDD->Ping();
}

void CL_CAD::disconnect() {
	connectionBDD->Close();
}


void CL_CAD::sendSQL(String^ requete)
{
	MySqlCommand^ command = gcnew MySqlCommand(requete, connectionBDD);
	connectionBDD->Open();
	command->ExecuteNonQuery();
	connectionBDD->Close();
}