#include<stdio.h>
void main()
{
  int rows,cols;
  printf("Enter the row or column size of a square matrix:");
  scanf("%d",&rows);
  cols=rows;
  int a[rows][cols];
  printf("Enter the elements of matrix:\n");
  for(int i=0;i<rows;i++)
  {
    for(int j=0;j<cols;j++)
    {
        scanf("%d",&a[i][j]);
    }
  }
  int sum=0;
  printf("Matrix:\n");
  for(int i=0;i<rows;i++)
  {
    for(int j=0;j<cols;j++)
    {
        printf("%d ",a[i][j]);
    }
    printf("\n");
  }
  for(int i=0;i<rows;i++)
  {
    for(int j=i;j<cols;j++)
    {
       sum +=a[i][j]; 
    }
  }
  printf("Sum of elements of upper triangular matrix: %d",sum);


}
