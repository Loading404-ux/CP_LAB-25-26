#include<stdio.h>
#include<string.h>

void main()
{
  char first[99];
  char sec[99];
  printf("Enter first string:");
  scanf(" %[^\n]",first);
  printf("Enter second string:");
  scanf(" %[^\n]",sec);
  char *f,*s;
  f=first;
  s=sec;
  printf("Concatenated string =%s %s",f,s);
}
