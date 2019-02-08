#ifndef STRUCTURE&PROTO_H_INCLUDED
#define STRUCTURE&PROTO_H_INCLUDED
#define TAILLE 255
#define CP 10
typedef struct tCarteID{
    int id;
    char nom[TAILLE];
    char prenom[TAILLE];
    char adresse[TAILLE];
    char codePostal[CP];
    char ville[TAILLE];
}tCarteID;

extern void ajoutclient (tCarteID *ptId);
extern void ecriturefichier(tCarteID *ptId);
extern void afficherClient();



#endif // STRUCTURE&PROTO_H_INCLUDED
