#include<stdio.h>
int fact(int n)
{
 int f=1;
 while(n>0)
 {
   f=f*n;
   n--;
 }
 return f;
}
void main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d",&num);
  int factorial=fact(num);
  printf("Factorial of %d = %d\n",num,factorial);
}
