#include "VaisseauTransport.h"

VaisseauTransport::VaisseauTransport(string nom, int exp, int niveau, int attaque, int defense, int vie, int capacite, int valeurMarchande, Faction* faction)
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
VaisseauTransport::~VaisseauTransport()
{
	//vide pour le moment
}

std::string VaisseauTransport::to_String()
{
	return " C'est un vaisseau de transport\n " + Vaisseau::to_String();
}
