#include "VaisseauGuerre.h"


VaisseauGuerre::VaisseauGuerre(string nom, int exp, int niveau, int attaque, int defense, int vie, int capacite, int valeurMarchande, Faction*faction) 
	:Vaisseau(nom, exp, niveau, attaque, defense, vie, capacite, valeurMarchande, faction)
{
	this->nom = nom;
	this->exp = exp;
	this->niveau = niveau;
	this->attaque = faction->modifierAttaque(attaque);
	this->defense = faction->modifierDefense(defense);
	this->vie = faction->modifierVie(vie);
	this->capacite = faction->modifierCapacite(capacite);
	this->valeurMarchande = valeurMarchande;
}
VaisseauGuerre::~VaisseauGuerre()
{
	//vide pour le moment
}

std::string VaisseauGuerre::to_String()
{
	return " C'est un vaisseau de guerre\n " + Vaisseau::to_String();
}
