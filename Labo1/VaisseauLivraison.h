#pragma once
#include "Vaisseau.h"

class VaisseauLivraison : public Vaisseau
{
public:
	VaisseauLivraison(string nom, int exp, int niveau, int attaque, int defense, int vie, int capacite, int valeurMarchande, Faction* _faction);
	VaisseauLivraison(Faction* faction);
	~VaisseauLivraison();

	virtual std::string to_String();
};

