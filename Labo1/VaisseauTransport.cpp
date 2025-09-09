#include "VaisseauTransport.h"

VaisseauTransport::VaisseauTransport(string nom, int exp, int niveau, int attaque, int defense, int vie, int capacite, int valeurMarchande, Faction* _faction)
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

VaisseauTransport::VaisseauTransport(Faction* faction) 
	:Vaisseau(faction) 
{
	nom = "Vaisseau Amazon";
	exp = 0;
	niveau = 1;
	attaque = faction->modifierAttaque(10);
	defense = faction->modifierDefense(20);
	vie = faction->modifierVie(100);
	capacite = faction->modifierCapacite(500);
	valeurMarchande = 1500;
}
VaisseauTransport::~VaisseauTransport()
{
	//vide pour le moment
}

std::string VaisseauTransport::to_String()
{
	return " C'est un vaisseau de transport\n " + Vaisseau::to_String();
}
