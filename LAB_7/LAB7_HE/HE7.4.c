#include<stdio.h>
void main()
{
  float s=1.0;
  float sum=0.0;
  int n;
  printf("Enter a number: ");
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  sum=sum+(s/i);
  printf("Sum of the series up to %d numbers:%f",n,sum);
}
