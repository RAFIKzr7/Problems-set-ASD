#include <stdio.h>
#include <stdlib.h>

int main()
{

    //3.4 REVERSE AN ARRAY
    int i , temp ,arr[5];
    printf("enter 5 number : ");
    for (i=0 ;i <5 ; i++)
     {
         scanf("%d",&arr[i]);
     }
     for (i=0 ; i <5/2 ; i++)
     {
         temp = arr [i];
         arr [i]=arr[4-i];
         arr [4-i] = temp;
     }
     printf("Reversed array: ");
        for ( i = 0; i < 5; i++)
            {
           printf("%d ", arr[i]);
            }
        printf("\n");

    return 0;
}
