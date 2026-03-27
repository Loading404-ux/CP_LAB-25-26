#include<stdio.h>
void main()
{
  char i;
  printf("Enter a character: ");
  scanf("%c",&i);
  if(i=='A'||i=='E'||i=='I'||i=='O'||i=='U'||i=='a'||i=='e'||i=='i'||i=='o'||i=='u')
  {
  printf("The entered character %c is a vowel ",i);
  }
  else
  if(i=='!'||i=='@'||i=='#'||i=='$'||i=='%'||i=='^'||i=='&'||i=='*'||i=='('||i==')'||i=='_'||i=='-'||i=='+'||i=='=')
  {
   printf("The entered character %c is not an alphabet ",i);
  }
  else
  {
   printf("The entered character %c is a consonant ",i);
  }
  
}
