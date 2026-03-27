#include<stdio.h>
void main()
{
  int num1,num2,num3;
  int num=0;
  printf("Enter three numbers: ");
  scanf("%d%d%d", &num1,&num2,&num3);
  num=num1;
  if(num1<num2 && num2>num3)
  {
    num=num2;
  }
  if(num2<num3 && num3>num1)
  {
    num=num3;
  }
  printf("The largest number is : %d ", num);
}
