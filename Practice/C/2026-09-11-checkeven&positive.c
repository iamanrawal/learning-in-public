#include <stdio.h>
int main()
{
int x;
printf("Enter the number:");
if (scanf("%d",&x) != 1)
{
printf("please enter a valid input.\n");
return 1;
}

if (x>0 && x%2==0)
{
printf("ok");
}
else
{
  printf("try next time");
}
  return 0;
}

