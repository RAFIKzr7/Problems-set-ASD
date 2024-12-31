#include <stdio.h>
#include <stdlib.h>

int main()
{
    //program to swap two numbers without using a temporary variable
   int a ,b ;
    a = 6 ;
    b =4 ;
    a =a+ b ;
    b = a - b  ;
    a = a - b ;

    printf("%d and %d",a,b);


    return 0;
}
