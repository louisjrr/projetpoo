#pragma once
#include <string>

using namespace System;

ref class CLobjet
{
public:
	CLobjet(void);
	virtual void creer() = 0;
	virtual void modifier() = 0;
	virtual void supprimer() = 0;
	void setNom(String);
	void setPrenom(String);
	void setAdresse(String);

protected:
	String^ nom;
	String^ prenom;
	String^ adresse;
};

