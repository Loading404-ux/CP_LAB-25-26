#include<stdio.h>
void main()
{
  float a,b,c,d,m,n,x1,x2;
  printf("Enter the value of a : ");
  scanf("%f",&a);
  printf("Enter the value of b : ");
  scanf("%f",&b);
  printf("Enter the value of c : ");
  scanf("%f",&c);
  printf("Enter the value of d : ");
  scanf("%f",&d);
  printf("Enter the value of m : ");
  scanf("%f",&m);
  printf("Enter the value of n : ");
  scanf("%f",&n);
  if(((a*b)-(c*d))==0)
  printf("The equaction is not linear \n");
  else
  if(((a*b)-(c*d))!=0)
  {
    x1=((m*d)-(b*n))/((a*d)-(c*b));
    x2=((n*a)-(m*c))/((a*d)-(c*b));
    printf("The value of x1 : %f\n",x1);
    printf("The value of x2 : %f\n",x2);
  }

}
