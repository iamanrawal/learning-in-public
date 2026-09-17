#include <stdio.h>
int main()
{
int a,b,c;
printf("Enter the sides of triangle:");

if (scanf("%d %d %d", &a , &b ,&c) !=3)
{
  printf("Please enter a valid input.");
  return 1;
}

else if (a+b>c && b+c>a && c+a>b )
{
 printf("Valid triangle sides.");
}

else 
{
  printf("Triangle sides are invalid");
}

return 0;
}













  