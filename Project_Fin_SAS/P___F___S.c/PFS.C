#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int T_Identifiant[100];
char T_Titre[100][100];
char T_Description[100][500];
int T_Deadline[100];
char T_Status[100][50];
int T_Number = 0;
int choix;
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Affichage de MENU ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
void Menu(){
    printf("*==============================================================================================================================================*\n");
    printf("|                                                                       MENU                                                                   |\n");
    printf("*==============================================================================================================================================*\n");
    printf("|   1. Ajouter une nouvelle Tache                                                                                                              |\n");
    printf("|   2. Ajouter plusieurs nouvelles Taches                                                                                                      |\n");
    printf("|   3. Afficher la liste de toutes les Taches                                                                                                  |\n");
    printf("|   4. Modifier une Tache                                                                                                                      |\n");
    printf("|   5. Supprimer une Tache par identifiant                                                                                                     |\n");
    printf("|   6. Rechercher les Taches                                                                                                                   |\n");
    printf("|   7. Statistiques                                                                                                                            |\n");
    printf("|   8. Quitter                                                                                                                                 |\n");
    printf("*==============================================================================================================================================*\n");
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Ajouter une Tache ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
void Add_Tache(){
        T_Identifiant[T_Number] = T_Number + 1;
        printf("Tache %d:\n",T_Number+1);
        printf("            1-> Id : ");scanf("%d", &T_Identifiant[T_Number]);
        printf("            1-> Titre : ");scanf("%s",&T_Titre[T_Number]);
        printf("            2-> Description : ");scanf("%s",&T_Description[T_Number]);
        printf("            3-> Deadline(j/m/a) : ");scanf("%d",&T_Deadline[T_Number]);
        printf("            4-> Status : ");scanf("%s",&T_Status[T_Number]);
        T_Number++;
                printf("                     _                       \n");
                printf("                    |_|_                       \n");
                printf("                        |===|>       Add Succes ^_-\n");
                printf("\n");
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Ajouter Plusieurs Taches ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
void Pls_Tache(){
    int numTacheAj;
    int i;
    printf("Veuillez Entrer Num Tache : ");
    scanf("%d",&numTacheAj);
    printf("\n");
    for(i=0; i<numTacheAj; i++)
    {
        T_Identifiant[T_Number] = T_Number + 1;
        printf("            1-> Id : ");scanf("%d", &T_Identifiant[T_Number]);
        printf("            1-> Titre : ");scanf("%s", T_Titre[T_Number]);
        printf("            2-> Description : ");scanf("%s", T_Description[T_Number]);
        printf("            3-> Deadline(j/m/a) : ");scanf("%d",&T_Deadline[T_Number]);
        printf("            4-> Status : ");scanf("%s",T_Status[T_Number]);
        T_Number++;
        printf("\n");
                printf("                     _                       \n");
                printf("                    |_|_                       \n");
                printf("                        |===|>       Add Succes ^_-\n");
                }
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Display all Tache ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
void Display(){
    int i;
    printf("Liste des Taches :\n");
    for(i=0; i<T_Number; i++)
    {
        printf("       _\n");
        printf("Tache |%d|\n",i+1);
        printf("      |_|_____________     \n");
        printf("                    |_|->   1-> Id : %d\n",T_Identifiant[i]);
        printf("                            2-> Titre : %s\n",T_Titre[i]);
        printf("                            3-> Description : %s\n",T_Description[i]);
        printf("                            4-> Deadline(j/m/a) : %d\n",T_Deadline[i]);
        printf("                            5-> Status : %s\n",T_Status[i]);
    }
}
void display_alpha(){
        int i, j;
        int tempJour;
        char tem[100];
        for(i=0; i<T_Number-1; i++)
        {
            for(j=0; j<T_Number-i-1; j++)
            {
                if(strcmp(T_Titre[j],T_Titre[j+1])>0)
                {
                    strcpy(tem,T_Titre[j]);
                    strcpy(T_Titre[j],T_Titre[j+1]);
                    strcpy(T_Titre[j+1],tem);

                    strcpy(tem,T_Description[j]);
                    strcpy(T_Description[j],T_Description[j+1]);
                    strcpy(T_Description[j+1],tem);

                    tempJour = T_Deadline[j];
                    T_Deadline[j] = T_Deadline[j + 1];
                    T_Deadline[j + 1] = tempJour;

                    strcpy(tem,T_Status[j]);
                    strcpy(T_Status[j],T_Status[j+1]);
                    strcpy(T_Status[j+1],tem);
                }
            }
        }
}
void display_deadline(){
        int i, j;
        int temp;
        char tempe[100];
        char tempStatut[100];
        for(i=0; i<T_Number-1; i++)
        {
            for(j=0; j<T_Number-i-1; j++)
            {
                if (T_Deadline[j]>T_Deadline[j+1])
                {
                    temp = T_Identifiant[j];
                    T_Identifiant[j] = T_Identifiant[j + 1];
                    T_Identifiant[j + 1] = temp;

                    strcpy(tempe,T_Titre[j]);
                    strcpy(T_Titre[j],T_Titre[j+1]);
                    strcpy(T_Titre[j+1],tempe);

                    strcpy(tempe,T_Description[j]);
                    strcpy(T_Description[j],T_Description[j+1]);
                    strcpy(T_Description[j+1],tempe);

                    temp = T_Deadline[j];
                    T_Deadline[j] = T_Deadline[j + 1];
                    T_Deadline[j + 1] = temp;

                    strcpy(tempStatut,T_Status[j]);
                    strcpy(T_Status[j],T_Status[j+1]);
                    strcpy(T_Status[j+1],tempStatut);

                }
            }
        }
    }
void display_deadline_3jours(){
        int i;
        printf("Les Taches dans le deadline de  3 jours ou moins :\n");
        for(i=0; i<=T_Number; i++)
        {
            if(T_Deadline[i]<=3)
            {   printf("       _\n");
                printf("Tache |%d|\n",i+1);
                printf("      |_|_____________     \n");
                printf("                    |_|->   1-> Id : %d\n",T_Identifiant[i]);
                printf("                            2-> Titre : %s\n", T_Titre[i]);
                printf("                            3-> Description : %s\n", T_Description[i]);
                printf("                            4-> Deadline(j/m/a) : %d\n", T_Deadline[i]);
                printf("                            5-> Status : %s\n", T_Status[i]);
            }
        }
}
void choix_Display(){
        printf("      _\n");
        printf("     |1|->  Par ordre alphabetique\n");
        printf("      _\n");
        printf("     |2|->  Par deadline\n");
        printf("      _\n");
        printf("     |3|->  Dont le deadline est dans 3 jours ou moins\n");
        printf("Entrer votre choix:");scanf("%d",&choix);
                switch (choix){
                case 1:
                    display_alpha();Display();break;
                case 2:
                    display_deadline();Display();break;
                case 3:
                    display_deadline_3jours();Display();break;
                default:
                    printf("Trie Erreur!.\n");}
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Modification des Taches ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
void ModifyTache(){
        int i, id, choix, NV_Deadline;
        char NV_Statut[100], NV_Description[500];
        
        printf("      _\n");
        printf("     |1|->  description d'une Tache\n");
        printf("      _\n");
        printf("     |2|->  statut d'une Tache\n");
        printf("      _\n");
        printf("     |3|->  deadline d'une Tache\n");
        printf("Entrer votre choix : ");scanf("%d", &choix);
        switch(choix){
            case 1 :
                       printf("Veuiller Entrer id de Tache : ");scanf("%d",&id);
                       printf("\n");
                       for(i=0; i<T_Number ; i++){
                         if(T_Identifiant[i]==id){
                                   printf("Veuiller Editer : \n");scanf("%s",NV_Description);
                    strcpy(T_Description[i],NV_Description);
                       printf("                     _                       \n");
                       printf("                    |_|_                       \n");
                       printf("                        |===|>       Edit Succes ^_-\n");break;
                       }else  printf("id Errour!",id);}break;
            case 2 :
                        printf("Veuiller Entrer id de Tache:");scanf("%d",&id);
                       printf("\n");
                       for(i=0; i<T_Number; i++)
                       {
                        if(T_Identifiant[i]==id)
                        {
                       printf("Veuiller Editer :\n");scanf("%s",NV_Statut);
                       strcpy(T_Description[i],NV_Statut);
                       printf("                     _                       \n");
                       printf("                    |_|_                       \n");
                       printf("                        |===|>       Edit Succes ^_-\n");break;
                        } else  printf("id Errour!",id);
                       }break;
            case 3 :
                       printf("Veuiller Entrer id de Tache:");scanf("%d",&id);
                       printf("\n");
                       for(i=0; i<T_Number; i++)
                         {
                          if(T_Identifiant[i]==id)
                              {
                       printf("Veuiller Editer : \n");scanf("%d",&NV_Deadline);
                      T_Deadline[i]=NV_Deadline;
                       printf("                     _                       \n");
                       printf("                    |_|_                       \n");
                       printf("                        |===|>       Edit Succes ^_-\n");break;
                       }else  printf("id Errour!",id);}break;}
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Supp des Taches ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
void Supp(){
        int i, j, id;
        printf("Entrez id de la Tache a supprimer : ");
        scanf("%d",&id);
        printf("  \n");
        for (int i=0; i<T_Number; i++)
        { if (T_Identifiant[i] == id)
            {for(j=0; j<T_Number-1; j++)
                {   strcpy(T_Titre[j],T_Titre[j+1]);
                    strcpy(T_Description[j],T_Description[j+1]);
                    T_Deadline[j]=T_Deadline[j+1];
                    strcpy(T_Status[j],T_Status[j+1]);
                } T_Number--;
                printf("                     _                       \n");
                printf("                    |_|_                       \n");
                printf("                        |===|>       Supprimer Succes ^_-\n");
                return;
            }
        }printf("Aucune tache avec id %d n'a ete trouvee.\n", id);
    }
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Search the Taches~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
void searchByIdentifiant(){
        int i, id, FrJ_Define;
        printf("Entrer id de Tache aue vous souhaitez rechercher : ");
        scanf("%d", &id);
        for(int i=0; i<T_Number; i++)
        {
            if(T_Identifiant[i] == id)
            {
                printf("Tache avec id %d trouvee :\n", id);
                printf("1-> Id : %d\n",T_Identifiant[i]);
                printf("2-> Titre : %s\n",T_Titre[i]);
                printf("3-> Description : %s\n",T_Description[i]);
                printf("4-> Deadline(j/m/a) : %d\n",T_Deadline[i]);
                printf("5-> Status : %s\n",T_Status[i]);break;
            }
        }
        if(FrJ_Define!=0)
            printf("Aucune Tache avec id %d.\n", id);
    }
void searchByTitre(){
        char RechTitre[100];
        int FrJ_Define=0;
        int i;
        printf("Entrez le Titre de Tache que vous souhaitez rechercher : ");
        scanf("%s", RechTitre);
        for(int i = 0; i <T_Number; i++)
        {
            if(strcmp(T_Titre[i],RechTitre) == 0)
            {
                printf("Tache avec le titre \"%s\" trouvee :\n", RechTitre[100]);
                printf("1-> Id : %d\n", T_Identifiant[i]);
                printf("2-> Titre : %s\n", T_Titre[i]);
                printf("3-> Description : %s\n", T_Description[i]);
                printf("4-> Deadline(j/m/a) : %d\n", T_Deadline[i]);
                printf("5-> Statut : %s\n", T_Status[i]);
                FrJ_Define=1;break;
            }
            if(FrJ_Define!=0)
            {
                printf("Aucune tache avec le titre \"%s\" n a ete trouvee.\n", RechTitre);
            }
        }
}
void Search(){
        int choixRecherche;
        printf("      _\n");
        printf("     |1|-> Par Id\n");
        printf("      _\n");
        printf("     |2|-> Par Titre\n");
        printf("\n");
        printf("Choisissez une option : ");scanf("%d", &choixRecherche);
                   switch (choixRecherche)
                    {
                     case 1:
                         searchByIdentifiant();break;
                     case 2:
                         searchByTitre();break;
                       default:
                     printf("Option de recherche invalide!!.\n");}
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Statistique ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
void statQ_cmpl_incmpl(){
        int i;
        int completTache = 0;
        int incompletTache = 0;

        printf("Statistique information:\n");
        printf("  -> Total Tache: %d\n",T_Number);

        for (i = 0; i < T_Number; i++)
        {
            if (strcmp(T_Status[i], "finalisee") == 0){
                completTache++;
            }
            else
            {
                incompletTache++;
            }
        }
        printf("  -> Tache complete: %d\n", completTache);
        printf("  -> Tache incomplete: %d\n", incompletTache);
}
void staQ_liste_Tache(){
        int i;
        printf("                  _           \n");
        printf("                 |_|  Toutes les Taches est :\n");
        printf("\n");
        for(i=0; i<T_Number; i++)
        {   printf("       _     \n");
            printf("Tache |%d|\n",i+1);
            printf("      |_|_____________     \n");
            printf("                    |_|->   1-> Id : %d\n",T_Identifiant[i]);
            printf("                            2-> Titre : %s\n", T_Titre[i]);
            printf("                            3-> Description : %s\n", T_Description[i]);
            printf("                            4-> Deadline(j/m/a) : %d\n",T_Deadline[i]);
            printf("                            5-> Status : %s\n", T_Status[i]);
        }
}
void Statistique(){
        printf("      _\n");
        printf("     |1|->  numbre Total des Taches\n");
        printf("      _\n");
        printf("     |2|->  numbre de Taches completes et incompletes\n");
        printf("      _\n");
        printf("     |3|->  numbre de jours restants jusqu'au delai de chaque tache\n");
        printf("Entrer votre choix:");scanf("%d",&choix);
                switch(choix){
                case 1 :
                    staQ_liste_Tache();break;
                case 2 :
                    statQ_cmpl_incmpl();break;}
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Control_Main ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
int main(){
        int i, id, choix, NV_Deadline, choixRecherche;
        char NV_Description[100], NV_Statut[100];
        system("COLOR E0");
        do{
            Menu();
            printf("  _ \n");
            printf(" |_|__      \n");
            printf("      |__->   Choisissez une option : ");scanf("%d", &choix);

            switch(choix) {
            case 1:
                system("cls");
                Add_Tache();break;
            case 2:
                system("cls");
                Pls_Tache();break;
            case 3:
                system("cls");
                choix_Display();break;
            case 4:
                system("cls");
                ModifyTache();break;
            case 5:
                system("cls");
                Supp();break;
            case 6:
                system("cls");
                Search();break;
            case 7:
                system("cls");
                Statistique();break;
            case 8:
                system("cls");
                printf("\n");
                printf("\n");
                printf("\n");
                printf("\n");
                printf("\n");
                printf("\n");
                printf("\n");
                printf("\n");
                printf("\n");
                printf("\n");
                printf("\n");
                printf("\n");
                printf("\n");
                printf("\n");
                printf("\n");
                printf("\n");
                printf("                                                                                                               \n");
                printf("                                                                                                               \n");
                printf("                                                                                                               \n");
                printf("                                                                                                               \n");
                printf("                                                                                                               \n");
                printf("                                                                             Au revoir ^_-                     \n");break;
                
            default:
                printf("       OOOps!!! Veuillez reessayer.\n");
				  }
            
            }while (choix!=8);
            return 0;
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
