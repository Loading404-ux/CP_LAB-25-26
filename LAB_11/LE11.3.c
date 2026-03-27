#include<stdio.h>
void main()
{
  int r1,c1,r2,c2;
  printf("Enter the row and column size of matrix 1:");
  scanf("%d%d",&r1,&c1);
  printf("Enter the row and column size of matrix 2:");
  scanf("%d%d",&r2,&c2);
  int a[r1][c1],b[r2][c2];
  printf("Enter the elements of matrix 1:\n");
  for(int i=0;i<r1;i++)
  {
    for(int j=0;j<c1;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  printf("Enter the elements of matrix 2:\n");
  for(int i=0;i<r2;i++)
  {
    for(int j=0;j<c2;j++)
    {
      scanf("%d",&b[i][j]);
    }
  }
  printf("Product of Matrix 1 and Matrix 2:\n");
  for(int i=0;i<r1;i++)
  {
    for(int j=0;j<c2;j++)
    {
      int sum=0;
      for(int k=0;k<c1;k++)
      {
        sum+=a[i][k]*b[k][j];
      }
      printf("%d ",sum);
    }
    printf("\n");
  }
}
