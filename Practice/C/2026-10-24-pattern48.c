#include <stdio.h>

int main()
{
    int n;

    printf("Enter no. of rows:");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n-i+1; j++)
        {
            printf("%d", i);
        }

        printf("\n");
    }

    return 0;
}

/*
Output:

Enter no. of rows:5
5
44
333
2222
11111
*/