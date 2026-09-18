#include <stdio.h>

int main()

{

float a,b,h,area;

printf("Enter the two parallel sides:");

if (scanf("%f %f",&a,&b) != 2)

{

printf("Please enter a valid input.");

return 1;

}

printf("Enter the height:");

if (scanf("%f",&h) != 1)

{

printf("Please enter a valid input.");

return 1;

}

area=0.5*(a+b)*h;

printf("Area of trapezium = %.2f",area);

return 0;

}