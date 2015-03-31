#include "util.h"

static char * tostring(int dir){
        switch(dir){
                case S : return "S";
                case N : return "N";
                case E : return "E";
                case O : return "O";
                case NE : return "NE";
                case NO : return "NO";
                case SE : return "SE";
                case SO : return "SO";
                default : return "erreur de direction";
        }
}


/**
* À utiliser pour afficher la taille et le nom d'un élément
*/
void print_position_mot(char * mot,int ligne, int colone, int direction)
{
        printf("%s %d %d %s\n",mot,ligne,colone,tostring(direction));
}


void print_erreur(int err)
{
        switch (err)
        {
                   
                case FICHIER_GRILLE_ERREUR : 
                printf("Erreur : fichier de la grille corrompu ou vide\n");
                break;
                case FICHIER_LISTE_MOTS_VIDE_ERREUR :
                printf("Erreur : Fichier vide\n");
                break;
                case FICHIER_OUVERTURE_ERREUR : 
                printf("Erreur : ouveture du fichier\n");
                break;
                case NBRE_ARGUMENTS_ERREUR :
                printf("Erreur : nombre d'arguments incorect\n");
                break;
                case MOT_NON_TROUVE_ERREUR :
                printf("--ERREUR--\n");
                break;

                default:
                break;
        }
}
