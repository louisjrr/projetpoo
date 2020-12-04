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
	connectionBDD->Open();
	MySqlCommand^ command = gcnew MySqlCommand(requete, connectionBDD);
	command->ExecuteNonQuery();
	connectionBDD->Close();
}

String^ CL_CAD::receiveSQLString(String^ query)
{
	connectionBDD->Open();
	MySqlCommand^ command = gcnew MySqlCommand(query, connectionBDD);
	MySqlDataReader^ reader = command->ExecuteReader();
	String^ result;

	while (reader->Read())
	{
		result = reader->GetString(0);
	}

	connectionBDD->Close();

	return result;
}

DataTable^ CL_CAD::receiveSQLTable(String^ query)
{
	connectionBDD->Open();
	MySqlCommand^ command = gcnew MySqlCommand(query, connectionBDD);
	MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(command);
	DataTable^ Table = gcnew DataTable();

	adapter->Fill(Table);

	connectionBDD->Close();

	return Table;
}

