#include <stdio.h>
int main()
{
  float mOm,mOp,total;

printf("Enter marks obatined in MATHS:");
scanf("%f", &mOm);
printf("Enter marks obatined in PHYSICS:");
scanf("%f", &mOp);

total=((0.3)*mOm+(0.7)*mOp);

printf("Total marks are: %f", total);

  return 0;
}