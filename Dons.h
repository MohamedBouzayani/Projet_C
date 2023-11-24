#ifndef DONS_H_INCLUDED
#define DONS_H_INCLUDED
#include <stdio.h>
typedef struct
{
    char type[5], etablissement[50];
    char id[50], cin[50];
    char quantity[50];
} Dons;
int ajouter(char *, Dons);
int modifier(char *, char *, Dons);
int supprimer(char *, char *);
Dons chercher(char *, char *);
float quantite_type(char *, char []);
void sang_rare(char *, char []);

#endif
