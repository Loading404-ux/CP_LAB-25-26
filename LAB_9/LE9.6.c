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
  printf("Array elements:");
  for(int i=0;i<size;i++)
  printf("%d ",arr[i]);
  printf("\n");
  int rev[size];
  int a=size-1;
  for(int i=0;i<size;i++)
  {
    rev[i]=arr[a];
    a--;
  }
  printf("Reverse of the array:");
  for(int i=0;i<size;i++)
  printf("%d ",rev[i]);
}
