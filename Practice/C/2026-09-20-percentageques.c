#include <stdio.h>
int main()
{
int a,b;
float c;
printf("Enter marks obtained in maths:");
scanf("%d",&a);
printf("Enter marks obtained in physics:");
scanf("%d",&b);

c=100.0*(a+b)/200;
float result = c;
printf("Percentage obtained is: %.2f.",result);

return 0;

}