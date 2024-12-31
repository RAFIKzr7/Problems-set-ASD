#include <stdio.h>
#include <stdlib.h>

int main()
{
    //  01 program to find the largest of three numbers using if-else
 int a, b , c;
    printf("enter the three number : ");
    scanf("%d %d %d",&a,&b,&c );
if (a > b && a > c)
  printf("%d is the largest\n", a);
else if (b > c)
  printf("%d is the largest\n", b);
else
  printf("%d is the largest\n", c);

 return 0;
}
