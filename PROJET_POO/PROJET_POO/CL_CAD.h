#pragma once
#include <string>

using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace MySql::Data::MySqlClient;
using namespace System;

ref class CL_CAD
{
private:

	String^ adresse_ip;
	String^ utilisateur;
	String^ MDP;

	String^ connectionString;
	MySqlConnection^ connectionBDD;
	String^ rq_sql;
	SqlCommand^ CMD;
	SqlDataAdapter^ DA;
	DataSet^ DS;

public :

	void setIP(String^);
	void setUtilisateur(String^);
	void setMDP(String^);

	void connect(String^ adresse_ip,String^,String^);
	bool testConnect();
	void disconnect();
	void sendSQL(String^);
	String^ receiveSQLString(String^);
	DataTable^ receiveSQLTable(String^);

};