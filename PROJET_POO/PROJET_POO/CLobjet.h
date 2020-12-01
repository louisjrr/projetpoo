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
protected:
	String^ nom;
	String^ prenom;
	String^ adresse;
	String^ ville;
	String^ cp;
};

