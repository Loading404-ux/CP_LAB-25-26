#include<stdio.h>
void main()
{
  int a,b;
  printf("Enter two numbers :");
  scanf("%d%d",&a,&b);
  int *p,*q;
  p=&a;
  q=&b;
  printf("Product of %d and %d =%d",*p,*q,*p**q);	
}
