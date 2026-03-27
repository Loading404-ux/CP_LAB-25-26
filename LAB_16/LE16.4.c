#include<stdio.h>
void main()
{
  int size;
  printf("Enter the array size:");
  scanf("%d",&size);
  int a[size];
  printf("Enter the elements of the array:");
  for(int i=0;i<size;i++)
  scanf("%d",&a[i]);
  int *ptr;
  ptr=a;
  printf("Reverse of given array is: ");
  for(int i=size-1;i>=0;i--)
  printf("%d ",*(ptr+i));
}
