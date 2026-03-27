#include<stdio.h>
#include<string.h>
void main()
{
  char s[99];
  printf("Enter the source string:");
  scanf("%[^\n]",s);
  int l=strlen(s);
  char s1[l+1];
  strcpy(s1,s);
  printf("After copying:\n\n");
  printf("Source string:%s\n",s);
  printf("Destination string:%s\n",s1);
  
}
