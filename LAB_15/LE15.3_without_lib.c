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
  char s1[l+1];
  int a=0;
  for(int i=l-1;i>=0;i--)
  {
  s1[a]=s[i];
  a++;
  }
  s1[a]='\0';
  printf("Reverse of the given string: %s",s1);
  
}
