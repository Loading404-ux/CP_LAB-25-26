#include<stdio.h>
void main()
{
 int a,b;
 printf("Enter two numbers : ");
 scanf("%d%d",&a,&b);
 printf("Before swapping: number 1 = %d, number 2 = %d\n",a,b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("After swapping: number 1 = %d, number 2 = %d\n",a,b);
}
