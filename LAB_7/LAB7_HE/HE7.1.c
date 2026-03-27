#include<stdio.h>
void main()
{
  int n;
  int sum=0;
  printf("Enter a a number:");
  scanf("%d",&n);
  for(int i=1;i<n;i++)
  {
    if(n%i==0)
    {
     sum+=i;
    }
  }
  if(sum==n)
  printf("%d is a Perfect Number",n);
  else
  printf("%d is a not Perfect Number",n);
}
