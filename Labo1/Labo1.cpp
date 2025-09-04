#include <iostream>
#include "Vaisseau.h"
#include "VaisseauTransport.h"
#include "VaisseauLivraison.h"
#include "VaisseauGuerre.h"
#include "Faction.h"

using std::cout;
using std::cin;

int main()
{
	Vaisseau monVaisseau ("Alex", 1000, 1, 10, 30, 100, 50, 50, new FactionRouge());
	VaisseauTransport vaisseauTransport("Vaisseau Amazon ", 1000, 1, 0, 10, 100, 150, 50, new FactionBleue());
	VaisseauTransport vaisseauGuerre("Vaisseau AK-47", 1000, 1, 40, 50, 100, 50, 50, new FactionRouge());
	VaisseauTransport vaisseauLivraison("Vaisseau Purolator", 1000, 1, 0, 10, 100, 100, 50, new FactionBleue);
	
	std::cout << vaisseauTransport.to_String();
}

