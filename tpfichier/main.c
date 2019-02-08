#include <stdio.h>
#include <stdlib.h>
#include "structure&proto.h"

int main()
{
    tCarteID tId;
    tCarteID *ptId;
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


    return 0;
}
