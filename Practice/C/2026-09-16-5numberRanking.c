#include <stdio.h>
int main()
{
int a,b,c,d,e,largest,smallest,second,third,fourth;
printf("Enter 5 distinct numbers:\n");
scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

if (a>b && a>c && a>d && a>e)
{
largest=a;
}
else if (b>a && b>c && b>d && b>e)
{
largest=b;
}
else if (c>a && c>b && c>d && c>e)
{
largest=c;
}
else if (d>a && d>b && d>c && d>e)
{
largest=d;
}
else
{
largest=e;
}

if (a!=largest)
{
second=a;
}
else
{
second=b;
}

if (b<largest && b>second)
{
second=b;
}
if (c<largest && c>second)
{
second=c;
}
if (d<largest && d>second)
{
second=d;
}
if (e<largest && e>second)
{
second=e;
}

if (a!=largest && a!=second)
{
third=a;
}
else if (b!=largest && b!=second)
{
third=b;
}
else
{
third=c;
}

if (a<second && a>third)
{
third=a;
}
if (b<second && b>third)
{
third=b;
}
if (c<second && c>third)
{
third=c;
}
if (d<second && d>third)
{
third=d;
}
if (e<second && e>third)
{
third=e;
}

if (a!=largest && a!=second && a!=third)
{
fourth=a;
}
else if (b!=largest && b!=second && b!=third)
{
fourth=b;
}
else if (c!=largest && c!=second && c!=third)
{
fourth=c;
}
else if (d!=largest && d!=second && d!=third)
{
fourth=d;
}
else
{
fourth=e;
}

if (a<third && a>fourth)
{
fourth=a;
}
if (b<third && b>fourth)
{
fourth=b;
}
if (c<third && c>fourth)
{
fourth=c;
}
if (d<third && d>fourth)
{
fourth=d;
}
if (e<third && e>fourth)
{
fourth=e;
}

if (a!=largest && a!=second && a!=third && a!=fourth)
{
smallest=a;
}
else if (b!=largest && b!=second && b!=third && b!=fourth)
{
smallest=b;
}
else if (c!=largest && c!=second && c!=third && c!=fourth)
{
smallest=c;
}
else if (d!=largest && d!=second && d!=third && d!=fourth)
{
smallest=d;
}
else
{
smallest=e;
}

printf("1st-%d\n2nd-%d\n3rd-%d\n4th-%d\n5th-%d",largest,second,third,fourth,smallest);
return 0;
}

/*
Question:

Write a C program to take 5 distinct integers as input and arrange
them in descending order without using arrays or sorting functions.

The program should:

1. Find the largest number.
2. Find the second largest number.
3. Find the third largest number.
4. Find the fourth largest number.
5. Find the smallest number.
6. Display all 5 numbers in descending order.

Use if, else if, else and logical operators.
*/