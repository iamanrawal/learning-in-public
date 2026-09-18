#include <stdio.h>

int main()

{

float a,area;

printf("Enter the side of square:");

if (scanf("%f",&a) != 1)

{

printf("Please enter a valid input.");

return 1;

}

area=a*a;

printf("Area of square = %.2f",area);

return 0;

}