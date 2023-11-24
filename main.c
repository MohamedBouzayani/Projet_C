#include <stdio.h>
#include <string.h>
#include "Dons.h"

int main()
{
    Dons d1 = {"A+", "Ariana", "4734", "12345678", "0.5"};
    Dons d2 = {"O-", "Tunis", "23784", "12345678", "0.7"};
    Dons d3;

    int x = ajouter("Dons.txt", d1);
    if (x == 1)
        printf("\najout de Dons avec succés");
    else 
        printf("\nechec ajout");

    x = modifier("Dons.txt", "1", d2);
    if (x == 1)
        printf("\nModification de Dons avec succés");
    else 
        printf("\nechec Modification");

    x = supprimer("Dons.txt", "1");
    if (x == 1)
        printf("\nSuppression de Dons avec succés");
    else 
        printf("\nechec Suppression");

    d3 = chercher("Dons.txt", "3");
    if (strcmp(d3.id, "-1") == 0)
        printf("\nDons introuvable");

    return 0;
}
