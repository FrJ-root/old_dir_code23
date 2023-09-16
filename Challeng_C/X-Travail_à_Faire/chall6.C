#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double r , circonference ;
    const double Pi = 3.14159265359;

    printf("Entrer le rayon de cercle : ");
    scanf("%lf", &r);

    circonference = r * 2 * Pi ;

    printf("La circonference de r est : %lf", circonference);

    return 0;
}
