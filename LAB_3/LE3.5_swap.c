#include<stdio.h>
void main()
{
 int a,b,temp;
 printf("Enter two numbers : ");
 scanf("%d%d",&a,&b);
 printf("Before swapping: number 1 = %d, number 2 = %d\n",a,b);
  temp=a;
  a=b;
  b=temp;
  printf("After swapping: number 1 = %d, number 2 = %d\n",a,b);
}
