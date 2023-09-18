
#include <stdio.h>
#include <ctype.h> 

int main() {
    char caractere;

    printf("Veuillez entrer un caractère : ");
    scanf(" %c", &caractere);

    caractere = tolower(caractere);

    if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u') {
        printf("%c est une voyelle.\n", caractere);
    } else {
        printf("%c n'est pas une voyelle.\n", caractere);
    }

    return 0;
}

