#include<stdio.h>
int len(char s[])
{
  int l=0;
  while(s[l]!='\0')
  l++;
  return l;
}
void main()
{
  char s[99];
  printf("Enter a string:");
  scanf("%[^\n]",s);
  int l=len(s);
  printf("Length of the string = %d",l);
  
}
