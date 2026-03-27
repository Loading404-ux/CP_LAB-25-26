#include<stdio.h>
void main()
{
  int a,b,choice,result;
  printf("Enter two numbers: ");
  scanf("%d%d",&a,&b);
  printf("1. Add \n2. Subtract\n3. Multiply\n4. Divide\n5. Modulus \n");
  printf("Enter your choice:\n ");
  scanf("%d",&choice);
  switch(choice)
  {
  case 1:
  result=a+b;
  break;
  case 2:
  result=a-b;
  break;
  case 3:
  result=a*b;
  break;
  case 4:
  result=a/b;
  break;
  case 5:
  result=a%b;
  break;
  default:
  printf("Wrong Input");
  }
  printf("Result :%d\n",result);
}
