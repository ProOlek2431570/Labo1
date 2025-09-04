#include "Vaisseau.h"

Vaisseau::Vaisseau(string nom, int exp, int niveau, int attaque, int defense, int vie, int capacite, int valeurMarchande, Faction* faction)
{
	this->nom = nom;
	this->exp = exp;
	this->niveau = niveau;
	this->attaque = faction->modifierAttaque(attaque);
	this->defense = faction->modifierDefense(defense);
	this->vie = faction->modifierVie(vie);
	this->capacite = faction->modifierCapacite(capacite);
	this->valeurMarchande = valeurMarchande;
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
		"\n, ayant la défense: " + std::to_string(defense) + " et l'attaque:" + std::to_string(attaque) +
		"\n, Vie: " + std::to_string(vie) + " Capacite: " + std::to_string(capacite) + "valeur Marchande: " + std::to_string(valeurMarchande);
}

int Vaisseau::getAtt() { return attaque; }
int Vaisseau::getDef() { return defense; }
int Vaisseau::getVie() { return vie; }