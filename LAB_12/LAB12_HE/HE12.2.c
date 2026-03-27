#include<stdio.h>
int sum_single(int n)
{
  int sum=0;
  while(n>9)
  {
    int temp=n;
    while(temp>0)
    {
      int a=temp%10;
      sum+=a;
      temp/=10;
    }
    n=sum;
    sum=0;
  }
  return n;
}
void main()
{
  int n;
  printf("Enter a Number :");
  scanf("%d",&n);
  int result=sum_single(n);
  printf("Sum of the digits of %d = %d",n,result);
}
