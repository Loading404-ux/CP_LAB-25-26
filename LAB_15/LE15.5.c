#include<stdio.h>
#include<string.h>
void main()
{
  char s[999];
  char s1[999];
  printf("Enter a string :");
  scanf("%[^\n]",s);
  int l=strlen(s);
  s1[0]=s[0];
  int a=1;
  for(int i=1;i<=l;i++)
  {
    if(s[i]==' ')
    {
    s1[a]=s[i+1];
    a++;
    }
  }
  s1[a]='\0';
  printf("First character of each word of the given string:%s",s1);
  
  
}
