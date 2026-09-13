#include <stdio.h>
int main()
{
  int x,y;
  printf("Enter the numbers:\n");
  scanf("%d %d", &x,&y);
if (x==y)
{
  printf("both are equal");
}



  else if
  (
    x>y
  )
{
  printf("the smaller no. is:\n %d", y);
}

else
{
  printf("the smaller no. is:\n %d",x);
}

  return 0;
}