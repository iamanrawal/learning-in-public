#include <stdio.h>
int main()
{

int a,b,c,d,e,f,y,x;
printf("Enter\n name, roll number, age, and marks in three subjects: ");
scanf("%d %d %d %d %d %d", a,b,c,d,e,f);
y=(d+f+e)/3;
x=(d+f+e);
printf("name:%d\nroll number:%d\n age:%d\n total marks: %d\n average marks:%d\n", a,b,c,x,y)
return 0;
}
