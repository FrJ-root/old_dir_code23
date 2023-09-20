#include <stdio.h>

int main()
{

    float tem_fahrenheit, tem_celsius;
    char sensation[20];
    printf("temperature en Fahrenheit : ");
    scanf("%f", &tem_fahrenheit);
    tem_celsius = (tem_fahrenheit - 32) / 1.8;


    if(tem_celsius <= 0)
    {
        printf("tres froid");
    }

    else if(0< tem_celsius <= 10)
    {
        printf("froid");
    }
    else if(10< tem_celsius <= 30)
    {
        printf("chaud");
    }

    else
    {
        printf("tres chaud\n");
    }


printf("%.1f degres Fahrenheit >> %.2f degres Celsius >> %s.\n", tem_fahrenheit, tem_celsius, sensation);

return 0;
}
