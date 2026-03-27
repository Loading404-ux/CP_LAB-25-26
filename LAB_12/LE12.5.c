#include<stdio.h>
void swap()
{
  int a,b;
  printf("Enter two numbers :");
  scanf("%d%d",&a,&b);
  printf("Before swapping the two numbers are: n1 = %d and n2 = %d\n",a,b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("After swapping the two numbers are: n1 = %d and n2 = %d\n",a,b);
  
}
void main()
{
 swap();
}
