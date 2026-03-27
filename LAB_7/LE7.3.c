#include<stdio.h>
void main()
{
  int n=0;
  int c;
  printf("Enter a Number :");
  scanf("%d",&c);
  printf("Series :");
  while(n<=c)
  {
    printf("%d ,",n);
    n=(n*2)+1;
  }
  printf("\n");
}
