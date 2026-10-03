  #include <stdio.h>
int main()
{
  int m;
  printf("Enter no.:");
  scanf("%d",&m);

  for(int i=1;i<=m;i++)
  {
    for (int j = 1; j <=i; j++)
    {
        printf("%d",j);
    }
    printf("\n");
  }
  return 0;
}
// Enter no.:7
// 1
// 12
// 123
// 1234
// 12345
// 123456
// 1234567