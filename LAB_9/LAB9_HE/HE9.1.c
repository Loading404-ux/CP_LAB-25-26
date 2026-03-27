#include<stdio.h>
void main()
{
  int size,sum=0;
  float avg;
  printf("Enter the array size : ");
  scanf("%d",&size);
  int arr[size];
  printf("Enter %d elements:",size);
  for(int i=0;i<size;i++)
  scanf("%d",&arr[i]);
  for(int i=0;i<size;i++)
  sum+=arr[i];
  avg=(sum/size);
}
