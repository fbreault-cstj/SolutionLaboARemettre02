// But : Creer un programme qui calcule le coût d'un voyage en fonction du kilomètre parcouru 
// Nom : Francis Breault
// Date: 2020-09-16		

#include<iostream>

void main()				//Déclaration des variable
{
	setlocale(LC_ALL, "");


	int nbdejour;
	float kmparcouru;
	int location = 45;
	float essence = 1.25;
	float consommationau100km = 7.6;
	float couttotal;

	
	std::cout << "Combien de jours partirez vous en voyage ? ";	//L'utilisateur entre la durée de son voyage
	std::cin >> nbdejour;


	std::cout << "Combien de kilomètre ferez vous pendant le voyage  ?";
	std::cin >> kmparcouru;
	if (kmparcouru / nbdejour >= 250)
	{
		float prixKilometresupp = ((kmparcouru - (250 * nbdejour)) * 0.05);  // On calcule ici le nombre de kilomètre supplémentaire parcouru si l'utilisateur dépasse les 250km alloué par jour
		float consommationparkm = (kmparcouru * (consommationau100km / 100) * essence);	// Ici, on calcule la consommation du véhicule a chaque km parcouru
		int prixlocation = location * nbdejour;

		std::cout << "Le cout total de la location est de : " << prixKilometresupp + consommationparkm + prixlocation << "$"; // La console affiche le montant total de la location
	}

	else                     // Calcule pour calculer si l'utilisateur ne dépasse pas les 250km		
	{


		if (nbdejour < 0)
		{
			std::cout << "Vous ne partez donc pas vraiment en voyage ?";		// si l'utilisateur ne part pas en voyage cette section s'applique.
		}


		else
		{
			std::cout << "Le cout total de la location est de : " << nbdejour * location << "$"; // Le cout total s'affiche si l'utilisateur respecte le 250km gratuit
		}
		
		
	}
}	
	/*		Plan de test								Résultat Voulu
			5 jours et 5500km parcouru					Le cout total de la location est de : 960$
			3 jours et 250km parcouru					Le cout total de la location est de : 135$
			-5 jours et 88451 km parcouru				Vous ne partez donc pas vraiment en voyage ?
			9 jours et -500km parcouru					Le cout total de la location est de : 405$
			0 jours et 250km parcouru					Le cout total de la location est de : 36.25$
			5 jours et 0km parcouru						Le cout total de la location est de : 225$
	
	
	*/
	


	
