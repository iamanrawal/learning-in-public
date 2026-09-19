#include <stdio.h>
int main ()
{
  int a;
  printf("Enter the two numbers:");
  scanf("%d %d",&a,&b);

  printf( 
"Sum: %d\nDifference:%d\nProduct:%d\nQuotient:%d\nRemainder:%d\n"
, a+b , a-b , a*b , a/b , a%b
 );
  return 0;
}