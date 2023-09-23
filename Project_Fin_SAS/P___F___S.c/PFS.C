#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int T_Stock[500];
int T_Identifiant[100];
char T_Titre[100];
char T_Description[500];
char T_Deadline[20];
char T_Status[50];
int choix;
int T_Supp[100];
int T_Number = 0;
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Affichage de MENU ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
void sparoooo(){
printf("\n");
printf("\n");
printf("\n");
printf("                                               █     █░▓█████  ██▓    ▄████▄  ▒█████   ███▄ ▄███▓▓█████ \n");
printf("                                              ▓█░ █ ░█░▓█   ▀ ▓██▒   ▒██▀ ▀█ ▒██▒  ██▒▓██▒▀█▀ ██▒▓█   ▀\n");
printf("                                              ▒█░ █ ░█ ▒███   ▒██░   ▒▓█    ▄▒██░  ██▒▓██    ▓██░▒███\n");
printf("                                              ░█░ █ ░█ ▒▓█  ▄ ▒██░   ▒▓▓▄ ▄██▒██   ██░▒██    ▒██ ▒▓█  ▄\n");
printf("                                             ░░██▒██▓ ░▒████▒░██████▒ ▓███▀ ░ ████▓▒░▒██▒   ░██▒░▒████▒\n");
printf("                                               ░ ▓░▒ ▒  ░░ ▒░ ░░ ▒░▓  ░ ░▒ ▒  ░ ▒░▒░▒░ ░ ▒░   ░  ░░░ ▒░ ░\n");
printf("                                                ▒ ░ ░   ░ ░  ░░ ░ ▒  ░ ░  ▒    ░ ▒ ▒░ ░  ░      ░ ░ ░  ░\n");
printf("                                                ░   ░     ░     ░ ░  ░       ░ ░ ░ ▒  ░      ░      ░   \n");
printf("                                                  ░       ░  ░    ░  ░ ░         ░ ░         ░      ░  ░\n");
printf("                                                                               ░                                  \n");}

void displayMenu() {
    printf("                                                              Le Projet de Fin de SAS [PFS]                                                          \n");
    printf("                                                                                                                                                     \n");
    printf("*===================================================================================================================================================*\n");
    printf("|                                                                          MENU                                                                     |\n");
    printf("*===================================================================================================================================================*\n");
    printf("|   1. Ajouter une nouvelle Tache                                                                                                                   |\n");
    printf("|   2. Ajouter plusieurs nouvelles Taches                                                                                                           |\n");
    printf("|   3. Afficher la liste de toutes les Taches                                                                                                       |\n");
    printf("|   4. Modifier une Tache                                                                                                                           |\n");
    printf("|   5. Supprimer une Tache par identifiant                                                                                                          |\n");
    printf("|   6. Rechercher les Taches                                                                                                                        |\n");
    printf("|   7. Statistiques                                                                                                                                 |\n");
    printf("|   8. Quitter                                                                                                                                      |\n");
    printf("*===================================================================================================================================================*\n");
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Ajouter une Tache ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
void add_Tache() {
    if (T_Number<T_Stock) {
        T_Identifiant[T_Number] = T_Number + 1;
        printf("Tache %d:\n",T_Identifiant[T_Number]);
        printf("            1-> Titre : ");scanf(" %[^\n]", &T_Titre[T_Number]);
        printf("            2-> Description : ");scanf(" %[^\n]", &T_Description[T_Number]);
        printf("            3-> Deadline(j/m/a) : ");scanf(" %[^\n]",&T_Deadline[T_Number]);
        printf("            4-> Status : ");scanf(" %[^\n]",&T_Status[T_Number]);
        T_Number++;
        printf("                               Tache ajoutee avec succes ^_^ \n");
        printf("                                                 \n");
    } else {
        printf("Erreur!!.\n");
    }
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Ajouter Plusieurs Taches ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
void pls_Tache() {
    int numTache;
    printf("Combien de Tache souhaitez vous ajouter ? : ");
    scanf("%d", &numTache);
    for (int i = 0; i < numTache; i++) {
        add_Tache();
    }
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Display all Tache ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
void Display() {
    char choixDisplay;
    printf("\n  -> Liste des taches :\n");
    for (int i=0;i<T_Number;i++) {
    	printf("       _\n");
        printf("Tache |%d|\n",T_Identifiant[i]);
        printf("      |_|_____________     \n");
        printf("                    |_|->   1-> Identifiant : %d\n",T_Identifiant[i]);
        printf("                            2-> Titre : %s\n", &T_Titre[i]);
        printf("                            3-> Description : %s\n", &T_Description[i]);
        printf("                            4-> Deadline(j/m/a) : %s\n", &T_Deadline[i]);
        printf("                            5-> Status : %s\n", &T_Status[i]);
    }
    switch (choixDisplay){
case 1: display_alphab();break;
case 2: display_Dead();break;
default: printf("Option de recherche invalide.\n");}
}
void display_alphab(){}
void display_Dead(){}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Modification des Taches ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
void modifyTache() {
    int id, idtrouver;
    idtrouver = -1;
printf("Entrez id de la tache que vous souhaitez modifier : ");scanf("%d", &id);
    for(int i = 0; i < T_Number; i++) {
        if (T_Stock[i]==id) { idtrouver = i;
        printf(" -> Modification de la Tache %d :\n", id);
        printf("            1-> New Titre : ");scanf(" %[^\n]", &T_Titre[i]);
        printf("            2-> New description : ");scanf(" %[^\n]", &T_Description[i]);
        printf("            3-> New deadline(j/m/a) : ");scanf(" %[^\n]", &T_Deadline[i]);
        printf("            4-> New statut : ");scanf(" %[^\n]", &T_Status[i]);
        printf("Tache %d modifi�e avec succ�s^_^\n", id);break;
        }
    } if (idtrouver == -1){
    printf("Tache avec l'identifiant %d introuvable.\n", id); }
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Supp des Taches ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
void supp(){
int id;
    printf("Entrez id de la Tache a supprimer : ");
    scanf("%d", &id);

    for (int i=0;i<T_Number;i++) {
        if (T_Stock[i] == id && !T_Supp[i]) {
            T_Supp[i] = 1;
            printf("Tache avec id %d a ete supprimee avec succes ^_^\n", id);
            return;
        }
    }

    printf("Aucune tache avec id %d n'a ete trouvee.\n", id);
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Search the Taches~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
void searchByIdentifiant(){
	int id;
	printf("Entrer id de Tache aue vous souhaitez rechercher : ");scanf("%d", &id);
	for(int i=0;i<T_Number;i++){
		if(!T_Supp[i] && T_Stock[i] == id){
			printf("Tache avec id %d trouvee :\n", id);
            printf("1-> Identifiant : %d\n", T_Stock[i]);
            printf("2-> Titre : %s\n", T_Titre[i]);
            printf("3-> Description : %s\n", T_Description[i]);
            printf("4-> Deadline(j/m/a) : %s\n", T_Deadline[i]);
            printf("5-> Status : %s\n", T_Status[i]);break;
		}
	}     printf("Aucune Tache avec id %d n a ete trouvee.\n", id);
}
void searchByTitre() {
    char Titre[100];
    printf("Entrez le titre de Tache que vous souhaitez rechercher : ");scanf(" %[^\n]", Titre);
    for(int i = 0; i <T_Number; i++) {
        if(!T_Supp[i] && strcmp(T_Titre[i],Titre) == 0) {
            printf("Tache avec le titre \"%s\" trouv�e :\n", Titre);
            printf("1-> Identifiant : %d\n", T_Stock[i]);
            printf("2-> Titre : %s\n", T_Titre[i]);
            printf("3-> Description : %s\n", T_Description[i]);
            printf("4-> Deadline(j/m/a) : %s\n", T_Deadline[i]);
            printf("5-> Statut : %s\n", T_Status[i]);
            break;
        }
    }printf("Aucune tache avec le titre \"%s\" n a ete trouvee.\n", Titre);
}
void recherche(){
int choixRecherche;
    printf("      _\n");
    printf("     |1|-> Rechercher par Identifiant\n");
    printf("      _\n");
    printf("     |2|-> Rechercher par Titre\n");
    printf("Choisissez une option : ");
    scanf("%d", &choixRecherche);
    switch (choixRecherche) {
        case 1:
            searchByIdentifiant();
            break;
        case 2:
            searchByTitre();
            break;
        default:
            printf("Option de recherche invalide.\n");
    }
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Statistique ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
void statistique(){
int completTache = 0;
int nocompletTache = 0;

    printf("Statistique information:\n");
    printf("  -> Total Tache: %d\n",T_Number);

    for (int i = 0; i <T_Number; i++) {
        if (!T_Supp[i]) {
            if (strcmp(T_Status[i], "finalis�e") == 0) {
                completTache++;
            } else {
                nocompletTache++;
            }
        }
    }

    printf("  -> Tache complete: %d\n", completTache);
    printf("  -> Tache incomplete: %d\n", nocompletTache);
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Main ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
int main() {
system("COLOR E0");
    int choix;
    do {
         sparoooo();break;

        displayMenu();
        printf("Choisissez une option : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                add_Tache();
                break;
            case 2:
                pls_Tache();
                break;
            case 3:
                Display();
                break;
            case 4:
                modifyTache();
                break;
            case 5:
                supp();
                break;
            case 6:
                recherche();
                break;
            case 7:
                statistique();
                break;
            case 8:
                printf("Au revoir !\n");
                break;
            default:
                printf("OOOps!!! Veuillez reessayer ^_-\n");
        }
    } while (choix!=8);
    return 0;
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
