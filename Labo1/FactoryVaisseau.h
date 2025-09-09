#pragma once
#include "Vaisseau.h"
#include "VaisseauLivraison.h"
#include "VaisseauTransport.h"
#include "VaisseauGuerre.h"

class FactoryVaisseau 
{
public:
	static Vaisseau* getRandomVaisseau();
	static int genererNb(int choix1, int choix2);
private:
	static Faction* getRandomFaction();
};

