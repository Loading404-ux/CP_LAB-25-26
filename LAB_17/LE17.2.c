#include<stdio.h>

void swap(char *p,int i)
{
  int c=0;
  char temp;
  while(i>c)
  {
    if(c%2==0)
    {
   temp=*(p+c);
   *(p+c)=*(p+c+1);
   *(p+c+1)=temp;
   }
   c=c+2;
  }
  printf("String: ");
  int a=0;
  while(*(p+a)!='\0')
  {
  printf("%c",*(p+a));
  a++;
  }
}
void main()
{
  char s[999];
  printf("Enter the string: ");
  scanf("%[^\n]",s);
  char *p[999];
  int i=0;
  while(s[i]!='\0')
  {
  p[i]=&s[i];
  i++;
  }
  
  if(i%2==0)
  swap(*p,i);
  else
  printf("The length of the string is Odd.");
}
