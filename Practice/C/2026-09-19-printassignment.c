#include <stdio.h>

int main()

{

char name[50];

int b,c,d,e,f,x;

float y;

printf("Enter name, roll number, age, and marks in three subjects: ");

if (scanf("%s %d %d %d %d %d", name, &b, &c, &d, &e, &f) != 6)

{

printf("Please enter a valid input.");

return 1;

}

x=d+e+f;

y=x/3.0;

printf("Name:%s\nRoll number:%d\nAge:%d\nTotal marks:%d\nAverage marks:%.2f", name,b,c,x,y);

return 0;

}