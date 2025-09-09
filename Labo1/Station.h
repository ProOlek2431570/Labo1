#pragma once
#include <vector>
#include "Vaisseau.h"
#include "FactoryVaisseau.h"

class Station
{
private:
	int platinumDispo;
	int vieStation;
	std::vector<Vaisseau*> vecVaisseau;
	

public:
	Station();
	Station(int platinumDispo, int vieStation);
	~Station();

	std::vector<Vaisseau*> getVaisseauDispo();
	int ajouterVaisseau(Vaisseau* vaisseau);
	void init();

};

