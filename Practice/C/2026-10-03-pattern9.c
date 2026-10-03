  #include <stdio.h>
int main()
{
  int m;
  printf("Enter no.:");
  scanf("%d",&m);
  for(int i=1;i<=m;i++)
  {
    int a=1;
    for (int j = 1; j <=m; j++)
    {
        printf("%d",a);
        a=a+2;
    }

    printf("\n");
  }
  return 0;
}
// Enter no.:4
// 1357
// 1357
// 1357
// 1357