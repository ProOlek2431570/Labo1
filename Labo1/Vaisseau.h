#pragma once
#include <string>
#include "Faction.h"
using std::string;

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
	int valeurMarchande;
	Faction* faction;

public:
	Vaisseau(string nom, int exp, int niveau, int attaque, int defense, int vie, int capacite, int valeurMarchande, Faction* faction);
	~Vaisseau();

	int getAtt();
	int getDef();
	int getVie();	

	virtual std::string to_String();
};

