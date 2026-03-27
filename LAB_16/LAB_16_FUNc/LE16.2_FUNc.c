#include<stdio.h>
int a,b,c; 

int *p,*q,*r;

void swap()
{
 int temp1=*r;
  int temp3=*p;
  int temp2=*q;
  a=temp1;
  c=temp2;
  b=temp3;
}
void main()
{
  printf("Enter three numbers: ");
  scanf("%d%d%d",&a,&b,&c);
  printf("Before swapping the numbers are: a=%d, b=%d, c=%d\n",a,b,c);
  p=&a;
  q=&b;
  r=&c;
  swap();
  printf("After swapping the numbers are: a=%d, b=%d, c=%d\n",a,b,c);
}
