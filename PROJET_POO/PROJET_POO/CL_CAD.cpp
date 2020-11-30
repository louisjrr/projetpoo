#include "CL_CAD.h"
#include "MyForm.h"

void CL_CAD::getIP(String^ ip)
{
	adresse_ip = ip;
}


void CL_CAD::connect()
{
	connectionString = "Data source=" + adresse_ip + "; port=3306; username=user; password=User@viacesi27; database=BDDProjet;";
	connectionBDD = gcnew MySqlConnection(connectionString);

	connectionBDD->Open();
}