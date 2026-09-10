#include <stdio.h>
int main()
{
  int x;

  printf("Enter your number:");
  scanf("%d" , &x);

  printf("Without Last digit = %d" , x / 10);
  return 0;

}