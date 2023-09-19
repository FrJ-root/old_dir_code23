#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Tbl[10] = {1,2,3,4,5,6,7,8,9,10};
    int i;

    printf("element de 1 est : %d\n", Tbl[0]);

    for(i=0; i<10; i++)
    {
        /*if(i==9){
                   printf("%d ",Tbl[i]);
        } else {
                   printf("%d, ",Tbl[i]);
        }*/


        if(i==9)
        {
            printf("%d ", Tbl[i]);
            break;
        }
        printf("%d, ", Tbl[i]);
    }

    return 0;

}


