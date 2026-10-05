#include <stdio.h>

int main ()

{

 int n;

 printf("enter number:");

 scanf("%d",&n);

 int a = 1;

 for (int i = 1; i <= n; i++)

 {

  for (int j = 1; j <= i; j++)

  {

     printf("%c",(char)(64+a));

     a++;

  }

  printf("\n");

 }

 return 0;

}

/*
Output:

enter number: 5

A
BC
DEF
GHIJ
KLMNO
*/