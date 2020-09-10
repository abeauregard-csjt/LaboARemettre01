//But : créé un programme qui détermine si le nombre entré contient 5 chiffres et qui les affichent verticalement
//Auteur : Anthony Beauregard
//Date : 2020/09/08



#include <iostream>

int main()

{
	setlocale(LC_ALL, "");
 //Variable
	int nombre1;


	//On demande a l'utilisateur d'entrer un nombre à 5 chiffres.

	std::cout << " Veuillez entrer un nombre à cinq chiffres : ";

	//L'utilisateur entre le nombre

	std::cin >> nombre1; 


	//Si l'utilisateur entre un nombre a 5 chiffres, le programme lui montrera son nombre verticalement
	

	if (nombre1 >= 10000)
	{
		std::cout << nombre1 << "\n" << "Le reste je sais pas comment faire désolé, j'attend de voir en cours." << "\n";
		
			



	}
	//Sinon, le message qui suit lui sera affiché

	else

		std::cout << "Le nombre ne contient pas 5 chiffres";



	//Plan de tests
	/* 
	
	Nombre1     Résultat
	56565         56565
	

	34			 Le nombre ne contient pas 5 chiffres
	*/

		























}