#include<stdio.h>
int findGCD(int a,int b)
{
  if(b==0)
  return a;
  else
  {
   int rem=a%b;
   a=b;
   b=rem;
   return findGCD(a,b);
   
  }
}
void main()
{
  int a,b;
  printf("Enter two numbers:");
  scanf("%d%d",&a,&b);
  int g=findGCD(a,b);
  printf("GCD of %d and %d = %d",a,b,g);
}
