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
  int max=arr[0];
  for(int i=1;i<size;i++)
  {
    if(max<arr[i])
    max=arr[i];
  }
  printf("Largest element of the array:%d",max);
}
