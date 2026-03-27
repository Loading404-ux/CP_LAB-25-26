#include<stdio.h>
void main()
{
  int s=0;
  int n;
  printf("Enter a Number:");
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++)
    {
      s=s+j;
    }
  }
  printf("Sum of the series:%d",s);
  
}
