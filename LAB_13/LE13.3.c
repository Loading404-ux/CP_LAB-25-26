#include<stdio.h>
void large_small(int a[],int size)
{
  for(int i=0;i<size;i++)
  {
    for(int j=i+1;j<size;j++)
    {
    if(a[i]>a[j])
    {
      int temp=a[i];
      a[i]=a[j];
      a[j]=temp;
    }
    }
  }
  printf("Largest element of the given array: %d\n",a[0]);
  printf("Smallest element of the given array: %d\n",a[size-1]);
  
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
 large_small(a,size);
 
 
}
