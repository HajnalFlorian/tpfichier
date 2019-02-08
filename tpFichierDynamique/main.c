#include <stdio.h>
#include <stdlib.h>
#include "strucProto.h"

int main()
{
    tCarteID tId;
    tCarteID *ptId;
    tId.nom=malloc(TAILLE *sizeof(char));
    tId.prenom=malloc(TAILLE *sizeof(char));
    tId.adresse=malloc(TAILLE *sizeof(char));
    tId.codePostal=malloc(TAILLE *sizeof(char));
    tId.ville=malloc(TAILLE *sizeof(char));
    ptId = &tId;
    tId.id=1;
    int nChoix;

    printf("Veuillez choisir entre les 3 prochain choix.\n");
    while(nChoix!=3)
    {
        printf("1 pour ecrire dans le fichier 2 pour le lire 3 pour fermer le programme.\n");
        scanf("%d",&nChoix);
        switch (nChoix){
        case 1: ajoutclient(ptId);
                ecriturefichier(ptId);
                tId.id++;
            break;
        case 2: afficherClient();
            break;
        default:
        break;
        }

    }

    free(tId.nom);
    free(tId.prenom);
    free(tId.adresse);
    free(tId.codePostal);
    free(tId.ville);
    return 0;
}
