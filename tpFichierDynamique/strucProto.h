#ifndef STRUCPROTO_H_INCLUDED
#define STRUCPROTO_H_INCLUDED
#define TAILLE 255
#define CP 10
typedef struct tCarteID{
    int id;
    char* nom;
    char* prenom;
    char* adresse;
    char* codePostal;
    char* ville;
}tCarteID;

extern void ajoutclient (tCarteID *ptId);
extern void ecriturefichier(tCarteID *ptId);
extern void afficherClient();



#endif // STRUCPROTO_H_INCLUDED
