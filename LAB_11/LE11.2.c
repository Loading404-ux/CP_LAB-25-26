#include<stdio.h>
void main()
{
  int rows1,cols1,rows2,cols2;
  printf("Enter the row and column size of the matrix 1: ");
  scanf("%d%d",&rows1,&cols1);
  int a[rows1][cols1];
  printf("Enter the row and column size of the matrix 2: ");
  scanf("%d%d",&rows2,&cols2);
  int b[rows2][cols2];
  printf("Enter the elements of matrix 1:");
  for(int i=0;i<rows1;i++)
  {
    for(int j=0;j<cols1;j++)
    {
        scanf("%d",&a[i][j]);
    }
  }
  printf("Enter the elements of matrix 2:");
  for(int i=0;i<rows2;i++)
  {
    for(int j=0;j<cols2;j++)
    {
        scanf("%d",&b[i][j]);
    }
  }
  printf("Matrix 1:\n");
  for(int i=0;i<rows1;i++)
  {
    for(int j=0;j<cols1;j++)
    {
        printf("%d ",a[i][j]);
    }
    printf("\n");
  }
  printf("Matrix 2:\n");
  for(int i=0;i<rows2;i++)
  {
    for(int j=0;j<cols2;j++)
    {
        printf("%d ",b[i][j]);
    }
    printf("\n");
  }
  int sum[rows1][cols1];
  for(int i=0;i<rows1;i++)
  {
    for(int j=0;j<cols1;j++)
    {
       sum[i][j]=a[i][j]+b[i][j];
    }
  }
  printf("Sum of Matrix 1 and Matrix 2:\n");
  for(int i=0;i<rows1;i++)
  {
    for(int j=0;j<cols1;j++)
    {
        printf("%d ",sum[i][j]);
    }
    printf("\n");
  }


}
