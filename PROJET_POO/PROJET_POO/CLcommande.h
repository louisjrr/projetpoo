#pragma once
#include <string>
using namespace System;

ref class CLcommande
{
public:
	CLcommande(void);
	String^ reference(String^, String^, String^, String^);
	void passerCommande();
};

