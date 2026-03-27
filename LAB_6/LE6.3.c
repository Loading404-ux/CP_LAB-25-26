#include<stdio.h>
void main()
{
  int n;
  int sum=0;
  printf("Enter a number: ");
  scanf("%d",&n);
  int temp=n;
  while(n!=0)
  {
    int a=n%10;
    sum+=a;
    n/=10;
  }
  printf("Sum of the digits of %d = %d\n",temp,sum);
}
