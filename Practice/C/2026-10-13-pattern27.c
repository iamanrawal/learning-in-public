#include <stdio.h>

int main()
{
    int n;

    printf("Enter no. of rows:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 1; j <= n; j++)
            {
                printf("%d ", j);
            }
        }
        else
        {
            for (int j = n; j >= 1; j--)
            {
                printf("%d ", j);
            }
        }

        printf("\n");
    }

    return 0;
}

/*
Output:

Enter no. of rows:5
1 2 3 4 5
5 4 3 2 1
1 2 3 4 5
5 4 3 2 1
1 2 3 4 5
*/