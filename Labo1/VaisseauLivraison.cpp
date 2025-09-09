#include "VaisseauLivraison.h"

VaisseauLivraison::VaisseauLivraison(string nom, int exp, int niveau, int attaque, int defense, int vie, int capacite, int valeurMarchande, Faction* _faction) 
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
VaisseauLivraison::VaisseauLivraison(Faction* faction)
	:Vaisseau(faction)
{
	nom = "Vaisseau Purolator";
	exp = 0;
	niveau = 1;
	attaque = faction->modifierAttaque(10);
	defense = faction->modifierDefense(10);
	vie = faction->modifierVie(100);
	capacite = faction->modifierCapacite(200);
	valeurMarchande = 1500;
}
VaisseauLivraison::~VaisseauLivraison()
{
	//vide pour le moment
}

std::string VaisseauLivraison::to_String()
{
	return " C'est un vaisseau de livraison\n " + Vaisseau::to_String();
}
