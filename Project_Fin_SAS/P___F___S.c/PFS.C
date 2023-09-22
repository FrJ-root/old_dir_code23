#include <stdio.h>
#include <string.h>

int T_MAX[100];
int Tr = 0;
int T_Stock[];
int T_Identifiant[20];
char T_Titre[100];
char T_Description[500];
char T_Deadline[20];
char T_Status[50];
int choix;

void displayMenu() { //Menu

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

void add_Tache() {//Une tache
    if (Tr < T_MAX) {
        int id = Tr + 1;
        T_Stock[Tr] = id;
        printf("Tache %d:\n", id);
        printf("            1-> Identifiant : %d\n", id);scanf("%[^\n]", &T_Identifiant[Tr]);
        printf("            2-> Titre : ");scanf(" %[^\n]", &T_Titre[Tr]);
        printf("            3-> Description : ");scanf(" %[^\n]", &T_Description[Tr]);
        printf("            4-> Deadline(j/m/a) : ");scanf(" %[^\n]", &T_Deadline[Tr]);
        printf("            5-> Status : ");scanf(" %[^\n]", &T_Status[Tr]);
        Tr++;
        printf("                             \_ Tache ajoutee avec succes _/ \n");
        printf("                                                 \n");
    } else {
        printf("Erreur!!.\n");
    }
}

void pls_Tache(){//plusieur tache
    add_Tache();
    add_Tache();
}

void display() {//aff les taches
    printf("\n  -> Liste des taches :\n");
    for (int i=0;i<Tr;i++) {
        printf("       _\n");
        printf("Tache |%d|\n", T_Stock[i]);
        printf("      |_|___     \n");
        printf("          |_|-> 1-> Identifiant : %d\n", &T_Identifiant[i]);
        printf("                2-> Titre : %s\n", &T_Titre[i]);
        printf("                3-> Description : %s\n", &T_Description[i]);
        printf("                4-> Deadline(j/m/a) : %s\n", &T_Deadline[i]);
        printf("                5-> Status : %s\n", &T_Status[i]);
    }
}

void modification() {//modifier tache
    int id;
    int fd=0;
    printf("Entrer id de Tache : ");
    scanf("%d", &id);
    for (int i=0;i<Tr;i++){if(T_Stock[i] == id) { fd=1;
            printf("Edit Tache %d:\n", id);
            printf("new Title: ");scanf(" %[^\n]", T_Titre[i]);
            printf("new description: ");scanf(" %[^\n]", T_Description[i]);
            printf("new deadline(j/m/a): ");scanf(" %[^\n]", &T_Deadline[i]);
            printf("new status: ");scanf(" %[^\n]", T_Status[i]);
            printf("Tache avec id %d edited.\n", id);
            break;}
    }if (!fd) {printf("OOps!!! id not found.\n", id);}
    printf("Tache %d edited.\n");
}
void supp(){}//supp tache
void recherche(){//search tache
}


void statistique(){}//la statistique
int main() {
    int choix;
    do {
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
                display();
                break;
            case 4:
                modification();
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
                printf("OOOps!!! Veuillez reessayer ^_-.s\n");
        }
    } while (choix!=8);

    return 0;
}
