#pragma once
#include <string>
#include "CL_CAD.h"
using namespace System;

ref class CLcommande
{
public:
	CLcommande(void);
	String^ reference(String^, String^, String^, String^);
	void passerCommande(String^, String^, String^, int, String^, String^, String^, String^, String^, String^, String^, String^);
	DataTable^ afficherCommande(String^, String^, String^, String^);
};

