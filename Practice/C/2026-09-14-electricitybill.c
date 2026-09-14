#include <stdio.h>
int main()
{
int a,b,c,d,e;
printf("Enter number of units consumed:\n");

if (scanf("%d",&a) !=1)
{
  printf("please enter a valid input.\n");
}

  b=5*a;
c=7*a-700+500;
d=10*a-2000+500+700;
e=15*a-4500+500+700+1000;

if (a<=0)
{
  printf("invalid input");
}

else if (a <= 100)
{
  printf("Your bill is:\n ₹%d",b);
}

else if
 (a >= 101 && a <= 200)
{
  printf("Your bill is:\n ₹%d",c);
}
else if (a >= 201 && a <= 300)
{
  printf("Your bill is:\n ₹%d",d);
}
else if (a>300)
{
  printf("Your bill is:\n ₹%d",e);
}
return 0;
}
 // Electricity Bill Calculator
    // First 100 units → ₹5/unit
    // Next 100 units → ₹7/unit
    // Next 100 units → ₹10/unit
    // Above 300 units → ₹15/unit
    // Calculate the bill using slab-wise calculation.