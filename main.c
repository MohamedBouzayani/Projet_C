#include <stdio.h>
#include <string.h>
#include"Dons.h"

int main()
{
    Dons d1= {4734,12345678,"A+", 0.5," Ariana "},d2= {23784,12345678,"O-", 0.7," Tunis "},d3;
    int x=ajouter("Dons.txt", d1);
    if(x==1)
        printf("\najout de Dons avec succés");
    else printf("\nechec ajout");
    x=modifier("Dons.txt",1,p2 );

    if(x==1)
        printf("\nModification de Dons avec succés");
    else printf("\nechec Modification");
    x=supprimer("Dons.txt",1 );
    if(x==1)
        printf("\nSuppression de Dons avec succés");
    else printf("\nechec Suppression");
    p3=chercher("Dons.txt",3 );
    if(d3.id==-1)
        printf("introuvable");
    return 0;
}
