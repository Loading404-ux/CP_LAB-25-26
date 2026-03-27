#include<stdio.h>
void main()
{
  int n=5;
  for(int i=1;i<=5;i++)
  {
    for(int j=5;j>=n;j--)
    {
      printf("%d ",j);
      n--;
    }
    printf("\n");
  }
}
