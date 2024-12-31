#include <stdio.h>
#include <stdlib.h>

int main()
{
    //3.2 FIND THE LARGEST AND SMALLEST ELEMENTS IN AN ARRAY
    int  arr[4] , largest , smallest ;
    int i;

      printf("Enter 4 integers: ");
    for ( i = 0; i < 4; i++)
        {
         scanf("%d", &arr[i]);
        }
      largest = smallest = arr [0];
      for (i=1 ; i<4 ; i++)
      {
       if (largest< arr[i])
       {
           largest = arr [i];
       }
       if (smallest=arr [i])
       {
           smallest =arr [i];
       }
      }
      printf("the largest number is %d and the smallest is %d " , largest, smallest);

    return 0;
}
