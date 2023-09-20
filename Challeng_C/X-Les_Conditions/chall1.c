#include <stdio.h>

int main() {
    int a;

    printf("Entrez un nombre : ");
    scanf("%d", &a);

    switch(a % 2) {
        case 0:
            printf("Le nombre est pair.\n");
            break;
        case 1:
        case -1:
            printf("Le nombre est impair.\n");
            break;
        default:
            printf("Le nombre est nul.\n");
            break;
    }

    return 0;
}

