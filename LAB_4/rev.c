#include<stdio.h>
void main()
{
  int sum=0;
  int n,a;
  printf("Enter a number :");
  scanf("%d",&n);
  a=n%10;
  sum=sum*10+a;
  n=n/10;
  a=n%10;
  sum=sum*10+a;
  n=n/10;
  a=n%10;
  sum=sum*10+a;
  n=n/10;
  a=n%10;
  sum=sum*10+a;
  n=n/10;
  printf("Reverse : %d",sum);
}


