#include <stdio.h>

int main()

{

    int a;

    printf("Enter no. of rows:");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)

    {

        int b = 1;

        for (int j = 1; j <= i; j++)

        {

            int d = b + 64;
            char ch = (char)d;

            printf("%c", ch);

            b++;

        }

        printf("\n");

    }

    return 0;
}

/*
Output:

Enter no. of rows: 4

A
AB
ABC
ABCD

*/