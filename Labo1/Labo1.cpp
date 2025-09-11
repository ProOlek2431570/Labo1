#include <iostream>
#include "Vaisseau.h"
#include "VaisseauTransport.h"
#include "VaisseauLivraison.h"
#include "VaisseauGuerre.h"
#include "Faction.h"
#include "FactoryVaisseau.h"
#include "Station.h" 
#include <cstdlib>

using std::cout;
using std::cin;

void imageVaisseauAfficher()
{
	std::cout << "   /\\\n";
	std::cout << "  /  \\\n";
	std::cout << " /____\\\n";
	std::cout << " |    |\n";
	std::cout << " |____|\n";
	std::cout << "  /||\\\n";
	std::cout << " /_||_\\\n";
}

void afficherMenu() {
	std::cout << "\n===== MENU PRINCIPAL =====\n";
	std::cout << "1. Voir la station\n";
	std::cout << "2. Voir la liste de tous les vaisseaux\n";
	std::cout << "3. Voir la liste des vaisseaux disponibles a l'achat\n";
	std::cout << "4. Lancer le jeu aventure\n";
	std::cout << "5. Quitter\n";
	std::cout << "Choix : ";
}

int main()
{
	int choix;
	bool continuer = true;
	Station* maStation = new Station();
	maStation->init();
	Vaisseau* vaisseauAchat1 = FactoryVaisseau::getRandomVaisseau();
	Vaisseau* vaisseauAchat2 = FactoryVaisseau::getRandomVaisseau();
	Vaisseau* vaisseauAchat3 = FactoryVaisseau::getRandomVaisseau();
	std::vector<Vaisseau*> vaisseauxExpedition;
	for (auto vaisseau : maStation->getVaisseauDispo())
	{
		vaisseauxExpedition.push_back(vaisseau);
	}

	std::vector<int> missionTours = { 0, 0, 0 };
	std::vector<bool> enMission = { false, false, false };
	std::vector<Vaisseau*> vaisseauxAcheter = 
	{
	vaisseauAchat1,
	vaisseauAchat2,
	vaisseauAchat3
	};


	//Menu commence
	imageVaisseauAfficher();
	cout << "Bienvenue au jeu d'adventure!!!\n";
	cout << "Appuyez sur une touche pour continuer ___\n";
	cin.get();
	system("cls");
	while (continuer)
	{
		afficherMenu();
		cin >> choix;
		switch (choix) {
		case 1:
			system("cls");
			cout << "\nAffichage de votre station\n";
			cout << maStation->to_String() << std::endl;
			break;
		case 2:
			system("cls");
			cout << "\nAffichage de la liste de tous les vaisseaux\n";
			for (auto vaisseau : vaisseauxAcheter)
			{
				cout << vaisseau->to_String() << std::endl;
			}
			break;
		case 3:
			system("cls");
			cout << "\nAffichage des vaisseaux disponibles a l'achat\n";
			for (auto vaisseau : maStation->getVaisseauDispo())
			{
				cout << vaisseau->to_String() << std::endl;
			}
			break;
		case 4:
		{
			system("cls");
			cout << "\n=== JEU AVENTURE ===\n";
			bool jouer = true;
			char continuerPartie;

			while (jouer)
			{
				cout << "On envoie vos vaisseaux en exploration\n";
				for (int i = 0; i < maStation->getVaisseauDispo().size(); i++)
				{
					if (!enMission[i])
					{
						missionTours[i] = rand() % 4 + 2;
						enMission[i] = true;
						cout << vaisseauxExpedition[i]->getNom() << " part en mission pour " << missionTours[i] << "tours\n";
					}
				}

				char choixTour = 'o';
				while (choixTour == 'o' || choixTour == 'O') {
					cout << "\n--- Nouveau tour ---\n";
					for (int i = 0; i < maStation->getVaisseauDispo().size(); ++i) {
						if (enMission[i]) {
							missionTours[i]--;
							cout << vaisseauxExpedition[i]->getNom() << " est en mission... (" << missionTours[i] << " tours restants)\n";

							if (missionTours[i] <= 0) {
								enMission[i] = false;
								cout << vaisseauxExpedition[i]->getNom() << " est revenu de mission.\n";

								double proba = 0.2 * 4; 
								double tirage = (double)rand() / RAND_MAX;

								if (tirage < proba) {
									cout << vaisseauxExpedition[i]->getNom() << " a trouve des ressources !\n";
								}
								else {
									cout << vaisseauxExpedition[i]->getNom() << " n'a rien trouve.\n";
								}
							}
						}
						else {
							cout << vaisseauxExpedition[i]->getNom() << " est a la station.\n";
						}
					}


					cout << "Passer un autre tour ? (o/n) : ";
					cin >> choixTour;
				}

				cout << "Retour au menu principal.\n";
				break;
			}
		}
		case 5:
			cout << "Au revoir !\n";
			continuer = false;
			break;
		default:
			cout << "Choix invalide. Veuillez réessayer.\n";
			break;
		}
	}
}
