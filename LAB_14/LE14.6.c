#include<stdio.h>

int a[999];
int size;

void accept()
{
 printf("Enter the size of the array:");
 scanf("%d",&size);
 a[size];
 printf("Enter the array elements:");
 for(int i=0;i<size;i++)
 scanf("%d",&a[i]);
}

int search(int n,int s)
{
  if(s<=-1)
  return -1;
    else
  if(a[s]==n)
  return s;
  else
  return search(n,s-1);
}


void main()
{
  accept();
  int n;
  printf("Enter the searching element: ");
  scanf("%d",&n);
  int index=search(n,size-1);
  if(index==-1)
  printf("Element not found!!!");
  else
  printf("Element found at index %d",index);
}
