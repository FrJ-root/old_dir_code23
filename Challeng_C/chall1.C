#include <stdio.h>
#include <stdlib.h>

int main()
{
    char First_name[50], Family_name[50], sexe[50];
    int age;
    char num[50];

    printf("First_name: ");
    scanf("%s", First_name);
    printf("Family_name: ");
    scanf("%s", Family_name);
    printf("sexe: ");
    scanf("%s", sexe);
    printf("age: ");
    scanf("%d", &age);
    printf("num: ");
    scanf("%s\n", num);

    printf("First_name: %s\n", First_name);
    printf("Family_name: %s\n", Family_name);
    printf("sexe: %s\n", sexe);
    printf("age: %d\n", age);
    printf("num: %s\n", num);

     return 0;

}


