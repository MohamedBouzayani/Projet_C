#include"Gutilisateur.h"
#include<stdio.h>
#include<strig.h>

int main()
{
utilisateur U1 = {12,"Salah","ben jmaa","salah.benjmaa@gmail.com",33464864345,"12/05/1889","Sousse","Homme","Infirmier");
utilisateur U2 = {12,"Mahmoud","benzarti","mahmoud.benzarti@gmail.com",45686866653,"11/09/1895","Monastir","Homme","Responsable ETS");
int x = ajouter("Gutilisateur.txt",U1);
if(x==1)
{
printf("\n ajout de point avec succés");
}
else{
printf("\n echec d'ajout ");
 }
int x = modifier("Gutilisateur.txt",U2);
if(x==1)
{
printf("\n Modification de point avec succés");
}
else{
printf("\n echec de Modification ");
}

if(x==1)
{
printf("\n Suppression de point avec succés");
}
else{
printf("\n echec de suppression ");
}
U3 = chercher ("Gutilisateur.txt",3);

if(U.id==-1){
printf("inexistant");
}
else
printf("%d% s% s% s% d% s% s% %d %s \n",U.id,U.Nom,U.prenom,U.Email,U.Telephone,U.Date_de_naissance,U.Lieu_de_naissance,U.sexe,U.role);
}
return 0;
}
