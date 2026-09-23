#include <stdio.h>

int main()

{

float a,b,c,d;

printf("Enter a,b,c:");
scanf("%f%f%f",&a,&b,&c);

d=b*b-4*a*c;

printf("Discriminant = %.2f",d);

return 0;

}

// Question:
// Find the discriminant of a quadratic equation ax² + bx + c = 0.