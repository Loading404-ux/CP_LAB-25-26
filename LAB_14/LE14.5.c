#include<stdio.h>

int power(int x,int y)
{
 if(y==1)
 return x;
 else
 {
 return x*power(x,y-1);
 } 
}
void main()
{
  int x,y;
  printf("Enter the value of x and y:");
  scanf("%d%d",&x,&y);
  int po=power(x,y);
  printf("%d to the power %d = %d",x,y,po);
}
