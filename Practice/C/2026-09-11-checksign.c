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

if (x>0)

{
  printf("positive");
}

else if (x==0)
{
  printf("neutral");
}

else
{
  printf("negative");
}
  return 0;
}