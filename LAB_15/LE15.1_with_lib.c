#include<stdio.h>
#include<string.h>
void main()
{
  char s[99];
  printf("Enter a string :");
  scanf("%[^\n]",s);
  int l=strlen(s);
  printf("Length of the string = %d\n",l);
  
}
