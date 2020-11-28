#pragma once
#include <string>

using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace MySql::Data::MySqlClient;
using namespace System;

ref class CL_CAD
{
private:
	String^ cnx;
	String^ rq_sql;
	SqlConnection^ CNX;
	SqlCommand^ CMD;
	SqlDataAdapter^ DA;
	DataSet^ DS;
	void setSQL(String^);
};