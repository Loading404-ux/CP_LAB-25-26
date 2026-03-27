#include<stdio.h>
int fibo(int n)
{
  int a=0,b=1;
  int sum;
  for(int i=3;i<=n;i++)
  {
    sum=a+b;
    a=b;
    b=sum;
  }
  if(n==1)
  return 0;
  else
  if(n==2)
  return 1;
  else
  return b;
}
void main()
{
  int n;
  printf("Enter the number :");
  scanf("%d",&n);
  int term=fibo(n);
  printf("%dth term of the Fibonacci Sequence is %d",n,term);
}
