#include <stdio.h>
#include <stdlib.h>

int main()
{
    //3.5 MERGE TWO ARRAYS INTO A SINGLE ARRAY
   int i ,arr [3],tab[3], rk[6];

    printf("enter 3 number : ");
    for (i=0 ;i <3 ; i++)
     {
         scanf("%d",&arr[i]);
     }

     printf("enter 3 number : ");
    for (i=0 ;i <3 ; i++)
     {
         scanf("%d",&tab[i]);
     }
    printf( "the element of rk is  ");
     for(i=0 ; i<6/2 ; i++ )
     {
         rk [i]= arr [i];
         rk [3+i]= tab[i];
     }
     for(i=0 ; i<6 ; i++ )
     {
         printf("%d  ",rk [i]);
     }

    return 0;
}
