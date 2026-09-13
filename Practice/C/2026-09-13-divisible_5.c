#include <stdio.h>
int main()
{

int x;
printf("Enter the number:");

if (scanf("%d",&x) !=1)
{
printf("enter a valid input.");
}

else if ((x%5==0))
{
 printf("Divisible");
}

else

printf("Not divisible");

return 0;

}

