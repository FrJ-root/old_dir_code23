#include <stdio.h>

int main()
{
    int Tbl[10];
    int i;

    printf("Entrer 10 nombres : \n");

    for (i = 0; i < 10; i++)
    {
        printf("Nombre %d : ", i + 1);
        scanf("%d", &Tbl[i]);
    }

    int plus_petit = Tbl[0];
    int plus_grand = Tbl[0];

    for (i = 1; i < 10; i++)
    {
        if (Tbl[i] < plus_petit)
        {
            plus_petit = Tbl[i];
        }
        if (Tbl[i] > plus_grand)
        {
            plus_grand = Tbl[i];
        }
    }

    printf("Tableau des nombres : ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", Tbl[i]);
    }
    printf("\n");

    printf("Le plus petit : %d\n", plus_petit);
    printf("Le plus grand : %d\n", plus_grand);

    return 0;
}

