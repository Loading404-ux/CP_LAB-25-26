#include<stdio.h>

int row,col;

void transpose(int *ptr[row][col])
{
  int *trans[row][col];
  for(int i=0;i<row;i++)
  {
   for(int j=0;j<col;j++)
   {
     trans[i][j]=ptr[j][i];
   }
  }
  printf("Transpose of given Matrix:\n");
  for(int i=0;i<row;i++)
  {
   for(int j=0;j<col;j++)
   {
     printf("%d ",**(*(trans+i)+j));
   }
   printf("\n");
  }
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
  transpose(ptr);
}
