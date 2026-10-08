#include <stdio.h>
int main()
{
 int n ,count, ld,p=1;
 printf("Enter the number:");
 scanf("%d",&n);

 ld=n%10;
 int temp=n;
 while (temp>=10)

 {
 temp=temp/10;//GIVES FIRST DIGIT
 p=p*10;//TELLS PLACE VALUE OF THE FIRST DIGIT
 }

 n=n-(temp*p)-ld;//REMOVES FIRST AND LAST DIGIT
 n=n+(ld*p)+temp;//ADDS FIRST AND LAST DIGITS WHICH ARE SWAPPED TOO
 
 printf("swapped=%d",n);
 return 0;
 }                                                                                                                                                                  