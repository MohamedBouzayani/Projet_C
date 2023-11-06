#ifndef Donneur_H_INCLUDED
#define Donneur_H_INCLUDED
typedef struct
{
char temps[5];
int reserved;
}heur;
typedef struct {
	int jour;
	int mois;
	int annee;
	heur heure;
	char ETS[50];
}Rendez-vous;
typedef struct {
	char Nom[20];
	char Prenom[20];
	int CIN;
	char Password[20];
	int sexe;
	Rendez-vous RV;

}Donneur;
int ajouter(Donneur D , char filename []);
int modifier(int CIN, Donneur nouv, char * filename);
int supprimer(int CIN, char * filename);
Donneur chercher(int CIN, char * filename);
#endif // Donneur_H_INCLUDED
