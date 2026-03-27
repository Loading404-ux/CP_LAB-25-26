#include<stdio.h>
void main()
{
  int size;
  printf("Enter the array size : ");
  scanf("%d",&size);
  int arr[size];
  printf("Enter %d elements:",size);
  for(int i=0;i<size;i++)
  scanf("%d",&arr[i]);
  printf("Elements of the array are: ");
  for(int i=0;i<size;i++)
  printf("%d ",arr[i]);
}

