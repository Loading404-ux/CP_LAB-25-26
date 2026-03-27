#include<stdio.h>
void main()
{
  int n;
  int sum=1;
  printf("Enter a Number :");
  scanf("%d",&n);
  for(int i=n;i>=1;i--)
  {
  sum=sum*i;
  }
  printf("FACTORIAL %d",sum);
}
