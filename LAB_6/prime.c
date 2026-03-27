#include<stdio.h>
void main()
{
  int n;
  int c=0;
  printf("Enter a Number ");
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
    if(n%i==0)
     {
       c++;
     }
  }
  if(c==2)
  printf("Prime Number.\n");
  else
  printf("NOT a Prime Number.\n");
}
