#include<stdio.h>
void main()
{
  int row,col;
  printf("Enter the value of row: ");
  scanf("%d",&row);
  printf("Enter the value of col:");
  scanf("%d",&col);
  for(int i=1;i<=row;i++)
  {
    if(i==1 || i==row)
    {
      for(int j=1;j<=col;j++)
      {
        printf("*");
      }
      printf("\n");
    }
    else
    {
      for(int j=1;j<=col;j++)
      {
        if(j==1||j==col)
        printf("*");
        else
        printf(" ");
      }
      printf("\n");
    }
  }
}
