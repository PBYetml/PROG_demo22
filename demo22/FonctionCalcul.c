/*
* Projet : demo22
* Fichier : FonctionCalcul.c
*
* Auteur : PBY
*
* Description : fichier pour calcul air cercle
*
* Date de création : 04.10.2022
* Date de modification : xx.xx.2022
*
*
* Remarque : aucune
*/

//-- librairie (standart) --//
#include <math.h>

//-- libraire (perso) --// 
#include "EnteteFctCalcul.h"

//---
// nom fonction :						CalculerSurfaceCercle
// paramètre entreée / sortie / inout :		rayon / surfaceCercle
// description : calcul de la surface d'un cercle 
// remarque : besoin d'une constante PI + lib math pour fct pow 
// auteur : PBY 
// date modification : 22.09.2022
//---
float CalculerSurfaceCercle(float rayon)
{
	// déclaration variable 
	float surface;

	surface = PI * pow(rayon, 2);

	return surface;
}


void FctBidon(void) {}