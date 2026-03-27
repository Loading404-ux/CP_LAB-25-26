#include<stdio.h>
#include<string.h>
void main()
{
  char s1[999];
  char s2[999];
  printf("Enter the first string:");
  scanf(" %[^\n]",s1);
  printf("Enter the second string:");
  scanf(" %[^\n]",s2);
  int s=strcmp(s1,s2);
  if(s==0)
  printf("Both strings are same.");
  else
  if(s>0)
  printf("In the alphabetical order first string will be after the second string.");
  else
  if(s<0)
  printf("In the alphabetical order first string will be before the second string.");
}
