#include <stdio.h>
int main() {

// 2.4Write a program to print the first n natural numbers using a while loop

int n, i = 1;
printf("Enter a number: ");
scanf("%d", &n);
while (i <= n) {
printf("%d ", i);
i++;
}
printf("\n");
return 0;
}
