//But : cr�� un programme qui d�termine si le nombre entr� contient 5 chiffres et qui les affichent verticalement
//Auteur : Anthony Beauregard
//Date : 2020/09/08



#include <iostream>

int main()

{
	setlocale(LC_ALL, "");
 //Variable
	int nombre1;


	//On demande a l'utilisateur d'entrer un nombre � 5 chiffres.

	std::cout << " Veuillez entrer un nombre � cinq chiffres : ";

	//L'utilisateur entre le nombre

	std::cin >> nombre1; 


	//Si l'utilisateur entre un nombre a 5 chiffres, le programme lui montrera son nombre verticalement
	

	if (nombre1 >= 10000)
	{
		std::cout << nombre1 << "\n" << "Le reste je sais pas comment faire d�sol�, j'attend de voir en cours." << "\n";
		
			



	}
	//Sinon, le message qui suit lui sera affich�

	else

		std::cout << "Le nombre ne contient pas 5 chiffres";



	//Plan de tests
	/* 
	
	Nombre1     R�sultat
	56565         56565
	

	34			 Le nombre ne contient pas 5 chiffres
	*/

		























}