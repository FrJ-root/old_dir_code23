#include <stdio.h>

int main() {
    int nombre;
    printf("Veuillez entrer un nombre : ");
    scanf("%d", &nombre);
    printf("Table de multiplication pour %d :\n", nombre);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", nombre, i, nombre * i);
    }

    return 0;
}
