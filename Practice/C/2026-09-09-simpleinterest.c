#include <stdio.h>

int main()
{
    float p, r, t, simpleInterest;

    printf("Enter principal amount: ");
    scanf("%f", &p);

    printf("Enter rate of interest: ");
    scanf("%f", &r);

    printf("Enter time: ");
    scanf("%f", &t);

    simpleInterest = (p * r * t) / 100;

    printf("Simple Interest = %f", simpleInterest);

    return 0;
}