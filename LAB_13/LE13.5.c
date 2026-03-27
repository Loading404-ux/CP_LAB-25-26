#include<stdio.h>
void revArr(int a[],int size)
{
  int rev[size];
  int s=size-1;
  for(int i=0;i<size;i++){
  rev[i]=a[s];
  s--;
  }
  printf("Reverse of the array:");
 for(int i=0;i<size;i++)
 printf("%d ",rev[i]);
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
 printf("Original array:");
 for(int i=0;i<size;i++)
 printf("%d ",a[i]);
 printf("\n");
 revArr(a,size);
 
 
}
