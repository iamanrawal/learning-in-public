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

if (x%2==0)

{

printf("positive even number");

}

else

{

printf("positive odd number");

}

}

else

{

printf("not a positive number");

}

return 0;

}