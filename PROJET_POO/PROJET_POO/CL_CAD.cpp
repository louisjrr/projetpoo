#include "CL_CAD.h"
#include "MyForm.h"

void CL_CAD::getIP(String^ ip)
{
	adresse_ip = ip;
}


void CL_CAD::setSQL(String^)
{
    throw gcnew System::NotImplementedException();
	String^ connectionString = connectionString = "Data source=" + adresse_ip + "; port=3306; username=user; password=User@viavesi27; database=BDDProjet;";
	MySqlConnection^ connectionBDD = gcnew MySqlConnection(connectionString);

	connectionBDD->Open();
}