#include <stdio.h>

int main()
{
    int current_year, joining_year, years;

    printf("Enter current year: ");
    scanf("%d", &current_year);

    printf("Enter joining year: ");
    scanf("%d", &joining_year);

    years = current_year - joining_year;

    if (years > 3)
    {
        printf("Bonus = Rs. 2500");
    }

    return 0;
}