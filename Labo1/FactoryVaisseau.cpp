#include "FactoryVaisseau.h"


Vaisseau* FactoryVaisseau::getRandomVaisseau()
{
	Vaisseau* vaisseau(0);

	Faction* maFaction = getRandomFaction();



	TypeVaisseau typeV = (TypeVaisseau)FactoryVaisseau::genererNb(1, 3);
	if (typeV == TypeVaisseau::GUERRE)
		vaisseau = new VaisseauGuerre(maFaction);
	else if (typeV == TypeVaisseau::TRANSPORT)
		vaisseau = new VaisseauTransport(maFaction);
	else
		vaisseau = new VaisseauLivraison(maFaction);

	return vaisseau;
};

Faction* FactoryVaisseau::getRandomFaction()
{
	Faction* maFaction(0);

	TypeVaisseau typeV = (TypeVaisseau)FactoryVaisseau::genererNb(1, 3);
	if (typeV == TypeVaisseau::GUERRE)
		maFaction = new FactionRouge();
	else if (typeV == TypeVaisseau::TRANSPORT)
		maFaction = new FactionBleue();
	else
		maFaction = new FactionBleue();

	return maFaction;
}
int FactoryVaisseau::genererNb(int choix1, int choix2)
{
	return rand() % choix2;
}
