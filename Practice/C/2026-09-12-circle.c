#include <stdio.h>
int main()
{
  float r,pie=3.14,circumference ;
  printf("Enter radius:");
  if (scanf("%f",&r) != 1 )
  {
   printf("Enter a valid input\n");
   return 1;
  }
  
circumference= 2*pie*r;

printf("Circumference of circle is:\n %.2f", circumference);
 return 0;
}