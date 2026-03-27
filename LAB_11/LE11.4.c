#include<stdio.h>
void main()
{
  int rows,cols;
  printf("Enter the row and column size of the matrix: ");
  scanf("%d%d",&rows,&cols);
  int a[rows][cols];
  printf("Enter the elements of matrix:\n");
  for(int i=0;i<rows;i++)
  {
    for(int j=0;j<cols;j++)
    {
        scanf("%d",&a[i][j]);
    }
  }
  printf("Original Matrix:\n");
  for(int i=0;i<rows;i++)
  {
    for(int j=0;j<cols;j++)
    {
        printf("%d ",a[i][j]);
    }
    printf("\n");
  }
  printf("Transpose of the given Matrix:\n");
  for(int i=0;i<rows;i++)
  {
    for(int j=0;j<cols;j++)
    {
        printf("%d ",a[j][i]);
    }
    printf("\n");
  }
}
