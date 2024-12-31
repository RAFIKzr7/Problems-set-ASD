#include <stdio.h>
#include <stdlib.h>

int main()
{  //2.3 FACTORIAL OF A NUMBER USING A FOR LOOP
    int num,i,factorial;
    printf("enter number : ");
    scanf("%d",&num);

    factorial =1 ;
     for (i=1 ; i<= num ; i++)
     {
      factorial = factorial * i;
     }
    printf("the factorial of %d is %d",num,factorial );

    return 0;
}
