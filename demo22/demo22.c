/*
* Projet : demo22
* Fichier : demo22.c
* 
* Auteur : PBY 
* 
* Description : fichier pour calcul air cercle 
* 
* Date de cr�ation : 13.09.2022
* Date de modification : 22.09.2022
* 
*
* Remarque : aucune 
*/

//-- librairie (standart) --//
#include <stdio.h>			// -- lib pour les entrees / sorties
#include <stdint.h>			// -- lib pour les entiers normalis� 
#include <math.h>

//-- librairie perso --//

//-- variable gloable --// #define PI2 3.14
#define PI_2 3.14

const double PI = 3.14;  
const float FRACTION = 3.0 / 7.0;  // 0.429

//-- prototype --// 
float CalculerSurfaceCercle(float rayon); 



//-- d�claration de fonction 
int main()
{
	//-- variable local 
	float  surfaceCercle_m2; 
	int8_t rayon_m = 1, tailleVariable;  //uint8_t int16_t uint16_t ..
	int valRetour = -1; 

	//- check taille variable --//
	tailleVariable = sizeof(int); 

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




//---
// nom fonction :						CalculerSurfaceCercle
// param�tre entre�e / sortie / inout :		rayon / surfaceCercle
// description : calcul de la surface d'un cercle 
// remarque : besoin d'une constante PI + lib math pour fct pow 
// auteur : PBY 
// date modification : 22.09.2022
//---
float CalculerSurfaceCercle(float rayon)
{
	// d�claration variable 
	float surface;

	surface = PI * pow(rayon, 2);

	return surface;
}