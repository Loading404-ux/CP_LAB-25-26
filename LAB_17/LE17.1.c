#include<stdio.h>

void check(char *p)
{
  int i=0;
  int v=0,c=0;
  char vow[99],con[99];
  while(*(p+i)!='\0')
  {
    if(*(p+i)=='a'||*(p+i)=='e'||*(p+i)=='i'||*(p+i)=='o'||*(p+i)=='u'||*(p+i)=='A'||*(p+i)=='E'||*(p+i)=='I'||*(p+i)=='O'||*(p+i)=='U')
    {
    vow[v]=*(p+i);
    v++;
    }
    else
    {
    con[c]=*(p+i);
    c++;
    }
    i++;
  }
  printf("Consonants are:");
  for(int i=0;i<c;i++)
  printf("\n%c ",con[i]);
  printf("\n");
  printf("Vowels are:");
  for(int i=0;i<v;i++)
  printf("\n%c ",vow[i]);
  printf("\n");
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
  check(*p);
  
}
