#include<stdio.h>
int prime(int n)
{
  int c=0;
  for(int i=1;i<=n;i++)
  {
    if(n%i==0)
    c++;
  }
  if(c==2)
  return 1;
  else
  return 0;
}
 
void main()
{
  int n,check;
  printf("Enter a Number:");
  scanf("%d",&n);
  check=prime(n);
  if(check==1)
  printf("%d is a prime number.",n);
  else
  printf("%d is not a prime number.",n);
  
}
