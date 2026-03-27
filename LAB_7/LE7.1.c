#include<stdio.h>
#include<math.h>
void main()
{
  int x,n;
  double fact=1.0;
  printf("Enter the value of x and n: ");
  scanf("%d%d",&x,&n);
  double power=pow(x,n);
  int temp=n;
  while(temp!=0)
  {
    fact=fact*temp;
    temp--;
  }
  double result=power/fact;
  printf("%d to the power %d divided by %d! = %lf",x,n,n,result);
}
