#include <stdio.h>

int main() {
    int a, b;

    printf("Type the value of a : ");
    scanf("%d", &a);

    printf("Type the value of b : ");
    scanf("%d", &b);

    printf("a - b = %d\n", a - b);
    printf("a + b = %d\n", a + b);
    printf("a * b = %d\n", a * b);

    if (b != 0) {
        printf("a / b = %.2f\n", (float)a / b);
        printf("a %% b = %d\n", a % b);
    } else {
        printf("Wrong Math.\n");
    }

    return 0;
}


