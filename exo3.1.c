#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 3.1 STORE 5 INTEGERS IN AN ARRAY AND PRINT THEM
    int arr [5];
    int i;
    printf("enter 5  integer number :  ");
    for ( i = 0 ; i < 5 ; i++ )
    {
         scanf("%d", &arr[i]) ;
    }

     printf("array elements :  ");
     for (i=0 ; i <5 ; i++)
     {
         printf("%d  ",arr[i]);
     }

    return 0;
}
