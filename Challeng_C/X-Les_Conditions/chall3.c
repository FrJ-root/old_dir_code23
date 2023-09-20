#include <stdio.h>

int main()
{
int  a,b;
int  somme;
printf("Entrer a : ");scanf("%d", &a);
printf("Entrer b : ");scanf("%d", &b);
somme=a+b;
if(a==b){somme*=3;}
printf("  la somme ->> %d\n", somme);

    return 0;
}
