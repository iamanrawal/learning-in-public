#include <stdio.h>
int main()
{
int x,y,z;
printf("Enter the 3 distinct numbers:\n");
scanf("%d %d %d", &x, &y, &z);
 
if (x>y && x>z)
{ 
 printf("the greatest no. is: %d", x);
}

else if ( y>x && y>z)
{
  printf("the greatest no. is: %d", y);
}

else
{
  printf("the greatest no. is: %d", z);
}

  return 0;
}