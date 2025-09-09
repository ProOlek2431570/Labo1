#include "VaisseauGuerre.h"


VaisseauGuerre::VaisseauGuerre(string nom, int exp, int niveau, int attaque, int defense, int vie, int capacite, int valeurMarchande, Faction*_faction) 
	:Vaisseau(nom, exp, niveau, attaque, defense, vie, capacite, valeurMarchande, _faction)
{
	this->nom = nom;
	this->exp = exp;
	this->niveau = niveau;
	this->attaque = _faction->modifierAttaque(attaque);
	this->defense = _faction->modifierDefense(defense);
	this->vie = _faction->modifierVie(vie);
	this->capacite = _faction->modifierCapacite(capacite);
	this->valeurMarchande = valeurMarchande;
}

VaisseauGuerre::VaisseauGuerre(Faction* faction)
	:Vaisseau(faction)
{
	nom = "Vaisseau AK-47";
	exp = 0;
	niveau = 1;
	attaque = faction->modifierAttaque(50);
	defense = faction->modifierDefense(50);
	vie = faction->modifierVie(100);
	capacite = faction->modifierCapacite(50);
	valeurMarchande = 1500;
}
VaisseauGuerre::~VaisseauGuerre()
{
	//vide pour le moment
}

std::string VaisseauGuerre::to_String()
{
	return " C'est un vaisseau de guerre\n " + Vaisseau::to_String();
}
