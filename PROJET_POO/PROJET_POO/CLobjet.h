#pragma once
#include <string>

using namespace System;

ref class CLobjet
{
public:
	CLobjet(void);
	virtual void creer();
	virtual void modifier();
	virtual void supprimer();
protected:
	String^ nom;
	String^ prenom;
	String^ adresse;
};

