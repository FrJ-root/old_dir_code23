#include <stdio.h>

int main()
{
    char caractere;

    printf("Entrer un caractere : ");
    scanf("%c", &caractere);

    switch(caractere)
    {

    case 'e':
    case 'a':
    case 'i':
    case 'u':
    case 'o':
      printf(">> voyelle.\n");
        break;
    default:
        printf("n'est pas une voyelle.\n");
        break;

    }

    return 0;
}
