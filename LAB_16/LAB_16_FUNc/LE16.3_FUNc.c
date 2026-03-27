#include<stdio.h>

int size;

int a[999];

void Accept()
{
  printf("Enter the elements of the array:");
  for(int i=0;i<size;i++)
  scanf("%d",&a[i]);
}

int ADD()
{
  int sum=0;
  int *ptr;
  ptr=a;
  for(int i=0;i<size;i++)
  sum=sum+*(ptr+i);
  return sum;
}
void main()
{
  printf("Enter the array size:");
  scanf("%d",&size);
  Accept();
  int sum=ADD();
  printf("Sum of the elements of the array: %d\n",sum);
}
