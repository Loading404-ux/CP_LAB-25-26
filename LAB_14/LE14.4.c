#include<stdio.h>

int prime_factor(int n,int i)
{
  if(n==1)
  return 1;
  else
  if(n%i==0)
  {
    printf("%d ",i);
    n/=i;
    return prime_factor(n,i);
  }
  else
  return prime_factor(n,i+1);
}
void main()
{
  int n;
  int i=2;
  printf("Enter a number: ");
  scanf("%d",&n);
  printf("Prime factors of %d are:",n);
  int t=prime_factor(n,i);
}
