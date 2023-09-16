#include <stdio.h>

int main() {
    int nombre;

    printf("Entrez un nombre entier : ");
    scanf("%d", &nombre);

    printf("Valeur en octal : %o\n", nombre);
    printf("Valeur en hexadecimal : %x\n", nombre);

    return 0;
