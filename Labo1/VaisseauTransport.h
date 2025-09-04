#pragma once
#include "Vaisseau.h"

class VaisseauTransport:public Vaisseau
{
public:
	VaisseauTransport(string nom, int exp, int niveau, int attaque, int defense, int vie, int capacite, int valeurMarchande, Faction* faction);
	~VaisseauTransport();

	virtual std::string to_String();
};

