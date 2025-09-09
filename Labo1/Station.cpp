#include "Station.h"
Station::Station() {};
Station::Station(int platinumDispo, int vieStation)
{
	this->platinumDispo = platinumDispo;
	this->vieStation = vieStation;
}

Station::~Station() {};

std::vector<Vaisseau*> Station::getVaisseauDispo()
{
	return vecVaisseau;
}

int Station::ajouterVaisseau(Vaisseau * vaisseau)
{
	vecVaisseau.push_back(vaisseau);
}

void Station::init()
{
	for (int i = 0; i < 3; i++)
	{
		vecVaisseau.push_back(FactoryVaisseau::getRandomVaisseau());
	}
}
