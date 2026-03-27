#include<stdio.h>
#include<string.h>
void main()
{
  char s[99];
  char r;
  char r1;
  printf("Enter a string :");
  scanf("%[^\n]",s);
  int l=strlen(s);
  printf("Enter the character to be replaced: ");
  scanf(" %c",&r);
  printf("Enter the character to be replaced with: ");
  scanf(" %c",&r1);
  for(int i=0;i<=l;i++)
  {
    if(s[i]==r)
    s[i]=r1;
  }
  printf("After replacement, string is:%s",s);
  
  
}
