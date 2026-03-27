#include<stdio.h>
void main()
{
  int r1,r2;
  printf("Enter a range:");
  scanf("%d%d",&r1,&r2);
  printf("Odd numbers within range %d and %d:",r2,r1);
  for(int i=r2;i>=r1;i--)
  {
    if(i%2==0)
    printf("%d  ",i);
  }
  printf("\n");
  printf("Even numbers within range %d and %d:",r1,r2);
  for(int j=r1;j<=r2;j++)
  {
    if(j%3==0)
    printf("%d  ",j);
  }
  printf("\n");
}

