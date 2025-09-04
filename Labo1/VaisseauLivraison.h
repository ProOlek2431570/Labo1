#pragma once
#include "Vaisseau.h"

class VaisseauLivraison : public Vaisseau
{
	VaisseauLivraison(string nom, int exp, int niveau, int attaque, int defense, int vie, int capacite, int valeurMarchande, Faction* faction);
	~VaisseauLivraison();

	virtual std::string to_String();
};

