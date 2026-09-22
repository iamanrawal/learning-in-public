#include <stdio.h>

int main()
{
    float a, b, c, d;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &a);

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &b);

    d = 1.8 * a + 32;
    c = (b - 32) / 1.8;

    printf("Temperature in Fahrenheit: %.2f\n", d);
    printf("Temperature in Celsius: %.2f\n", c);

    return 0;
}

// Question:
// Write a C program to convert a temperature from Celsius to Fahrenheit
// and another temperature from Fahrenheit to Celsius.