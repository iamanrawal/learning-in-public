#include <stdio.h>

int main()
{
    int n, fact = 1;

    printf("Enter the number:");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial is not defined for negative numbers");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }

        printf("factorial=%d", fact);
    }

    return 0;
}