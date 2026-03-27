#include<stdio.h>
void main()
{
  int a,b,result;
  char choice;
  printf("Enter two numbers: ");
  scanf("%d%d",&a,&b);
  printf("+. Add \n-. Subtract\n*. Multiply\n/. Divide\n %%. Modulus \n");
  printf("Enter your choice:\n ");
  scanf(" %c",&choice);
  switch(choice)
  {
  case '+':
  result=a+b;
  break;
  case '-':
  result=a-b;
  break;
  case '*':
  result=a*b;
  break;
  case '/':
  result=a/b;
  break;
  case '%':
  result=a%b;
  break;
  default:
  printf("Wrong Input\n");
  }
  printf("Result :%d\n",result);
}
