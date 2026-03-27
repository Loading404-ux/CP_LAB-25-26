#include<stdio.h>
#include<math.h>
void main()
{
  int n;
  int sum=0;
  printf("Enter a number: ");
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
  sum=sum+(pow(i,i));
  }
  printf("Sum of the series up to %d numbers: %d",n,sum);
}
