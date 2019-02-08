#include <stdio.h>
#include <stdlib.h>
#include "strucProto.h"

void ajoutclient (tCarteID *ptId)
{
    printf("Nom:\n");
    fflush(stdin);
    gets((*ptId).nom);
    printf("Prenom:\n");
    gets((*ptId).prenom);
    printf("Adresse:\n");
    gets((*ptId).adresse);
    printf("Code postal:\n");
    gets((*ptId).codePostal);
    printf("Ville:\n");
    gets((*ptId).ville);
}

void ecriturefichier(tCarteID *ptId)
{
    FILE *fichier;
    fichier=fopen("fichier.txt","a");
    if (fichier!=NULL)
    {
        char str[TAILLE];
        sprintf(str, "%d", (*ptId).id);// passe l'entier de ptId.id en char dans str qui permet son écriture dans le fichier texte

        fputs("Numero : ", fichier);
        fputs(str, fichier);
        fputs("\n", fichier);

        fputs("Nom : ", fichier);
        fputs((*ptId).nom, fichier);
        fputs("\n", fichier);

        fputs("Prenom : ", fichier);
        fputs((*ptId).prenom,fichier);
        fputs("\n", fichier);

        fputs("Adresse : ", fichier);
        fputs((*ptId).adresse,fichier);
        fputs("\n", fichier);

        fputs("Code postal : ", fichier);
        fputs((*ptId).codePostal,fichier);
        fputs("\n", fichier);

        fputs("Ville : ", fichier);
        fputs((*ptId).ville,fichier);
        fputs("\n", fichier);
        fputs("\n", fichier);
    }

    fclose(fichier);
}

void afficherClient()
{
    char chaine[TAILLE]="";

    FILE * fichier;
    fichier=fopen("fichier.txt", "r");

    while (fgets(chaine, TAILLE,fichier) != NULL) // On lit le fichier tant qu'on ne reçoit pas d'erreur (NULL)
        {
            printf("%s", chaine); // On affiche la chaîne qu'on vient de lire
        }
    fclose(fichier);
}


