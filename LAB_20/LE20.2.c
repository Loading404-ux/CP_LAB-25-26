#include<stdio.h>

union type
{
  char term;
  int num;
  float deci;
};


void input1(union type c1)
{
  printf("Values entered one by one:\n");
  printf("Enter a character:");
  scanf(" %c",&c1.term);
  printf("Enter an integer:");
  scanf("%d",&c1.num);
  printf("Enter a double:");
  scanf("%f",&c1.deci);
}

void display1(union type c1)
{
 printf("Character: %c",c1.term);
 printf("Integer: %d",c1.num);
 printf("Double: %d",c1.deci);
}

void input2(union type c2)
{
  
}

void main()
{
  union type c1,c2;
  
  void input1(c1);
  void display1(c1);
  
  void input2(c2);
  void display2(c2);
 
}

