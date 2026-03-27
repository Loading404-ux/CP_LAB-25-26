#include<stdio.h>
int sum_digit(int n)
{
  int sum=0;
  while(n>0)
  {
    int a=n%10;
    sum+=a;
    n/=10;
  }
  return sum;
}
void main()
{
 int n;
 printf("Enter a number :");
 scanf("%d",&n);
 int result=sum_digit(n);
 printf("Sum of the digits of %d = %d",n,result);
 
}
