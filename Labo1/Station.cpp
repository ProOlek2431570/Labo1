#include "Station.h"

Station::Station(int platinumDispo, int vieStation)
{
	this->platinumDispo = platinumDispo;
	this->vieStation = vieStation;
}

Station::Station()
{
	platinumDispo = 1000;
	vieStation = 100;
};

Station::~Station() {};

std::vector<Vaisseau*> Station::getVaisseauDispo()
{
	return vecVaisseau;
}

void Station::ajouterVaisseau(Vaisseau * vaisseau)
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

std::string Station::to_String()
{
	int nmbrVaisseau = getVaisseauDispo().size();
	return "Voici l'information de votre station"
		"\nPlatinum disponible: " + std::to_string(platinumDispo) +
		"\nVie restante: " + std::to_string(vieStation) +
		"\nNombre de vaisseau disponible: " + std::to_string(nmbrVaisseau);
}
