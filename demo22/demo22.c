/*
* Projet : demo22
* Fichier : demo22.c
* 
* Auteur : PBY 
* 
* Description : fichier pour calcul air cercle 
* 
* Date de création : 13.09.2022
* Date de modification : 22.09.2022
* 
*
* Remarque : aucune 
*/

//-- librairie (standart) --//
#include <stdio.h>			// -- lib pour les entrees / sorties
#include <stdint.h>			// -- lib pour les entiers normalisé 
#include <math.h>

//-- librairie perso --//
#include "EnteteFctCalcul.h"



//const double PI = 3.14;  
const float FRACTION = 3.0 / 7.0;  // 0.429

//-- prototype --// 







//-- déclaration de fonction 
int main()
{
	//-- variable local 
	float  surfaceCercle_m2; 
	int8_t rayon_m = 1, tailleVariable;  //uint8_t int16_t uint16_t ..
	int valRetour = -1; 

	//- check taille variable --//
	tailleVariable = sizeof(int); 

	//appel de fct bidon 
	FctBidon(); 


	//appel de fonction -> CalculerSurfaceCercle
	surfaceCercle_m2 = CalculerSurfaceCercle(rayon_m); 

	// S = r*r*p = r^2 * p 
	//surfaceCercle_m2 = PI * rayon_m * rayon_m;
	//surfceCercle_m2 = PI * pow(rayon_m, 2); 
 
	//-- appel de fonction
	printf("Bonjour SLO"); 
	printf("\n valure surfae cercle en m2 : %f ", surfaceCercle_m2); 

	// return
	return valRetour; 

}







