#include<stdio.h>
void sort(int a[],int size)
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
  printf("\nAfter sorting the elements of the array are:");
  for(int i=0;i<size;i++)
  printf("%d ",a[i]);
  printf("\n");
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
 printf("Before sorting the elements of the array are:");
 for(int i=0;i<size;i++)
 printf("%d ",a[i]);
 sort(a,size);
 
 
}
