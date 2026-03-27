#include<stdio.h>
int add(int a,int b)
{
  return (a+b);
}
void main()
{
  int a,b;
  printf("Enter two Numbers :");
  scanf("%d%d",&a,&b);
  int sum=add(a,b);
  printf("Sum of %d and %d = %d\n",a,b,sum);
}
