#include "CL_CAD.h"
#include "MyForm.h"

void CL_CAD::setSQL(String^)
{
    throw gcnew System::NotImplementedException();
	String^ connectionString = connectionString = "Data source=10.0.2.15; port=3306; username=user; password=375146; database=adresse_ip";
	MySqlConnection^ connectionBDD = gcnew MySqlConnection(connectionString);

	connectionBDD->Open();
}
