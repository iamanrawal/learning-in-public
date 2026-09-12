#include <stdio.h>
int main()
{
  float c,f ;
  printf("Enter temperature in celsius:");
  if (scanf("%f",&c) !=1 )
  {
    printf("Please enter a valid input.");
    return 1;
  }
  
  f = c*1.8+32;
  printf("Temperature in fahrenheit:\n %.2f",f);
  return 0;
}