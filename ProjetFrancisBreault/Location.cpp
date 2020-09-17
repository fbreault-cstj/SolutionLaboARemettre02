// But : Creer un programme qui calcule le co�t d'un voyage en fonction du kilom�tre parcouru 
// Nom : Francis Breault
// Date: 2020-09-16		

#include<iostream>

void main()				//D�claration des variable
{
	setlocale(LC_ALL, "");


	int nbdejour;
	float kmparcouru;
	int location = 45;
	float essence = 1.25;
	float consommationau100km = 7.6;
	float couttotal;

	
	std::cout << "Combien de jours partirez vous en voyage ? ";	//L'utilisateur entre la dur�e de son voyage
	std::cin >> nbdejour;


	std::cout << "Combien de kilom�tre ferez vous pendant le voyage  ?";
	std::cin >> kmparcouru;
	if (kmparcouru / nbdejour >= 250)
	{
		float prixKilometresupp = ((kmparcouru - (250 * nbdejour)) * 0.05);  // On calcule ici le nombre de kilom�tre suppl�mentaire parcouru si l'utilisateur d�passe les 250km allou� par jour
		float consommationparkm = (kmparcouru * (consommationau100km / 100) * essence);	// Ici, on calcule la consommation du v�hicule a chaque km parcouru
		int prixlocation = location * nbdejour;

		std::cout << "Le cout total de la location est de : " << prixKilometresupp + consommationparkm + prixlocation << "$"; // La console affiche le montant total de la location
	}

	else                     // Calcule pour calculer si l'utilisateur ne d�passe pas les 250km		
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
	/*		Plan de test								R�sultat Voulu
			5 jours et 5500km parcouru					Le cout total de la location est de : 960$
			3 jours et 250km parcouru					Le cout total de la location est de : 135$
			-5 jours et 88451 km parcouru				Vous ne partez donc pas vraiment en voyage ?
			9 jours et -500km parcouru					Le cout total de la location est de : 405$
			0 jours et 250km parcouru					Le cout total de la location est de : 36.25$
			5 jours et 0km parcouru						Le cout total de la location est de : 225$
	
	
	*/
	


	
