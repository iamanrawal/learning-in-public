#include <stdio.h>
#include <stdlib.h>
int main()
{
  int x;
  printf("Enter your number:");
  scanf("%d" , &x);

  printf("Last digit = %d" , abs(x) % 10);
  return 0;

}