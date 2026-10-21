#include <stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
            printf("%d ", 2*i-1);

        printf("\n");
    }

    return 0;
}

/*
Output (n = 5):
1
3 3
5 5 5
7 7 7 7
9 9 9 9 9
*/