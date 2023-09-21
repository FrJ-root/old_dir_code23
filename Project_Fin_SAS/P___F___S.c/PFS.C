#include <stdio.h>
#include <string.h>

#define T_MAX 100

int Tr = 0;
int D[];
int T_Identifiant[20];
char T_Titre[100];
char T_Description[500];
char T_Deadline[20];
char T_Status[50];
int choix;

void displayMenu() { //Menu
    printf("*========================================================================================*\n");
    printf("|                                           MENU                                         |\n");
    printf("*========================================================================================*\n");
    printf("|   1. Ajouter une nouvelle Tache                                                        |\n");
    printf("|   2. Ajouter plusieurs nouvelles Taches                                                |\n");
    printf("|   3. Afficher la liste de toutes les Taches                                            |\n");
    printf("|   4. Modifier une Tache                                                                |\n");
    printf("|   5. Supprimer une Tache par identifiant                                               |\n");
    printf("|   6. Rechercher les Taches                                                             |\n");
    printf("|   7. Statistiques                                                                      |\n");
    printf("|   8. Quitter                                                                           |\n");
    printf("*========================================================================================*\n");
}

void add_Tache() {//Une tache
    if (Tr < T_MAX) {
        int id = Tr + 1;
        D[Tr] = id;
        char continuer;
do{

        printf("Tache %d:\n", id);
        printf("        1-> Titre : ");scanf(" %[^\n]", &T_Titre[Tr]);
        printf("        2-> Description : ");scanf(" %[^\n]", &T_Description[Tr]);
        printf("        3-> Identifiant : %d\n", id);scanf("%[^\n]", &T_Identifiant[Tr]);
        printf("        4-> Deadline(j/m/a) : ");scanf(" %[^\n]", &T_Deadline[Tr]);
        printf("        5-> Status : ");scanf(" %[^\n]", &T_Status[Tr]);
        Tr++;printf("Tache ajoutee avec succes ^_-\n");
        printf("Ajouter une autre Tache(Y/N)?");
        gets(continuer);

    } else {
        printf("Erreur!!.\n");
    }

        }while(continuer != 'Y' ) ;
}

void displayTasks() {
    printf("\nListe des taches :\n");
    for (int i = 0; i < Tr; i++) {
        printf("Tache %d:\n", D[i]);
        printf("        1-> Titre : %s\n", &T_Titre[i]);
        printf("        2-> Description : %s\n", &T_Description[i]);
        printf("        3-> Identifiant : %d\n", &T_Identifiant[i]);
        printf("        4-> Deadline(j/m/a) : %s\n", &T_Deadline[i]);
        printf("        5-> Status : %s\n", &T_Status[i]);
    }
}

int main() {
    int choice;
    char continuer;
    do {
        displayMenu();
        printf("Choisissez une option : ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_Tache();
                 printf("Ajouter une autre Tache(Y/N)?");
        scanf(" %c", &continuer);
        if(continuer == 'Y'){
            add_Tache();
        }else{ break;}

            case 2:
                displayTasks();
                break;
            case 3:
                printf("Au revoir !\n");
                break;
            default:
                printf("Option invalide. Veuillez reessayer.\n");
        }
    } while (choice != 3);

    return 0;
}
