#include <stdio.h>

int main()
{
    char reponse;
    float A , B ;
    int operation ;
    do {
            printf("-- Calculatrice : MENU ---\n");
            printf("1 - Addition.\n");
            printf("2 - Soustraction.\n");
            printf("3 - Multiplication.\n");
            printf("4 - Division.\n");
            printf("5 - Reste d'une division entiere.\n");
            printf("6 - Puissance.\n");
            scanf("%d", &operation);
            printf("Saisir le premier terme : ");
            scanf("%f", &A);
            printf("Saisir le deuxieme terme : ");
            scanf("%f", &B);
            switch(operation) {
                case 1 : printf("Le resultat est %.2f \n",A+B);
                         break;
                case 2 : printf("Le resultat est %.2f \n", A - B);
                         break;
                case 3 : printf("Le resultat est %.2f \n", A * B);
                         break;
                case 4 : if(B!=0)
                         printf("Le resultat est %.2f \n", A / B);
                         else
                             printf("FrJ tells U erreur 404 \n");
                         break;
                case 5 : printf("Le resultat est %d \n", (int)A % (int)B );
                         break;
                case 6 : printf("le resultat est %.2f \n", pow(A , B));
                         break;
                default : printf("L'operation est incorrect \n");
                         break;
            }
            printf("Veux-tu faire un autre calcul (Y/N)?");
            scanf("%c", &reponse);
    }while(reponse !='N');

    return 0;
