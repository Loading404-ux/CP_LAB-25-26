#include<stdio.h>
void main()
{
  int rows,cols;
  printf("Enter the row and column size of the matrix: ");
  scanf("%d%d",&rows,&cols);
  int a[rows][cols];
  printf("Enter the elements of the matrix of order %d x %d:",rows,cols);
  for(int i=0;i<rows;i++)
  {
    for(int j=0;j<cols;j++)
    {
        scanf("%d",&a[i][j]);
    }
  }
  int sum=0;
  printf("Original Matrix:\n");
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
    for(int j=0;j<cols;j++)
    {
       sum +=a[i][j]; 
    }
  }
  printf("Sum of the elements of the matrix: %d",sum);


}
