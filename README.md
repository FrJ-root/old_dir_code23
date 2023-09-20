"L'objectif de cette documentation est de vous aider à créer un résumé pour chaque chapitre du langage C, mais veuillez noter qu'elle ne doit pas être utilisée comme votre seule source d'apprentissage."

Introduction
Le langage C est un langage de programmation impératif populaire et puissant. Il a été développé au début des années 1970 par Dennis Ritchie à Bell Labs. Le C est connu pour sa performance, sa portabilité et sa flexibilité, ce qui en fait un choix privilégié pour le développement système, les logiciels embarqués et bien d'autres domaines. Ce guide se concentre sur les bases du langage C pour vous aider à démarrer.

Structure d'un Programme C
Un programme C est composé de fonctions. La fonction principale s'appelle main() et constitue le point d'entrée du programme.

#include <stdio.h>  // Inclut la bibliothèque standard d'E/S

int main() {
    // Instructions du programme ici

    return 0;  // Termine le programme avec succès
}

Variables et Types de Données
En C, vous devez déclarer les variables avant de les utiliser. Les types de données de base comprennent :

int : pour les entiers.
float : pour les nombres à virgule flottante.
char : pour les caractères.
double : pour les nombres à virgule flottante double précision.
void : pour représenter l'absence de type.
etc..
Opérations Mathématiques
Le C prend en charge les opérations mathématiques de base :
- Addition.
- Soustraction
- Multiplication
- Division
etc..

Structures de Contrôle
Le C propose des structures de contrôle pour exécuter des instructions conditionnelles et répétitives :

Structure de Contrôle If
if (condition) {
    // Code à exécuter si la condition est vraie
} else {
    // Code à exécuter si la condition est fausse
}
Boucle While
while (condition) {
    // Code à répéter tant que la condition est vraie
}


Boucle For
for (initialisation; condition; mise_à_jour) {
    // Code à répéter tant que la condition est vraie
}
Fonctions
Les fonctions en C sont des blocs de code réutilisables. Voici comment déclarer et définir une fonction :

// Déclaration de fonction
int addition(int a, int b);

// Définition de fonction
int addition(int a, int b) {
    return a + b;
}

Entrée/Sortie
Pour lire l'entrée depuis l'utilisateur, vous pouvez utiliser scanf(), et pour afficher du texte, utilisez printf() :

#include <stdio.h>

int main() {
    int nombre;
    printf("Entrez un nombre : ");
    scanf("%d", &nombre);
    printf("Vous avez entré : %d\n", nombre);
    return 0;
}

Tableaux
Les tableaux sont des collections de données du même type. Voici comment déclarer et utiliser un tableau en C :

int tableau[5]; // Déclare un tableau d'entiers de taille 5

// Initialisation d'un tableau
int tableau2[] = {1, 2, 3, 4, 5};

// Accès aux éléments d'un tableau
int premierElement = tableau[0]; // Accède au premier élément (indice 0)

Chaînes de Caractères
Les chaînes de caractères en C sont des tableaux de caractères terminés par un caractère nul ('\0'). Voici comment déclarer et utiliser des chaînes de caractères :

char nom[] = "John"; // Déclare et initialise une chaîne de caractères
printf("Bonjour, %s\n", nom); // Affiche "Bonjour, John"

Pointeurs

Les pointeurs sont des variables qui stockent des adresses mémoire. Ils sont largement utilisés en C pour gérer la mémoire et accéder aux données. Voici un exemple de pointeur :

int nombre = 42;
int *pointeur = &nombre; // Déclare un pointeur vers un entier et l'initialise avec l'adresse de "nombre"
printf("Valeur de nombre : %d\n", *pointeur); // Affiche la valeur de "nombre" en utilisant le pointeur

Structures
Les structures permettent de regrouper des données de types différents sous une seule entité. Voici comment déclarer et utiliser une structure :

struct Personne {
    char nom[20];
    int age;
};

// Déclaration et initialisation d'une structure
struct Personne personne1 = {"Alice", 30};

// Accès aux membres de la structure
printf("%s a %d ans\n", personne1.nom, personne1.age);

Allocation Dynamique de Mémoire
En C, vous pouvez allouer de la mémoire dynamiquement à l'aide de malloc() et la libérer avec free(). Cela est utile pour gérer la mémoire de manière flexible :

int *tableauDynamique = (int *)malloc(5 * sizeof(int)); // Alloue de la mémoire pour un tableau d'entiers
// Utilise le tableau ici

free(tableauDynamique); // Libère la mémoire lorsque vous avez terminé

Fichiers
Vous pouvez lire et écrire des fichiers en C à l'aide des fonctions fopen(), fclose(), fprintf(), et fscanf() :

#include <stdio.h>

FILE *fichier = fopen("mon_fichier.txt", "w"); // Ouvre un fichier en mode écriture

if (fichier != NULL) {
    fprintf(fichier, "Bonjour, monde !");
    fclose(fichier); // Ferme le fichier
}
