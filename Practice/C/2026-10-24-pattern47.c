#include <stdio.h>

int main()
{
    int n;

    printf("Enter no. of rows:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c", 'A' + i - 1);
        }

        printf("\n");
    }

    return 0;
}

/*
Output:

Enter no. of rows:5
A
BB
CCC
DDDD
EEEEE
*/