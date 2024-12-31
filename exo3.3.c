#include <stdio.h>
#include <stdlib.h>

int main()
{   int i , arr[num] , sum ;
    float average,num ;
    printf("enter the number of element of the array : ");
    scanf("%d",&num);
    printf("enter 5 number : ");
    for (i=0 ;i <num ; i++)
     {
         scanf("%d",&arr[i]);
     }
     sum = 0;

      for (i=0 ;i <num ; i++)
      {
          sum = sum + arr[i];
      }

      printf("the sum is %d " , sum);
      average = (sum / num );
      printf( "the average of the element is %f  \n", average);

    return 0;
}
