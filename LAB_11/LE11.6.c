#include<stdio.h>
void main()
{
  int rows,cols;
  printf("Enter the row and column size of the matrix:");
  scanf("%d",&rows);
  cols=rows;
  int a[rows][cols];
  int rsum[rows],csum[cols];
  printf("Enter the elements of matrix:\n");
  for(int i=0;i<rows;i++)
  {
    for(int j=0;j<cols;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  for(int i=0;i<rows;i++)
  {
    rsum[i]=0;
    for(int j=0;j<cols;j++)
    {
      rsum[i]+=a[i][j];
    }
  }
  for(int j=0;j<cols;j++)
  {
    csum[j]=0;
    for(int i=0;i<rows;i++)
    {
      csum[j]+=a[i][j];
    }
  }
  printf("ROW SUM\n");
  for(int j=0;j<cols;j++)
  {
    printf("%d ",rsum[j]);
  }
  printf("\n");
  printf("COL SUM\n");
  for(int j=0;j<cols;j++)
  {
    printf("%d ",csum[j]);
  }
}
