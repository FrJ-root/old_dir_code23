#include <stdio.h>
#include <stdbool.h>

bool estPremier(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int nombreDeLignes;

    printf("Veuillez entrer le nombre de lignes pour la pyramide : ");
    scanf("%d", &nombreDeLignes);

    int ligne = 1;
    int etoiles = 1;

    while (ligne <= nombreDeLignes) {
        if (estPremier(etoiles)) {
            for (int i = 1; i <= etoiles; i++) {
                printf("*");
            }
            printf("\n");
            ligne++;
        }
        etoiles++;
    }

    return 0;
}

