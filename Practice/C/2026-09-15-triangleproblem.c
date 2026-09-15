#include <stdio.h>
#include <math.h>
int main()
{
float x1,x2,y1,y2,x3,y3,AB,BC,CA;



printf("Enter first point (x1 y1): ");
scanf("%f %f", &x1, &y1);

printf("Enter second point (x2 y2): ");
scanf("%f %f", &x2, &y2);

printf("Enter third point (x3 y3): ");
scanf("%f %f", &x3, &y3);

if ((x2-x1)*(y3-y1) == (y2-y1)*(x3-x1))
{
 printf("Cannot form a triangle.\n");
 return 1;
}
else
{
  printf("Triangle can be formed.\n");
}

  AB = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
  BC = sqrt((x3-x2)*(x3-x2) + (y3-y2)*(y3-y2));
  CA = sqrt((x1-x3)*(x1-x3) + (y1-y3)*(y1-y3));

printf("side lengths are:\n");
printf("%f\n%f\n%f" , AB,BC,CA);
 
if (AB==BC && BC==CA)
{
  printf("TRIANGLE GIVEN IS AN EQUILATERAL TRIANGLE.");
}

else if (AB != BC && BC != CA && AB != CA)
{
  printf("TRIANGLE GIVEN IS A SCALENE TRIANGLE.");
}
else 
{
  printf("TRIANGLE GIVEN IS AN ISOSCELES TRIANGLE.");
}
 

if (AB >= BC && AB >= CA)
{
    if (AB == sqrt(BC*BC + CA*CA))
    {
        printf("TRIANGLE GIVEN IS RIGHT-ANGLED TRIANGLE");
    }

    else if (AB < sqrt(BC*BC + CA*CA))
    {
        printf("TRIANGLE GIVEN IS ACUTE TRIANGLE");
    }

    else
    {
        printf("TRIANGLE GIVEN IS OBTUSE TRIANGLE");
    }
}


else if (BC >= AB && BC >= CA)
{
    if (BC == sqrt(AB*AB + CA*CA))
    {
        printf("TRIANGLE GIVEN IS RIGHT-ANGLED TRIANGLE");
    }

    else if (BC < sqrt(AB*AB + CA*CA))
    {
        printf("TRIANGLE GIVEN IS ACUTE TRIANGLE");
    }

    else
    {
        printf("TRIANGLE GIVEN IS OBTUSE TRIANGLE");
    }
}  


else
{
    if (CA == sqrt(AB*AB + BC*BC))
    {
        printf("TRIANGLE GIVEN IS RIGHT-ANGLED TRIANGLE");
    }

    else if (CA < sqrt(AB*AB + BC*BC))
    {
        printf("TRIANGLE GIVEN IS ACUTE TRIANGLE");
    }

    else
    {
        printf("TRIANGLE GIVEN IS OBTUSE TRIANGLE");
    }
}

return 0;
}
/*
Question:

Write a C program that:

1. Checks whether the three points are collinear.
   - If yes → Cannot form a triangle.

2. If they form a triangle, calculate the three side lengths.

3. Determine the triangle type:
   - Equilateral
   - Isosceles
   - Scalene

4. Determine the angle type:
   - Right-angled
   - Acute
   - Obtuse

5. Calculate and display:
   - Perimeter
   - Area
*/