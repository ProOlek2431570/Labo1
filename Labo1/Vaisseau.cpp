#include "Vaisseau.h"

Vaisseau::Vaisseau(string nom, int exp, int niveau, int attaque, int defense, int vie, int capacite, int valeurMarchande, Faction* _faction)
{
	this->nom = nom;
	this->exp = exp;
	this->niveau = niveau;
	this->attaque = _faction->modifierAttaque(attaque);
	this->defense = _faction->modifierDefense(defense);
	this->vie = _faction->modifierVie(vie);
	this->capacite = _faction->modifierCapacite(capacite);
	this->valeurMarchande = valeurMarchande;
	this->faction = _faction;
	
}

Vaisseau::Vaisseau(Faction* faction)
{
	nom = "Vaisseau Alex ";
	exp = 0;
	niveau = 1;
	attaque = 10;
	defense = 10;
	vie = 100;
	capacite = 100;
	valeurMarchande = 1000;
	this->faction = faction;
}

Vaisseau::~Vaisseau()
{
	//vide pour le moment
}


std::string Vaisseau::to_String()
{
	return "Votre vaisseau: " + nom + " Exp: " + std::to_string(exp) + " le niveau: " + std::to_string(niveau) +
		"\nFaction: " + faction->getNom() +
		"\nayant la defense: " + std::to_string(defense) + " et l'attaque:" + std::to_string(attaque) +
		"\nVie: " + std::to_string(vie) + " Capacite: " + std::to_string(capacite) + "valeur Marchande: " + std::to_string(valeurMarchande) + "\n";
}

int Vaisseau::getAtt() { return attaque; }
int Vaisseau::getDef() { return defense; }
int Vaisseau::getVie() { return vie; }
string Vaisseau::getNom() { return nom; }
