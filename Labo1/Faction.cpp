#include "Faction.h"


Faction::~Faction()
{
	//vide pour le moment
}

//Rouge
int FactionRouge::modifierAttaque(int base) { return base + 20; }
int FactionRouge::modifierVie(int base) { return base + 20; }
int FactionRouge::modifierDefense(int base) { return base - 10; }
int FactionRouge::modifierCapacite(int base) { return base - 10; }
string FactionRouge::getNom() { return "Faction Rouge"; }

//Bleue
int FactionBleue::modifierAttaque(int base) { return base; }
int FactionBleue::modifierVie(int base) { return base + 50; }
int FactionBleue::modifierDefense(int base) { return base + 10; }
int FactionBleue::modifierCapacite(int base) { return base + 30; }
string FactionBleue::getNom() { return "Faction Bleue"; }


