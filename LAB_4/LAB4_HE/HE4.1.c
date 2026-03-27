#include<stdio.h>
#include<ctype.h>
void main()
{
 char c,c_u;
 printf("Enter an alphabet : ");
 scanf("%c",&c);
 int as=(int)c;
 if(as>=65 && as<=90)
 printf("You have entered ‘%c’ which is already in upper case\n",c);
 else
 if(as>=97 && as<=122)
 {
  c_u=toupper(c);
  printf("The upper case of the entered letter is %c\n",c_u);
 }
}
