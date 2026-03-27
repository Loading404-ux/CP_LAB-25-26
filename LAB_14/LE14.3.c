#include<stdio.h>

int sum_of_digit(int n)
{
  if(n==0)
  return 0;
  else
  {
  int a=n%10;
  n/=10;
  return a+sum_of_digit(n);
  }
}
void main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d",&n);
  int sum=sum_of_digit(n);
  printf("Sum of the digits of %d = %d\n",n,sum);
}
