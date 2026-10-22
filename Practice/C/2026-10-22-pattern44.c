#include <stdio.h>

int main()
{
    int n;

    printf("Enter no. of rows:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j >= 1; j--)
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
1
21
321
4321
54321
*/