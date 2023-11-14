#include "Dons.h"
#include <string.h>

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
        while(fscanf(f,"%lf %lf %s %f %s\n",&d.id,&d.cin,d.type,&d.quantity,d.etablissement)!=EOF)
        {
            if(d.id== id)
            {
                fprintf(f2,"%lf %lf %s %.2f %s\n",nouv.id,nouv.cin,nouv.type,nouv.quantity,nouv.etablissement);
                tr=1;
            }
            else
                fprintf(f2,"%lf %lf %s %.2f %s\n",d.id,d.cin,d.type,d.quantity,d.etablissement);

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
        while(fscanf(f,"%lf %lf %s %f %s\n",&d.id,&d.cin,d.type,&d.quantity,d.etablissement)!=EOF)
        {
            if(d.id== id)
                tr=1;
            else
                fprintf(f2,"%lf %lf %s %.2f %s\n",d.id,d.cin,d.type,d.quantity,d.etablissement);
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
    int tr = 0;
    FILE * f=fopen(Dons, "r");
    if(f!=NULL)
    {
        while(tr==0 && fscanf(f,"%lf %lf %s %f %s\n",&d.id,&d.cin,d.type,&d.quantity,d.etablissement)!=EOF)
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
float quantite_type(char * Dons, char type_sang[]) {
    FILE *f = fopen(Dons, "r");
    Dons d;
    float total_quantity = 0;

    if (f != NULL) {
        while (fscanf(f, "%lf %lf %s %f %s\n", &d.id, &d.cin, d.type, &d.quantity, d.etablissement) != EOF) {
            if (strcmp(d.type, type_sang) == 0) {
                total_quantity += d.quantity;
            }
        }
        fclose(f);
    }

    return total_quantity;
}
void sang_rare(char * Dons, char sangRare[]) {
    char *types[] = {"A+", "B+", "AB+", "O+","A-", "B-", "AB-", "O-"};
    float min_quantity = -1;
    char min_type[5];

    for (int i = 0; i < 8; i++) {
        float quantity = quantite_type(Dons, types[i]);
        if (min_quantity == -1 || quantity < min_quantity) {
            min_quantity = quantity;
            strcpy(min_type, types[i]);
        }
    }

    strcpy(sangRare, min_type);
}



