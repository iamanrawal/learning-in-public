#include <stdio.h>

int main()
{
    int n;

    printf("Enter no. of rows:");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n-i; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

/*
Output:

Enter no. of rows:5
12345
 1234
  123
   12
    1
*/