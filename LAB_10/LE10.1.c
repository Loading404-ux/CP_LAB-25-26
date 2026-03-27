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
  printf("Before sorting elements are:");
  for(int i=0;i<size;i++)
  printf("%d ",arr[i]);
  int temp;
  for(int i=0;i<size;i++)
  {
    for(int j=0;j<size-i;j++)
    {
      if(arr[j]>arr[j+1])
      {
       temp=arr[j];
       arr[j]=arr[j+1];
       arr[j+1]=temp;
      }
    }
  }
  printf("\nAfter sorting elements are:");
  for(int i=0;i<size;i++)
  printf("%d ",arr[i]);
  
}
