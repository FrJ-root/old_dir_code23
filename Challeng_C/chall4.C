#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b, c, d;
    double somme, moyen;

    printf("Type First Num : ");
    scanf("%lf", &a);
    printf("Type Second Num : ");
    scanf("%lf", &b);
    printf("Type Third Num : ");
    scanf("%lf", &c);
    printf("Type Fourth Num : ");
    scanf("%lf", &d);

    somme = a + b + c + d ;
    moyen = somme / 4,0 ;

    printf("La somme des Num : %lf\n", somme);
    printf("La moyen des Num : %lf\n", moyen);

    return 0;

}


