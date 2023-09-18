#include <stdio.h>

int main() {
    int nombre, inverse;

    // Demander à l'utilisateur de saisir un nombre à trois chiffres
    printf("Veuillez entrer un nombre entier à trois chiffres : ");
    scanf("%d", &nombre);

    // Vérifier si le nombre a effectivement trois chiffres
    if (nombre < 100 || nombre > 999) {
        printf("Le nombre saisi n'est pas un nombre à trois chiffres.\n");
    } else {
        // Calculer l'inverse en utilisant des opérations mathématiques
        int centaines = nombre / 100;
        int dizaines = (nombre % 100) / 10;
        int unites = nombre % 10;

        inverse = unites * 100 + dizaines * 10 + centaines;

        // Afficher l'inverse
        printf("L'inverse de %d est : %d\n", nombre, inverse);
    }

    return 0;
}

