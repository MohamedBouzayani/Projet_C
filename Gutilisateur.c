#include"Gutisateur.h"
#include<stdio.h>
int ajouter(utilisateur U, char file_utilisateur [])
{
FILE *f=fopen(file_utilisateur[],"a");
do {
   fprintf("Le role \n");
   fscanf("%d",&U.role);
while(!(choix_role > 0)&&(choix_role < 4);
switch(choix_role){

case 1 :

        printf("Responsable ETS \n");
break;

case 2 :

        printf("Infirmier \n");
break;

case 3 :

        printf("Medecin biologiste \n");
break;
default;

do {
   fprintf("Le Sexe \n");
   fscanf("%d",&U.sexe);
while(!(choix_sexe > 0)&&(choix_sexe < 3);
switch(choix_sexe){

case 1 :

        printf("Homme \n");
break;

case 2 :

        printf("Femme \n");
break;

default;

if (f!=NULL){
fprintf(f,"%d% s% s% s% d% s% s% %d %s \n",U.id,U.Nom,U.prenom,U.Email,U.Telephone,U.Date_de_naissance,U.Lieu_de_naissance,U.sexe,U.role);
fclose(f);
return &;
}
else return 0;
}
int modifier(int id , utilisateur N, char * file_utilisateur);
utilisateur N;
FILE* f=fopen(file_utilisateur,"r");
FILE* f=fopen("Gutilisateur.txt","w");

if(f == NULL || f1 == NULL)
return 0;
else
{
while(fscanf(f,"%d% s% s% s% d% s% s% %d %s \n",U.id,U.Nom,U.prenom,U.Email,U.Telephone,U.Date_de_naissance,U.Lieu_de_naissance,U.sexe,U.role)!=EOF)
{
if (strcmp(U.id,id)!=0)
fprintf(f1,"%d% s% s% s% d% s% s% %d %s \n",U.id,U.Nom,U.prenom,U.Email,U.Telephone,U.Date_de_naissance,U.Lieu_de_naissance,U.sexe,U.role);
else
{
fprintf(f1,"%d% s% s% s% d% s% s% %d %s \n",N.id,N.Nom,N.prenom,N.Email,N.Telephone,N.Date_de_naissance,N.Lieu_de_naissance,N.sexe,N.role);

}
fclose(f);
fclose(f2);
remove(file_utilisateur);
rename("Gutilisateur.txt", file_utilisateur);
return 1;
}
}
int supprimer(int id , char * file_utilisateur);
utilisateur U;
FILE* f=fopen(file_utilisateur,"r");
FILE* f=fopen("Gutilisateur.txt","w");
if(f == NULL || f1 == NULL)
return 0;
else
{
while(fscanf(f,"%d% s% s% s% d% s% s% %d %s \n",U.id,U.Nom,U.prenom,U.Email,U.Telephone,U.Date_de_naissance,U.Lieu_de_naissance,U.sexe,U.role)!=EOF)
{
if (U.id,id)!=0)
fprintf(f1,"%d% s% s% s% d% s% s% %d %s \n",U.id,U.Nom,U.prenom,U.Email,U.Telephone,U.Date_de_naissance,U.Lieu_de_naissance,U.sexe,U.role);
}
fclose(f);
fclose(f2);
remove(file_utilisateur);
rename("Gutilisateur.txt",file_utilisateur);
return 1;
}
}

utilisateur chercher (char id, char * file_utilisateur);
{
utilisateur U;
int tr = 0;
FILE* f=fopen(file_utilisateur,"r");
if(f! == NULL)
{
while(fscanf(f,"%d% s% s% s% d% s% s% %d %s \n",U.id,U.Nom,&U.prenom,U.Email,U.Telephone,U.Date_de_naissance,U.Lieu_de_naissance,U.sexe,U.role)!=EOF)&& tr == 0)
{
if strcmp(U.id,id)!=0)
tr =1;
}
}
U.id = -1;
return U;
}



