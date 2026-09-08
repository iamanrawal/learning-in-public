#include <stdio.h>
int main()
{
int a,b;
printf("Enter the two integers:");
scanf("%d %d",&a,&b);

a=a+b;
b=a-b;
a=a-b;

printf("swapped: %d %d" , a,b );

  return 0;
}