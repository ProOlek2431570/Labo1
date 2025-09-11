#pragma once
#include <string>
#include "Faction.h"
#include <cstdlib> 
#include <ctime>

using std::string;
enum TypeVaisseau {
	GUERRE,
	TRANSPORT,
	LIVRAISON
};
class Vaisseau
{
protected:
	int attaque;
	int defense;
	int vie;
	int capacite;
	string nom;
	int niveau;
	int exp;
	Faction* faction;
	int valeurMarchande;

public:
	Vaisseau(string nom, int exp, int niveau, int attaque, int defense, int vie, int capacite, int valeurMarchande, Faction* _faction);
	Vaisseau(Faction* faction);
	~Vaisseau();

	int getAtt();
	int getDef();
	int getVie();	
	string getNom();
	virtual std::string to_String();
};



