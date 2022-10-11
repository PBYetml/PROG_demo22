/*
* Projet : demo22
* Fichier : EnteteFctCalcul.h
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


#ifndef ENTETE_FCT_CALCUL_H 
#define ENTETE_FCT_CALCUL_H

//-- variable gloable --// #define PI2 3.14
#define PI 3.14

// roue = 5 ; moteur = 1 ; nbPasager = 7 ; portes = 4 ; 
typedef enum { moteur = 1, portes = 4, roues, nbpassager = 7 } e_voiture;


//-- prototype --// 
float CalculerSurfaceCercle(float rayon);

void FctBidon(void);

#endif




