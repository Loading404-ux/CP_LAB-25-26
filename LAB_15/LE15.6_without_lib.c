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
  char s1[999];
  char s2[999];
  printf("Enter the first string:");
  scanf(" %[^\n]",s1);
  printf("Enter the second string:");
  scanf(" %[^\n]",s2);
  int l1=len(s1);
  int l2=len(s2);
  int l=(l1+l2)/2;
  int b=0,a=0,s=0;
  
  for(int i=0;i<l;i++)
  {
      int c1=(int)s1[i];
      int c2=(int)s2[i];
      if(c1==c2)
      s++;
      else
      if(c1>c2)
      {
      a++;
      break;
      }
      else
      if(c2>c1)
      {
      b++;
      break;
      }
  }
  
  if(s==l)
  printf("Both strings are same.");
  else
  if(a>b)
  printf("In the alphabetical order first string will be after the second string.");
  else
  if(b>a)
  printf("In the alphabetical order first string will be before the second string.");
  
  
}
