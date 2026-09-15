#include <stdio.h>
int main()
{
float a,b,c,d,e,f,g,h,i;
printf("Enter number of units consumed:\n");
printf("Enter your age:\n");
if (scanf("%f %f",&a,&f) !=2)
{
  printf("please enter a valid input.\n");
  return 1;
}

b=5*a;
c=7*a-700+500;
d=10*a-2000+500+700;
e=15*a-4500+500+700+1000;

if (a<=0 || f<=0)
{
  printf("invalid input");
}

else if (a <= 100 && f<18 )
{
  printf("Original bill=₹%.2f\n", b);
  printf("Discount amount=₹%.2f\n", 0.0);
  printf("Final bill=₹%.2f\n", b);
}

else if
 (a >= 101 && a <= 200 && f<18)
{
  printf("Original bill=₹%.2f\n", c);
  printf("Discount amount=₹%.2f\n", 0.0);
  printf("Final bill=₹%.2f\n", c);
}
else if (a >= 201 && a <= 300 && f<18)
{
  printf("Original bill=₹%.2f\n", d);
  printf("Discount amount=₹%.2f\n", 0.0);
  printf("Final bill=₹%.2f\n", d);
}
else if (a>300 && f<18)
{
  printf("Original bill=₹%.2f\n", e);
  printf("Discount amount=₹%.2f\n", 0.0);
  printf("Final bill=₹%.2f\n", e);
}




else if (a <= 100 &&  f>=18 && f<60)
{
  printf("Original bill=₹%.2f\n", b);
  printf("Discount amount=₹%.2f\n", 0.05*b);
  printf("Final bill=₹%.2f\n", b-0.05*b);
}

else if
 (a >= 101 && a <= 200 &&  f>=18 && f<60)
{
  printf("Original bill=₹%.2f\n", c);
  printf("Discount amount=₹%.2f\n", 0.05*c);
  printf("Final bill=₹%.2f\n", c-0.05*c);
}
else if (a >= 201 && a <= 300 &&  f>=18 && f<60)
{
  printf("Original bill=₹%.2f\n", d);
  printf("Discount amount=₹%.2f\n", 0.05*d);
  printf("Final bill=₹%.2f\n", d-0.05*d);
}
else if (a>300 && f>=18 && f<60)
{
  printf("Original bill=₹%.2f\n", e);
  printf("Discount amount=₹%.2f\n", 0.05*e);
  printf("Final bill=₹%.2f\n", e-0.05*e);
}



else if (a <= 100 && f>=60)
{
  printf("Original bill=₹%.2f\n", b);
  printf("Discount amount=₹%.2f\n", 0.1*b);
  printf("Final bill=₹%.2f\n", b-0.1*b);
}

else if
 (a >= 101 && a <= 200 && f>=60)
{
  printf("Original bill=₹%.2f\n", c);
  printf("Discount amount=₹%.2f\n", 0.1*c);
  printf("Final bill=₹%.2f\n", c-0.1*c);
}
else if (a >= 201 && a <= 300 && f>=60)
{
  printf("Original bill=₹%.2f\n", d);
  printf("Discount amount=₹%.2f\n", 0.1*d);
  printf("Final bill=₹%.2f\n", d-0.1*d);
}
else if (a>300 &&f>=60)
{
  printf("Original bill=₹%.2f\n", e);
  printf("Discount amount=₹%.2f\n", 0.1*e);
  printf("Final bill=₹%.2f\n", e-0.1*e);
}

return 0;
}
/*
Question:

Write a C program to calculate an electricity bill based on the number of units consumed
and the customer's age.

1. Take the number of units consumed and the customer's age as input.

2. If the units consumed or age is less than or equal to 0, display "invalid input".

3. Calculate the electricity bill according to the following rates:
   - Up to 100 units → ₹5 per unit
   - 101 to 200 units → ₹7 per unit
   - 201 to 300 units → ₹10 per unit
   - Above 300 units → ₹15 per unit

4. Apply the following age-based discounts:
   - Below 18 years → No discount
   - 18 to below 60 years → 5% discount
   - 60 years and above → 10% discount

5. Display the original bill, discount amount, and final bill.
*/
