#include <stdio.h>
#include <string.h>

#define T_MAX 100
int Tr = 0;
int T_Stock[500];
int T_Identifiant[20];
char T_Titre[100];
char T_Description[500];
char T_Deadline[20];
char T_Status[50];
int choix;
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Affichage de MENU ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
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
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Ajouter une Tache ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
void add_Tache() {
    if (Tr<T_MAX) {
        int id = Tr + 1;
        T_Stock[Tr] = id;
        printf("Tache %d:\n", id);
        printf("            1-> Identifiant : %d\n", id);scanf("%[^\n]", &T_Identifiant[Tr]);
        printf("            2-> Titre : ");scanf(" %[^\n]", &T_Titre[Tr]);
        printf("            3-> Description : ");scanf(" %[^\n]", &T_Description[Tr]);
        printf("            4-> Deadline(j/m/a) : ");scanf(" %[^\n]", &T_Deadline[Tr]);
        printf("            5-> Status : ");scanf(" %[^\n]", &T_Status[Tr]);
        Tr++;
        printf("                               Tache ajoutee avec succes ^_^ \n");
        printf("                                                 \n");
    } else {
        printf("Erreur!!.\n");
    }
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Ajouter Plusieurs Taches ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
void pls_Tache() {
    int numTache;
    printf("Combien de Tache souhaitez vous ajouter ? : ");
    scanf("%d", &numTache);

    for (int i = 0; i < numTache; i++) {
        printf("\nTache %d :\n", i + 1);
        add_Tache();
    }
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Display all Tache ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
void display() {
    printf("\n  -> Liste des taches :\n");
    for (int i=0;i<Tr;i++) {
        printf("Tache |%d|\n", T_Stock[i]);
        printf("      |_|_____________     \n");
        printf("                    |_|->   1-> Identifiant : %d\n", &T_Identifiant[i]);
        printf("                            2-> Titre : %s\n", &T_Titre[i]);
        printf("                            3-> Description : %s\n", &T_Description[i]);
        printf("                            4-> Deadline(j/m/a) : %s\n", &T_Deadline[i]);
        printf("                            5-> Status : %s\n", &T_Status[i]);
    }
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Modification des Taches ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
void modifyTache() {
    int id;
printf("Entrez id de la tache que vous souhaitez modifier : ");scanf("%d", &id);
    for(int i = 0; i < Tr; i++) {
        if (T_Stock[i]==id) {
        printf(" -> Modification de la Tache %d :\n", id);
        printf("            1-> New Titre : ");scanf(" %[^\n]", &T_Titre[i]);
        printf("            2-> New description : ");scanf(" %[^\n]", &T_Description[i]);
        printf("            3-> New deadline(j/m/a) : ");scanf(" %[^\n]", &T_Deadline[i]);
        printf("            4-> New statut : ");scanf(" %[^\n]", &T_Status[i]);
        printf("Tache %d modifi�e avec succ�s^_^\n", id);break;
        }
    }
    printf("Tache avec l'identifiant %d introuvable.\n", id);
}
void supp(){

}
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
                 system("cls");
                add_Tache();
                break;
            case 2:
                 system("cls");
                pls_Tache();
                break;
            case 3:
                 system("cls");
                display();
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
                printf("OOOps!!! Veuillez reessayer ^_-.s\n");
        }
    } while (choix!=8);

    return 0;
}
