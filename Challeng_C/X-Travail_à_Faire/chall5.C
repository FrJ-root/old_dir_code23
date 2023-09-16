#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2;
    double distance;

    printf("coordonn�es du premier point (x1 y1) : ");
    scanf("%lf %lf", &x1, &y1);

    printf("coordonn�es du deuxi�me point (x2 y2) : ");
    scanf("%lf %lf", &x2, &y2);

    distance = sqrt( pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("La distance entre les points est : %.2lf\n", x1, y1, x2, y2, distance);

    return 0;
}

