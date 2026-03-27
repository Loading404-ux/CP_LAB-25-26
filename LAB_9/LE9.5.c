#include<stdio.h>
void main()
{
  int size,ins,pos,temp;
  printf("Enter the array size : ");
  scanf("%d",&size);
  int arr[size+1];
  printf("Enter %d elements:",size);
  for(int i=0;i<size;i++)
  scanf("%d",&arr[i]);
  printf("Enter the element to be inserted:");
  scanf("%d",&ins);
  printf("Enter the position of insertion:");
  scanf("%d",&pos);
  for(int i=size-1;i>pos;i--)
  {
    arr[i+1]=arr[i];
    arr[i]=arr[i-1];
  }
  arr[pos]=ins;
  printf("Elements of the array are: ");
  for(int i=0;i<size+1;i++)
  printf("%d ",arr[i]);
}
