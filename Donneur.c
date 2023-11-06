#include "Donneur.h"
#include<stdio.h>
int ajouter(Donneur d , char filename [])
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f,"%d %s %s %s %d %d %d %s %s\n",d.CIN,d.Nom,d.Prenom,d.Password,d.RV.jour,d.RV.mois,d.RV.annee,d.RV.heure.temps,d.RV.ETS);
        fclose(f);
        return 1;
    }
    else return 0;
}

int modifier(int CIN, Donneur nouv, char * filename)
{
Donneur d;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%d %s %s %s %d %d %d %s %s\n",&d.CIN,d.Nom,d.Prenom,d.Password,&d.RV.jour,&d.RV.mois,&d.RV.annee,d.RV.heure.temps,d.RV.ETS)!=EOF)
{
if(d.CIN!=CIN)
        fprintf(f2,"%d %s %s %s %d %d %d %s %s\n",d.CIN,d.Nom,d.Prenom,d.Password,d.RV.jour,d.RV.mois,d.RV.annee,d.RV.heure.temps,d.RV.ETS);
else

  fprintf(f2,"%d %s %s %s %d %d %d %s %s\n",nouv.CIN,nouv.Nom,nouv.Prenom,nouv.Password,nouv.RV.jour,nouv.RV.mois,nouv.RV.annee,nouv.RV.heure.temps,nouv.RV.ETS);

}
        fclose(f);
        fclose(f2);
remove(filename);
rename("aux.txt", filename);
        return 1;
    }
  
}

int supprimer(int CIN, char * filename)
{
Donneur d;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%d %s %s %s %d %d %d %s %s\n",&d.CIN,d.Nom,d.Prenom,d.Password,&d.RV.jour,&d.RV.mois,&d.RV.annee,d.RV.heure.temps,d.RV.ETS)!=EOF)
{
if(p.CIN!=CIN)
        fprintf(f2,"%d %s %s %s %d %d %d %s %s\n",d.CIN,d.Nom,d.Prenom,d.Password,d.RV.jour,d.RV.mois,d.RV.annee,d.RV.heure.temps,d.RV.ETS);

}
        fclose(f);
        fclose(f2);
remove(filename);
rename("aux.txt", filename);
        return 1;
    }
}

Point chercher(int CIN, char * filename)
{
Donneur d; int tr=0;
    FILE * f=fopen(filename, "r");
 if(f!=NULL )
    {
while(fscanf(f,"%d %s %s %s %d %d %d %s %s\n",&d.CIN,d.Nom,d.Prenom,d.Password,&d.RV.jour,&d.RV.mois,&d.RV.annee,d.RV.heure.temps,d.RV.ETS)!=EOF && tr==0)
{if(CIN==d.CIN)
tr=1;
}
}
if(tr==0)
d.CIN=-1;
return d;

}
