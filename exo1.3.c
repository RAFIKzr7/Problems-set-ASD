#include <stdio.h>

int main ()
// program to find the area of a rectangle using its length and breadth.
{
 int length , breadth  , area ;

  printf ("enter the size of the length :  ");
  scanf ("%d", &length);
  printf ("enter the size of the breadth :  ");
  scanf ("%d", &breadth);
  area = length * breadth ;
  printf (" the area of the rectangle is %d " , area);
}
