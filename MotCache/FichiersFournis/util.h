#ifndef UTIL_H
#define UTIL_H
#include <stdio.h>
#include <stdlib.h>


#define S 0
#define N 1
#define E 2
#define O 3
#define NE 4
#define NO 5
#define SE 6
#define SO 7

//File of grid corrupted or empty
#define FICHIER_GRILLE_ERREUR 1

//File of words is empty
#define FICHIER_LISTE_MOTS_VIDE_ERREUR 2

//Error opening a file
#define FICHIER_OUVERTURE_ERREUR 3

//Number of arguments received inadequate
#define NBRE_ARGUMENTS_ERREUR 4

// Word not found in the grid
#define MOT_NON_TROUVE_ERREUR 5







/**
* À utiliser pour afficher les erreurs
*/
void print_erreur(int err);

/**
* À utiliser pour afficher la position d'un mot dans la grille
*/
void print_position_mot(char * mot,int ligne, int colone, int direction);

#endif
