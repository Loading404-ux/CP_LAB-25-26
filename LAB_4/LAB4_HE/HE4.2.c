#include<stdio.h>
void main()
{
 char c;
 printf("Enter a character: ");
 scanf("%c",&c);
 int as=(int)c;
 if((as>=33 && as<=47 )||(as>=91 && as<=96)||(as>=123 && as<=126))
 printf("Entered character %c is a special character\n",c);
 else
 if((as>=65 && as<=90)||(as>=97 && as<=122))
 printf("Entered character %c is a letter\n",c);
 else
 if(as>=48 && as<=57)
 printf("Entered character %c is a digit\n",c);
}
