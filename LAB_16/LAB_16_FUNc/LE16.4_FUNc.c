#include<stdio.h>

int size;

int a[999];

void ACCEPT()
{
  printf("Enter the elements of the array:");
  for(int i=0;i<size;i++)
  scanf("%d",&a[i]);
}

void Reverse()
{
  int *ptr;
  ptr=a;
  printf("Reverse of given array is: ");
  for(int i=size-1;i>=0;i--)
  printf("%d ",*(ptr+i));
}
void main()
{
  printf("Enter the array size:");
  scanf("%d",&size);
  ACCEPT();
  Reverse();
  
}
