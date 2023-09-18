#include <stdio.h>
int main(){
    int number;
    printf("Veuiller Entrer le number : ");
    scanf("%d", &number);
    if(number % 2 == 0) {
         printf("%d est pair.\n", number); 
    
     } else {
    printf("%d est impair.\n", number);
    return 0;
    }
}

