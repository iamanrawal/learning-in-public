#include <stdio.h>
int main()
{
float r,c, π=3.14,x,area;

printf("Enter radius of circle:\n");
scanf("%f",&r);

x=2*π*r;

area=π*r*r;

printf("AREA: %f \n Circumference:%f", area , x);
return 0;
}