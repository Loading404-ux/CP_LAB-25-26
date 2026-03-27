#include<stdio.h>
#include<string.h>
void main()
{
  char s[99];
  printf("Enter a string :");
  scanf("%[^\n]",s);
  strrev(s);
  printf("Reverse of the given string: %s\n",s);
  
}
