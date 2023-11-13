#ifndef DONS_H_INCLUDED
#define DONS_H_INCLUDED
#include <stdio.h>
typedef struct
{
    char type [5] , etablissement[50];
    double id, cin;
    float quantity;
} Dons;
int ajouter(char *, Dons );
int modifier( char *, int, Dons );
int supprimer(char *, int );
Dons chercher(char *, int);
float quantite_type(char *, char []);
void sang_rare(char *, char []);

#endif
