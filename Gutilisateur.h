#ifndef Gutilisateur.h
#define Gutilisateur.h
type def struct{
int id[20];
char Nom[20];
char Prenom[20];
char Email[20];
int Telephone[20];
char Date_de_naissance[20];
char Lieu_de_naissance[20];
int sexe;
int role;
char motdepasse[20]
}utilisateur;
int ajouter(utilisateur U, char file_utilisateur[]);
int modifier(int id , utilisateur N, char * file_utilisateur);
int supprimer(int id , char * file_utilisateur);
utilisateur chercher (char id, char * file_utilisateur);
#endif
