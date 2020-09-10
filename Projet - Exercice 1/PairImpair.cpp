//But : Écrire un programme pouvant déterminer si un nombre est pair ou impair.
//Auteur: Anthony Beauregard
//Date : 2020-09-08

#include <iostream>

int main()
{
	setlocale(LC_ALL, "");


 //Notre variable
	int nombre;

//Notre variable de résultat
	int resultat;

	//On demande à l'utilisateur d'entrer un nombre entier

	std::cout << " Veuillez entrer un nombre entier : ";
	//L'utilisateur tape son nombre
	std::cin >> nombre; 
	//On divise le nombre par deux pour savoir si il est pair ou impair et on le stocke dans la variable résultat
	resultat = nombre % 2;

	//On utilise If/Else pour comparer le résulat. Si la réponse est égale a zéro, le nombre est pair. Sinon, il est impair. De plus, l'utilisateur en sera informé.

	if (resultat == 0) {
		std::cout << " Le nombre " << nombre << " est un nombre pair.";


	}
	else {
		std::cout << " Le nombre " << nombre << " est un nombre impair.";
	}


	return 0;

	/*Plan de tests
	* 
	* 
	* 152 : "Le nombre 152 est un nombre pair."
	* 
	* 133 : "Le nombre 133 est un nombre impair. "
	* 
	* 
	* 45 : "Le nombre 45 est un nombre impair."
	* 
	* 34 : "Le nombre 34 est un nombre pair."*/





















}

