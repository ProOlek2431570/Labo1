#pragma once
#include "Vaisseau.h"

class VaisseauGuerre : public Vaisseau
{
	VaisseauGuerre(string nom, int exp, int niveau, int attaque, int defense, int vie, int capacite, int valeurMarchande, Faction*faction);
	~VaisseauGuerre();

	virtual std::string to_String();
};

