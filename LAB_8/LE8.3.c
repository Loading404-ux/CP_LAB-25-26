#include<stdio.h>
void main()
{
  int ci=65;
  char c;
  int n;
  printf("Enter the value of n: ");
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  { 
     for(int j=1;j<=i;j++)
     {
     c=(char)ci;
       printf("%c",c);
       ci--;
     }
     printf("\n");
     ci=65+i;
  }
}
