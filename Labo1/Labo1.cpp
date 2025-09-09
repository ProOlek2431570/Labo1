#include <iostream>
#include "Vaisseau.h"
#include "VaisseauTransport.h"
#include "VaisseauLivraison.h"
#include "VaisseauGuerre.h"
#include "Faction.h"
#include "FactoryVaisseau.h"

using std::cout;
using std::cin;

int main()
{
	srand(time(NULL));
	cout << "... production d'un vaisseau" << "\n";
	Vaisseau* monVaisseau = FactoryVaisseau::getRandomVaisseau();
	cout << monVaisseau->to_String();
	delete monVaisseau;
	
}

