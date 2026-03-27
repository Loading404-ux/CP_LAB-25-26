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
  int sum=0;
  int *ptr;
  ptr=a;
  for(int i=0;i<size;i++)
  sum=sum+*(ptr+i);
  printf("Sum of the elements of the array: %d\n",sum);
}
