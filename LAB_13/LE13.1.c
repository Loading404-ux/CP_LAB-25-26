#include<stdio.h>
int sum(int arr[],int size)
{
   int s=0;
  for(int i=0;i<size;i++)
  s+=arr[i];
  return s;
}
void main()
{
 int size;
 printf("Enter the size of the array: ");
 scanf("%d",&size);
 int a[size];
 printf("Enter the array elements:");
 for(int i=0;i<size;i++)
 scanf("%d",&a[i]);
 int add=sum(a,size);
 printf("Sum of the elements of the array = %d",add);
 
 
}
