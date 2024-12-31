#include <stdio.h>
#include <stdlib.h>

int main()
{
     //program to check if a given number is even or odd
    int num ;
    printf("enter number :  ");
    scanf( "%d", &num);
    if (num % 2  == 0)
    {
        printf(" the number %d is even number ", num);

    }
    else {
        printf(" the number %d is odd number ", num);
    }
    return 0;
}
