#include <stdio.h>
int main()
{
  int a,b,temp;
  printf("Enter the two integers:");
  scanf("%d %d",&a,&b);
  temp=a;
  a=b;
  b=temp;

  printf("swapped: %d %d" , a,b);

  return 0;
}
