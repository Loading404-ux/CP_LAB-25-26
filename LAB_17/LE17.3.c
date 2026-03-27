#include<stdio.h>

int row,col;

void transpose(int ptr[row][col],int row)
{
  
}
void main()
{
  
  printf("Enter the number of rows of matrix:");
  scanf("%d",&row);
  printf("Enter the number of columns of matrix:");
  scanf("%d",&col);
  int a[row][col];
  printf("Enter the elements of the matrix (row major order):");
  int *ptr[row][col];
  for(int i=0;i<row;i++)
  {
   for(int j=0;j<col;j++)
   {
     scanf("%d",&a[i][j]);
     ptr[i][j]=&a[i][j];
   }
  }
  transpose(ptr[row][col],row);
}
