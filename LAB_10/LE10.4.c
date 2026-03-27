#include<stdio.h>
void main()
{
  int size;
  printf("Enter the array size: ");
  scanf("%d",&size);
  int arr[size];
  printf("Enter %d elements: ",size);
  for(int i=0;i<size;i++) 
    scanf("%d",&arr[i]);
  for(int i=0;i<size-1;i++)
  {
    for(int j=0;j<size-i-1;j++)
    {
       if(arr[j]>arr[j+1])
       {
         int temp=arr[j];
         arr[j]=arr[j+1];
         arr[j+1]=temp;
        }
    } 
  }
float med;
if(size%2==0) 
  med=(arr[size/2]+arr[(size/2)-1])/2.0;
else 
  med=arr[size/2];
printf("Median of the given array: %.2f",med);
}
