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
  char s[999];
  printf("Enter the source string:");
  scanf("%[^\n]",s);
  int l=len(s);
  char s1[l+1];
  for(int i=0;i<=l+1;i++)
  s1[i]=s[i];
  printf("After copying:\n\n");
  printf("Source string:%s\n",s);
  printf("Destination string:%s\n",s1);
  
}
