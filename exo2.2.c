#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 2.2 CHECK IF A NUMBER IS POSITIVE, NEGATIVE, OR ZERO
    int a ;
    printf("enter num : ");
    scanf( "%d", &a);
    if (a > 0)
    {
        printf(" %d is positive",a);
     }else if (a == 0 )
         {
        printf("%d it equals zero " ,a);
         }
     else
     {
        printf("%d is negative",a);
     }

    return 0;
}
