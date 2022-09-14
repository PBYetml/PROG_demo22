/*
* Projet : demo22
* Fichier : demo22.c
* 
* Auteur : PBY 
* 
* Description : demo
* 
* Remarque : aucune 
*/

//-- librairie (standart) --//
#include <stdio.h>			// -- lib pour les entrees / sorties
#include <stdint.h>			// -- lib pour les entiers normalisé 
#include <math.h>

//-- librairie perso --//

//-- variable gloable --// #define PI2 3.14
#define PI_2 3.14

const double PI = 3.14;  
const float FRACTION = 3.0 / 7.0;  // 0.429



//-- déclaration de fonction 
void main()
{
	//-- variable local 
	float  surfaceCercle_m2; 
	int8_t rayon_m = 0.0, tailleVariable;  //uint8_t int16_t uint16_t ..


	//- check taille variable --//
	tailleVariable = sizeof(int); 

	// S = r*r*p = r^2 * p 

	//surfaceCercle_m2 = PI * rayon_m * rayon_m;
	surfaceCercle_m2 = PI * pow(rayon_m, 2); 
 



	//-- appel de fonction
	printf("Bonjour SLO"); 

}