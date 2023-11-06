#include "Dons.h"

int ajouter(char * Dons, Dons d )
{
    FILE * f=fopen(Dons, "a");
    if(f!=NULL)
    {
        fprintf(f,"%lf %lf %s %.2f %s\n",d.id,d.cin,d.type,d.quantity,d.etablissement);
        fclose(f);
        return 1;
    }
    else return 0;
}
int modifier( char * Dons, int id, Dons nouv )
{
    int tr=0;
    Dons d;
    FILE * f=fopen(Dons, "r");
    FILE * f2=fopen("Dons.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %d %s %.2f %s\n",d.id,d.cin,d.type,d.quantity,d.etablissement)!=EOF)
        {
            if(p.id== id)
            {
                fprintf(f2,"%d %d %s %.2f %s\n",nouv.id,nouv.cin,nouv.type,nouv.quantity,nouv.etablissement);
                tr=1;
            }
            else
                fprintf(f2,"%d %d %s %.2f %s\n",d.id,d.cin,d.type,d.quantity,d.etablissement);

        }
    }
    fclose(f);
    fclose(f2);
    remove(Dons);
    rename("Dons.txt", Dons);
    return tr;

}
int supprimer(char * Dons, int id)
{
    int tr=0;
    Dons d;
    FILE * f=fopen(Dons, "r");
    FILE * f2=fopen("Dons.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %d %s %.2f %s\n",d.id,d.cin,d.type,d.quantity,d.etablissement)!=EOF)
        {
            if(d.id== id)
                tr=1;
            else
                fprintf(f2,"%d %d %s %.2f %s\n",nouv.id,nouv.cin,nouv.type,nouv.quantity,nouv.etablissement);
        }
    }
    fclose(f);
    fclose(f2);
    remove(Dons);
    rename("Dons.txt", Dons);
    return tr;
}
Dons chercher(char * Dons, int id)
{
    Dons d;
    int tr;
    FILE * f=fopen(Dons, "r");
    if(f!=NULL)
    {
        while(tr==0&& fscanf(f,"%d %d %s %.2f %s\n",d.id,d.cin,d.type,d.quantity,d.etablissement)!=EOF)
        {
            if(d.id== id)
                tr=1;
        }
    }
    fclose(f);
    if(tr==0)
        d.id=-1;
    return d;

}
