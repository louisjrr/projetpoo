#include "CL_CAD.h"



void CL_CAD::setIP(String^ ip)
{
	adresse_ip = ip;
}

void CL_CAD::setUtilisateur(String^ user)
{
	utilisateur = user;
}

void CL_CAD::setMDP(String^ mdp)
{
	MDP = mdp;
}

void CL_CAD::connect(String^ _adresse_ip, String^ _utilisateur, String^ _MDP) {

	connectionString = "Data source=" + _adresse_ip + "; port=3306; username=" + _utilisateur + "; password=" + _MDP + "; database=BDDProjet;";
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
	command->ExecuteNonQuery();

}