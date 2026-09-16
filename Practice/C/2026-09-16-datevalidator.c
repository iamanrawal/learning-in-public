#include <stdio.h>
int main()
{
int day,month,year;
printf("Enter day month year:\n");
scanf("%d %d %d",&day,&month,&year);

if (day<=0 || month<=0 || month>12 || year<=0)
{
printf("Invalid date");
}
else if (month==2)
{
if (year%400==0 || (year%4==0 && year%100!=0))
{
if (day<=29)
{
printf("Valid date");
}
else
{
printf("Invalid date");
}
}
else if (day<=28)
{
printf("Valid date");
}
else
{
printf("Invalid date");
}
}
else if (month==4 || month==6 || month==9 || month==11)
{
if (day<=30)
{
printf("Valid date");
}
else
{
printf("Invalid date");
}
}
else if (day<=31)
{
printf("Valid date");
}
else
{
printf("Invalid date");
}
return 0;
}

/*
Question:

Write a C program to check whether a given date is valid.

Take day, month and year as input.

The program should check:

1. Month should be from 1 to 12.
2. Days should match the particular month.
3. February should have 28 days normally and 29 days in a leap year.
4. Check whether the given year is a leap year.
5. Display "Valid date" or "Invalid date".

Examples:

29 2 2024 -> Valid date
29 2 2025 -> Invalid date
31 4 2025 -> Invalid date
31 12 2025 -> Valid date
*/